/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the ARM target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 59;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_NoHonorSignDependentRoundingBit = 52,
  Feature_HasV4TBit = 6,
  Feature_NoV4TBit = 7,
  Feature_HasV5TBit = 8,
  Feature_HasV5TEBit = 12,
  Feature_HasV6Bit = 1,
  Feature_NoV6Bit = 10,
  Feature_HasV6MBit = 27,
  Feature_HasV8MBaselineBit = 31,
  Feature_HasV6T2Bit = 9,
  Feature_HasV6KBit = 19,
  Feature_HasV7Bit = 2,
  Feature_HasV8Bit = 14,
  Feature_PreV8Bit = 20,
  Feature_HasV8_1aBit = 54,
  Feature_NoVFPBit = 22,
  Feature_HasVFP2Bit = 21,
  Feature_HasVFP3Bit = 43,
  Feature_HasVFP4Bit = 41,
  Feature_HasDPVFPBit = 35,
  Feature_HasFPARMv8Bit = 37,
  Feature_HasNEONBit = 44,
  Feature_HasCryptoBit = 46,
  Feature_HasCRCBit = 15,
  Feature_HasFP16Bit = 50,
  Feature_HasFullFP16Bit = 45,
  Feature_HasDivideInThumbBit = 33,
  Feature_HasDivideInARMBit = 13,
  Feature_HasDSPBit = 32,
  Feature_HasDBBit = 16,
  Feature_HasV7ClrexBit = 18,
  Feature_HasAcquireReleaseBit = 17,
  Feature_HasMPBit = 3,
  Feature_HasZCZBit = 47,
  Feature_UseNEONForFPBit = 57,
  Feature_DontUseNEONForFPBit = 36,
  Feature_IsThumbBit = 25,
  Feature_IsThumb1OnlyBit = 26,
  Feature_IsThumb2Bit = 30,
  Feature_IsNotMClassBit = 34,
  Feature_IsARMBit = 0,
  Feature_IsWindowsBit = 28,
  Feature_IsNotWindowsBit = 29,
  Feature_UseNaClTrapBit = 4,
  Feature_DontUseNaClTrapBit = 5,
  Feature_UseMovtBit = 24,
  Feature_DontUseMovtBit = 23,
  Feature_UseFPVMLxBit = 39,
  Feature_UseMulOpsBit = 11,
  Feature_UseFusedMACBit = 42,
  Feature_DontUseFusedMACBit = 40,
  Feature_HasFastVGETLNi32Bit = 48,
  Feature_HasSlowVGETLNi32Bit = 55,
  Feature_HasFastVDUP32Bit = 49,
  Feature_HasSlowVDUP32Bit = 56,
  Feature_UseVMOVSRBit = 38,
  Feature_DontUseVMOVSRBit = 58,
  Feature_IsLEBit = 51,
  Feature_IsBEBit = 53,
};

PredicateBitset ARMInstructionSelector::
computeAvailableModuleFeatures(const ARMSubtarget *Subtarget) const {
  PredicateBitset Features;
  if (!TM.Options.HonorSignDependentRoundingFPMath())
    Features[Feature_NoHonorSignDependentRoundingBit] = 1;
  if (Subtarget->hasV4TOps())
    Features[Feature_HasV4TBit] = 1;
  if (!Subtarget->hasV4TOps())
    Features[Feature_NoV4TBit] = 1;
  if (Subtarget->hasV5TOps())
    Features[Feature_HasV5TBit] = 1;
  if (Subtarget->hasV5TEOps())
    Features[Feature_HasV5TEBit] = 1;
  if (Subtarget->hasV6Ops())
    Features[Feature_HasV6Bit] = 1;
  if (!Subtarget->hasV6Ops())
    Features[Feature_NoV6Bit] = 1;
  if (Subtarget->hasV6MOps())
    Features[Feature_HasV6MBit] = 1;
  if (Subtarget->hasV8MBaselineOps())
    Features[Feature_HasV8MBaselineBit] = 1;
  if (Subtarget->hasV6T2Ops())
    Features[Feature_HasV6T2Bit] = 1;
  if (Subtarget->hasV6KOps())
    Features[Feature_HasV6KBit] = 1;
  if (Subtarget->hasV7Ops())
    Features[Feature_HasV7Bit] = 1;
  if (Subtarget->hasV8Ops())
    Features[Feature_HasV8Bit] = 1;
  if (!Subtarget->hasV8Ops())
    Features[Feature_PreV8Bit] = 1;
  if (Subtarget->hasV8_1aOps())
    Features[Feature_HasV8_1aBit] = 1;
  if (!Subtarget->hasVFP2())
    Features[Feature_NoVFPBit] = 1;
  if (Subtarget->hasVFP2())
    Features[Feature_HasVFP2Bit] = 1;
  if (Subtarget->hasVFP3())
    Features[Feature_HasVFP3Bit] = 1;
  if (Subtarget->hasVFP4())
    Features[Feature_HasVFP4Bit] = 1;
  if (!Subtarget->isFPOnlySP())
    Features[Feature_HasDPVFPBit] = 1;
  if (Subtarget->hasFPARMv8())
    Features[Feature_HasFPARMv8Bit] = 1;
  if (Subtarget->hasNEON())
    Features[Feature_HasNEONBit] = 1;
  if (Subtarget->hasCrypto())
    Features[Feature_HasCryptoBit] = 1;
  if (Subtarget->hasCRC())
    Features[Feature_HasCRCBit] = 1;
  if (Subtarget->hasFP16())
    Features[Feature_HasFP16Bit] = 1;
  if (Subtarget->hasFullFP16())
    Features[Feature_HasFullFP16Bit] = 1;
  if (Subtarget->hasDivideInThumbMode())
    Features[Feature_HasDivideInThumbBit] = 1;
  if (Subtarget->hasDivideInARMMode())
    Features[Feature_HasDivideInARMBit] = 1;
  if (Subtarget->hasDSP())
    Features[Feature_HasDSPBit] = 1;
  if (Subtarget->hasDataBarrier())
    Features[Feature_HasDBBit] = 1;
  if (Subtarget->hasV7Clrex())
    Features[Feature_HasV7ClrexBit] = 1;
  if (Subtarget->hasAcquireRelease())
    Features[Feature_HasAcquireReleaseBit] = 1;
  if (Subtarget->hasMPExtension())
    Features[Feature_HasMPBit] = 1;
  if (Subtarget->hasZeroCycleZeroing())
    Features[Feature_HasZCZBit] = 1;
  if (Subtarget->useNEONForSinglePrecisionFP())
    Features[Feature_UseNEONForFPBit] = 1;
  if (!Subtarget->useNEONForSinglePrecisionFP())
    Features[Feature_DontUseNEONForFPBit] = 1;
  if (Subtarget->isThumb())
    Features[Feature_IsThumbBit] = 1;
  if (Subtarget->isThumb1Only())
    Features[Feature_IsThumb1OnlyBit] = 1;
  if (Subtarget->isThumb2())
    Features[Feature_IsThumb2Bit] = 1;
  if (!Subtarget->isMClass())
    Features[Feature_IsNotMClassBit] = 1;
  if (!Subtarget->isThumb())
    Features[Feature_IsARMBit] = 1;
  if (Subtarget->isTargetWindows())
    Features[Feature_IsWindowsBit] = 1;
  if (!Subtarget->isTargetWindows())
    Features[Feature_IsNotWindowsBit] = 1;
  if (Subtarget->useNaClTrap())
    Features[Feature_UseNaClTrapBit] = 1;
  if (!Subtarget->useNaClTrap())
    Features[Feature_DontUseNaClTrapBit] = 1;
  if (Subtarget->useFPVMLx())
    Features[Feature_UseFPVMLxBit] = 1;
  if (Subtarget->useMulOps())
    Features[Feature_UseMulOpsBit] = 1;
  if ((TM.Options.AllowFPOpFusion == FPOpFusion::Fast &&  Subtarget->hasVFP4()) && !Subtarget->isTargetDarwin())
    Features[Feature_UseFusedMACBit] = 1;
  if (!(TM.Options.AllowFPOpFusion == FPOpFusion::Fast && Subtarget->hasVFP4()) || Subtarget->isTargetDarwin())
    Features[Feature_DontUseFusedMACBit] = 1;
  if (!Subtarget->hasSlowVGETLNi32())
    Features[Feature_HasFastVGETLNi32Bit] = 1;
  if (Subtarget->hasSlowVGETLNi32())
    Features[Feature_HasSlowVGETLNi32Bit] = 1;
  if (!Subtarget->hasSlowVDUP32())
    Features[Feature_HasFastVDUP32Bit] = 1;
  if (Subtarget->hasSlowVDUP32())
    Features[Feature_HasSlowVDUP32Bit] = 1;
  if (Subtarget->preferVMOVSR() ||!Subtarget->useNEONForSinglePrecisionFP())
    Features[Feature_UseVMOVSRBit] = 1;
  if (!Subtarget->preferVMOVSR() &&Subtarget->useNEONForSinglePrecisionFP())
    Features[Feature_DontUseVMOVSRBit] = 1;
  return Features;
}

PredicateBitset ARMInstructionSelector::
computeAvailableFunctionFeatures(const ARMSubtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  if (Subtarget->useMovt(*MF))
    Features[Feature_UseMovtBit] = 1;
  if (!Subtarget->useMovt(*MF))
    Features[Feature_DontUseMovtBit] = 1;
  if (MF->getDataLayout().isLittleEndian())
    Features[Feature_IsLEBit] = 1;
  if (MF->getDataLayout().isBigEndian())
    Features[Feature_IsBEBit] = 1;
  return Features;
}

bool ARMInstructionSelector::selectImpl(MachineInstr &I) const {
  MachineFunction &MF = *I.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  // FIXME: This should be computed on a per-function basis rather than per-insn.
  AvailableFunctionFeatures = computeAvailableFunctionFeatures(&STI, &MF);
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v8i16 (sext:v8i16 DPR:v8i8:$Vn), (sext:v8i16 DPR:v8i8:$Vm))  =>  (VADDLsv8i16:v8i16 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDLsv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v4i32 (sext:v4i32 DPR:v4i16:$Vn), (sext:v4i32 DPR:v4i16:$Vm))  =>  (VADDLsv4i32:v4i32 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDLsv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v2i64 (sext:v2i64 DPR:v2i32:$Vn), (sext:v2i64 DPR:v2i32:$Vm))  =>  (VADDLsv2i64:v2i64 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDLsv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v8i16 (zext:v8i16 DPR:v8i8:$Vn), (zext:v8i16 DPR:v8i8:$Vm))  =>  (VADDLuv8i16:v8i16 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDLuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v4i32 (zext:v4i32 DPR:v4i16:$Vn), (zext:v4i32 DPR:v4i16:$Vm))  =>  (VADDLuv4i32:v4i32 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDLuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (add:v2i64 (zext:v2i64 DPR:v2i32:$Vn), (zext:v2i64 DPR:v2i32:$Vm))  =>  (VADDLuv2i64:v2i64 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDLuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV6Bit, Feature_UseMulOpsBit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:i32 (mul:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm), GPRnopc:i32:$Ra)  =>  (MLA:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm, GPRnopc:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MLA));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_NoV6Bit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:i32 (mul:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm), GPRnopc:i32:$Ra)  =>  (MLAv5:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm, GPRnopc:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MLAv5));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit, Feature_UseMulOpsBit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:i32 (mul:i32 rGPR:i32:$Rn, rGPR:i32:$Rm), rGPR:i32:$Ra)  =>  (t2MLA:i32 rGPR:i32:$Rn, rGPR:i32:$Rm, rGPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2MLA));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV5TEBit, Feature_UseMulOpsBit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 16, MRI)))))
))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i32 (mul:i32 (sra:i32 GPRnopc:i32:$Rn, 16:i32), (sra:i32 GPRnopc:i32:$Rm, 16:i32)), GPR:i32:$Ra)  =>  (SMLATT:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm, GPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::SMLATT));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit, Feature_HasDSPBit, Feature_UseMulOpsBit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 16, MRI)))))
))))
))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i32 (mul:i32 (sra:i32 rGPR:i32:$Rn, 16:i32), (sra:i32 rGPR:i32:$Rm, 16:i32)), rGPR:i32:$Ra)  =>  (t2SMLATT:i32 rGPR:i32:$Rn, rGPR:i32:$Rm, rGPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2SMLATT));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(2)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (sext:v8i16 DPR:v8i8:$Vm), QPR:v8i16:$Vn)  =>  (VADDWsv8i16:v8i16 QPR:v8i16:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWsv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (sext:v4i32 DPR:v4i16:$Vm), QPR:v4i32:$Vn)  =>  (VADDWsv4i32:v4i32 QPR:v4i32:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWsv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 (sext:v2i64 DPR:v2i32:$Vm), QPR:v2i64:$Vn)  =>  (VADDWsv2i64:v2i64 QPR:v2i64:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWsv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (zext:v8i16 DPR:v8i8:$Vm), QPR:v8i16:$Vn)  =>  (VADDWuv8i16:v8i16 QPR:v8i16:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (zext:v4i32 DPR:v4i16:$Vm), QPR:v4i32:$Vn)  =>  (VADDWuv4i32:v4i32 QPR:v4i32:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 (zext:v2i64 DPR:v2i32:$Vm), QPR:v2i64:$Vn)  =>  (VADDWuv2i64:v2i64 QPR:v2i64:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 8))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i8 (mul:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm), DPR:v8i8:$src1)  =>  (VMLAv8i8:v8i8 DPR:v8i8:$src1, DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i16 (mul:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm), DPR:v4i16:$src1)  =>  (VMLAv4i16:v4i16 DPR:v4i16:$src1, DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i32 (mul:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm), DPR:v2i32:$src1)  =>  (VMLAv2i32:v2i32 DPR:v2i32:$src1, DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(16, 8))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v16i8 (mul:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm), QPR:v16i8:$src1)  =>  (VMLAv16i8:v16i8 QPR:v16i8:$src1, QPR:v16i8:$Vn, QPR:v16i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv16i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (mul:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm), QPR:v8i16:$src1)  =>  (VMLAv8i16:v8i16 QPR:v8i16:$src1, QPR:v8i16:$Vn, QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (mul:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm), QPR:v4i32:$src1)  =>  (VMLAv4i32:v4i32 QPR:v4i32:$src1, QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV5TEBit, Feature_UseMulOpsBit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 16, MRI)))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i32 GPR:i32:$Ra, (mul:i32 (sra:i32 GPRnopc:i32:$Rn, 16:i32), (sra:i32 GPRnopc:i32:$Rm, 16:i32)))  =>  (SMLATT:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm, GPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::SMLATT));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit, Feature_HasDSPBit, Feature_UseMulOpsBit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI3.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 16, MRI)))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (add:i32 rGPR:i32:$Ra, (mul:i32 (sra:i32 rGPR:i32:$Rn, 16:i32), (sra:i32 rGPR:i32:$Rm, 16:i32)))  =>  (t2SMLATT:i32 rGPR:i32:$Rn, rGPR:i32:$Rm, rGPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2SMLATT));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rn*/);
    MIB.add(MI3.getOperand(1)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 QPR:v8i16:$Vn, (sext:v8i16 DPR:v8i8:$Vm))  =>  (VADDWsv8i16:v8i16 QPR:v8i16:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWsv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 QPR:v4i32:$Vn, (sext:v4i32 DPR:v4i16:$Vm))  =>  (VADDWsv4i32:v4i32 QPR:v4i32:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWsv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 QPR:v2i64:$Vn, (sext:v2i64 DPR:v2i32:$Vm))  =>  (VADDWsv2i64:v2i64 QPR:v2i64:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWsv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 QPR:v8i16:$Vn, (zext:v8i16 DPR:v8i8:$Vm))  =>  (VADDWuv8i16:v8i16 QPR:v8i16:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 QPR:v4i32:$Vn, (zext:v4i32 DPR:v4i16:$Vm))  =>  (VADDWuv4i32:v4i32 QPR:v4i32:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i64 QPR:v2i64:$Vn, (zext:v2i64 DPR:v2i32:$Vm))  =>  (VADDWuv2i64:v2i64 QPR:v2i64:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDWuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 8))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i8 DPR:v8i8:$src1, (mul:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm))  =>  (VMLAv8i8:v8i8 DPR:v8i8:$src1, DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i16 DPR:v4i16:$src1, (mul:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm))  =>  (VMLAv4i16:v4i16 DPR:v4i16:$src1, DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v2i32 DPR:v2i32:$src1, (mul:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm))  =>  (VMLAv2i32:v2i32 DPR:v2i32:$src1, DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(16, 8))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v16i8 QPR:v16i8:$src1, (mul:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm))  =>  (VMLAv16i8:v16i8 QPR:v16i8:$src1, QPR:v16i8:$Vn, QPR:v16i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv16i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 QPR:v8i16:$src1, (mul:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm))  =>  (VMLAv8i16:v8i16 QPR:v8i16:$src1, QPR:v8i16:$Vn, QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 QPR:v4i32:$src1, (mul:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm))  =>  (VMLAv4i32:v4i32 QPR:v4i32:$src1, QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLAv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV6Bit, Feature_UseMulOpsBit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:i32 GPRnopc:i32:$Ra, (mul:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm))  =>  (MLA:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm, GPRnopc:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MLA));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_NoV6Bit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:i32 GPRnopc:i32:$Ra, (mul:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm))  =>  (MLAv5:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm, GPRnopc:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MLAv5));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit, Feature_UseMulOpsBit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:i32 rGPR:i32:$Ra, (mul:i32 rGPR:i32:$Rn, rGPR:i32:$Rm))  =>  (t2MLA:i32 rGPR:i32:$Rn, rGPR:i32:$Rm, rGPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2MLA));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (ADDrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::ADDrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 GPRnopc:i32:$Rn, rGPR:i32:$Rm)  =>  (t2ADDrr:i32 GPRnopc:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ADDrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm)  =>  (VADDv8i8:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm)  =>  (VADDv4i16:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)  =>  (VADDv2i32:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm)  =>  (VADDv16i8:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv16i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm)  =>  (VADDv8i16:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)  =>  (VADDv4i32:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v1i64 DPR:v1i64:$Vn, DPR:v1i64:$Vm)  =>  (VADDv1i64:v1i64 DPR:v1i64:$Vn, DPR:v1i64:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv1i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i64 QPR:v2i64:$Vn, QPR:v2i64:$Vm)  =>  (VADDv2i64:v2i64 QPR:v2i64:$Vn, QPR:v2i64:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 rGPR:i32:$Rm, GPRnopc:i32:$Rn)  =>  (t2ADDrr:i32 GPRnopc:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ADDrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (xor:i32 GPR:i32:$Rm, -1:i32), GPR:i32:$Rn)  =>  (BICrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::BICrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (xor:i32 rGPR:i32:$Rm, -1:i32), rGPR:i32:$Rn)  =>  (t2BICrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2BICrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 GPR:i32:$Rn, (xor:i32 GPR:i32:$Rm, -1:i32))  =>  (BICrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::BICrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 rGPR:i32:$Rn, (xor:i32 rGPR:i32:$Rm, -1:i32))  =>  (t2BICrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2BICrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumbBit, Feature_IsThumb1OnlyBit, Feature_HasV6Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::tGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::tGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), 255, MRI))))) {
// (and:i32 tGPR:i32:$Rm, 255:i32)  =>  (tUXTB:i32 tGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::tUXTB));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumbBit, Feature_IsThumb1OnlyBit, Feature_HasV6Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::tGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::tGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), 65535, MRI))))) {
// (and:i32 tGPR:i32:$Rm, 65535:i32)  =>  (tUXTH:i32 tGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::tUXTH));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (ANDrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::ANDrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2ANDrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ANDrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)  =>  (VANDd:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VANDd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)  =>  (VANDq:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VANDq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2ASRrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ASRrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fadd:v4f16 (fmul:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm), DPR:v4f16:$src1)  =>  (VFMAhd:v4f16 DPR:v4f16:$src1, DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VFMAhd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fadd:v8f16 (fmul:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm), QPR:v8f16:$src1)  =>  (VFMAhq:v8f16 QPR:v8f16:$src1, QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VFMAhq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(2)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fadd:v4f16 DPR:v4f16:$src1, (fmul:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm))  =>  (VFMAhd:v4f16 DPR:v4f16:$src1, DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VFMAhd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fadd:v8f16 QPR:v8f16:$src1, (fmul:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm))  =>  (VFMAhq:v8f16 QPR:v8f16:$src1, QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VFMAhq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Dn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f64 DPR:f64:$Dn, DPR:f64:$Dm)  =>  (VADDD:f64 DPR:f64:$Dn, DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Dn*/);
    MIB.add(MI0.getOperand(2)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_DontUseNEONForFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f32 SPR:f32:$Sn, SPR:f32:$Sm)  =>  (VADDS:f32 SPR:f32:$Sn, SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI0.getOperand(1)/*Sn*/);
    MIB.add(MI0.getOperand(2)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v2f32 DPR:v2f32:$Vn, DPR:v2f32:$Vm)  =>  (VADDfd:v2f32 DPR:v2f32:$Vn, DPR:v2f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDfd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f32 QPR:v4f32:$Vn, QPR:v4f32:$Vm)  =>  (VADDfq:v4f32 QPR:v4f32:$Vn, QPR:v4f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDfq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm)  =>  (VADDhd:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDhd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm)  =>  (VADDhq:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VADDhq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Dn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f64 DPR:f64:$Dn, DPR:f64:$Dm)  =>  (VDIVD:f64 DPR:f64:$Dn, DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VDIVD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Dn*/);
    MIB.add(MI0.getOperand(2)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f32 SPR:f32:$Sn, SPR:f32:$Sm)  =>  (VDIVS:f32 SPR:f32:$Sn, SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VDIVS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI0.getOperand(1)/*Sn*/);
    MIB.add(MI0.getOperand(2)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_NoHonorSignDependentRoundingBit, Feature_HasDPVFPBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* a */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* b */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fmul:f64 (fneg:f64 DPR:f64:$a), DPR:f64:$b)  =>  (VNMULD:f64 DPR:f64:$a, DPR:f64:$b)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNMULD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI1.getOperand(1)/*a*/);
    MIB.add(MI0.getOperand(2)/*b*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_NoHonorSignDependentRoundingBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* a */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* b */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fmul:f32 (fneg:f32 SPR:f32:$a), SPR:f32:$b)  =>  (VNMULS:f32 SPR:f32:$a, SPR:f32:$b)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNMULS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI1.getOperand(1)/*a*/);
    MIB.add(MI0.getOperand(2)/*b*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_NoHonorSignDependentRoundingBit, Feature_HasDPVFPBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* b */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* a */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fmul:f64 DPR:f64:$b, (fneg:f64 DPR:f64:$a))  =>  (VNMULD:f64 DPR:f64:$a, DPR:f64:$b)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNMULD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI1.getOperand(1)/*a*/);
    MIB.add(MI0.getOperand(1)/*b*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_NoHonorSignDependentRoundingBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* b */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* a */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fmul:f32 SPR:f32:$b, (fneg:f32 SPR:f32:$a))  =>  (VNMULS:f32 SPR:f32:$a, SPR:f32:$b)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNMULS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI1.getOperand(1)/*a*/);
    MIB.add(MI0.getOperand(1)/*b*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Dn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f64 DPR:f64:$Dn, DPR:f64:$Dm)  =>  (VMULD:f64 DPR:f64:$Dn, DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Dn*/);
    MIB.add(MI0.getOperand(2)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_DontUseNEONForFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f32 SPR:f32:$Sn, SPR:f32:$Sm)  =>  (VMULS:f32 SPR:f32:$Sn, SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI0.getOperand(1)/*Sn*/);
    MIB.add(MI0.getOperand(2)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v2f32 DPR:v2f32:$Vn, DPR:v2f32:$Vm)  =>  (VMULfd:v2f32 DPR:v2f32:$Vn, DPR:v2f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULfd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f32 QPR:v4f32:$Vn, QPR:v4f32:$Vm)  =>  (VMULfq:v4f32 QPR:v4f32:$Vn, QPR:v4f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULfq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm)  =>  (VMULhd:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULhd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm)  =>  (VMULhq:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULhq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFPVMLxBit, Feature_DontUseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fsub:v4f16 DPR:v4f16:$src1, (fmul:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm))  =>  (VMLShd:v4f16 DPR:v4f16:$src1, DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLShd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFPVMLxBit, Feature_DontUseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fsub:v8f16 QPR:v8f16:$src1, (fmul:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm))  =>  (VMLShq:v8f16 QPR:v8f16:$src1, QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLShq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fsub:v4f16 DPR:v4f16:$src1, (fmul:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm))  =>  (VFMShd:v4f16 DPR:v4f16:$src1, DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VFMShd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit, Feature_UseFusedMACBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fsub:v8f16 QPR:v8f16:$src1, (fmul:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm))  =>  (VFMShq:v8f16 QPR:v8f16:$src1, QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VFMShq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Dn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f64 DPR:f64:$Dn, DPR:f64:$Dm)  =>  (VSUBD:f64 DPR:f64:$Dn, DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Dn*/);
    MIB.add(MI0.getOperand(2)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_DontUseNEONForFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f32 SPR:f32:$Sn, SPR:f32:$Sm)  =>  (VSUBS:f32 SPR:f32:$Sn, SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI0.getOperand(1)/*Sn*/);
    MIB.add(MI0.getOperand(2)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v2f32 DPR:v2f32:$Vn, DPR:v2f32:$Vm)  =>  (VSUBfd:v2f32 DPR:v2f32:$Vn, DPR:v2f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBfd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f32 QPR:v4f32:$Vn, QPR:v4f32:$Vm)  =>  (VSUBfq:v4f32 QPR:v4f32:$Vn, QPR:v4f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBfq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm)  =>  (VSUBhd:v4f16 DPR:v4f16:$Vn, DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBhd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm)  =>  (VSUBhq:v8f16 QPR:v8f16:$Vn, QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBhq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2LSRrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2LSRrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV5TEBit};
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
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 16, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (mul:i32 (sra:i32 GPR:i32:$Rn, 16:i32), (sra:i32 GPR:i32:$Rm, 16:i32))  =>  (SMULTT:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::SMULTT));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit, Feature_HasDSPBit};
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
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI2.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 16, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (mul:i32 (sra:i32 rGPR:i32:$Rn, 16:i32), (sra:i32 rGPR:i32:$Rm, 16:i32))  =>  (t2SMULTT:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2SMULTT));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV6Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm)  =>  (MUL:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MUL));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_NoV6Bit, Feature_UseMulOpsBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm)  =>  (MULv5:i32 GPRnopc:i32:$Rn, GPRnopc:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MULv5));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2MUL:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2MUL));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm)  =>  (VMULv8i8:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm)  =>  (VMULv4i16:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)  =>  (VMULv2i32:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm)  =>  (VMULv16i8:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULv16i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm)  =>  (VMULv8i16:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)  =>  (VMULv4i32:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMULv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV6Bit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
if (!MI3.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI3.getOperand(1).getReg()))
  return false;
MachineInstr &MI4 = *MRI.getVRegDef(MI3.getOperand(1).getReg());
if (MI4.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_SHL) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 24, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_AND) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI4.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Operand 0 */ (MRI.getType(MI4.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI4.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI4.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI4.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI4.getOperand(2), 8, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 255, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
      if (!isObviouslySafeToFold(MI4)) return false;
// (or:i32 (sra:i32 (shl:i32 GPR:i32:$Rm, 24:i32), 16:i32), (and:i32 (srl:i32 GPR:i32:$Rm, 8:i32), 255:i32))  =>  (REVSH:i32 GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::REVSH));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, &MI4, })
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
if (!MI3.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI3.getOperand(1).getReg()))
  return false;
MachineInstr &MI4 = *MRI.getVRegDef(MI3.getOperand(1).getReg());
if (MI4.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_SHL) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 24, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 16, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_AND) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI4.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Operand 0 */ (MRI.getType(MI4.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI4.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI4.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI4.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI4.getOperand(2), 8, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 255, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
      if (!isObviouslySafeToFold(MI4)) return false;
// (or:i32 (sra:i32 (shl:i32 rGPR:i32:$Rm, 24:i32), 16:i32), (and:i32 (srl:i32 rGPR:i32:$Rm, 8:i32), 255:i32))  =>  (t2REVSH:i32 rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2REVSH));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, &MI4, })
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV6Bit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
if (!MI3.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI3.getOperand(1).getReg()))
  return false;
MachineInstr &MI4 = *MRI.getVRegDef(MI3.getOperand(1).getReg());
if (MI4.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_AND) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 8, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 255, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI4.getOpcode() == TargetOpcode::G_SHL) &&
((/* Operand 0 */ (MRI.getType(MI4.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI4.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI4.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI4.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI4.getOperand(2), 24, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 16, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
      if (!isObviouslySafeToFold(MI4)) return false;
// (or:i32 (and:i32 (srl:i32 GPR:i32:$Rm, 8:i32), 255:i32), (sra:i32 (shl:i32 GPR:i32:$Rm, 24:i32), 16:i32))  =>  (REVSH:i32 GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::REVSH));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, &MI4, })
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
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
if (!MI1.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(1).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI3.getNumOperands() < 3)
  return false;
if (!MI3.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI3.getOperand(1).getReg()))
  return false;
MachineInstr &MI4 = *MRI.getVRegDef(MI3.getOperand(1).getReg());
if (MI4.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_AND) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 8, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 255, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_ASHR) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI4.getOpcode() == TargetOpcode::G_SHL) &&
((/* Operand 0 */ (MRI.getType(MI4.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI4.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI4.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI4.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI4.getOperand(2), 24, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(2), 16, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
      if (!isObviouslySafeToFold(MI4)) return false;
// (or:i32 (and:i32 (srl:i32 rGPR:i32:$Rm, 8:i32), 255:i32), (sra:i32 (shl:i32 rGPR:i32:$Rm, 24:i32), 16:i32))  =>  (t2REVSH:i32 rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2REVSH));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI2.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, &MI4, })
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 (xor:i32 rGPR:i32:$Rm, -1:i32), rGPR:i32:$Rn)  =>  (t2ORNrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ORNrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 rGPR:i32:$Rn, (xor:i32 rGPR:i32:$Rm, -1:i32))  =>  (t2ORNrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ORNrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (ORRrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::ORRrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2ORRrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2ORRrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)  =>  (VORRd:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VORRd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)  =>  (VORRq:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VORRq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasDivideInARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sdiv:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (SDIV:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::SDIV));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasDivideInThumbBit, Feature_IsThumbBit, Feature_HasV8MBaselineBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sdiv:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2SDIV:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2SDIV));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2LSLrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2LSLrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v8i16 (sext:v8i16 DPR:v8i8:$Vn), (sext:v8i16 DPR:v8i8:$Vm))  =>  (VSUBLsv8i16:v8i16 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBLsv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v4i32 (sext:v4i32 DPR:v4i16:$Vn), (sext:v4i32 DPR:v4i16:$Vm))  =>  (VSUBLsv4i32:v4i32 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBLsv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v2i64 (sext:v2i64 DPR:v2i32:$Vn), (sext:v2i64 DPR:v2i32:$Vm))  =>  (VSUBLsv2i64:v2i64 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBLsv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v8i16 (zext:v8i16 DPR:v8i8:$Vn), (zext:v8i16 DPR:v8i8:$Vm))  =>  (VSUBLuv8i16:v8i16 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBLuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v4i32 (zext:v4i32 DPR:v4i16:$Vn), (zext:v4i32 DPR:v4i16:$Vm))  =>  (VSUBLuv4i32:v4i32 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBLuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (sub:v2i64 (zext:v2i64 DPR:v2i32:$Vn), (zext:v2i64 DPR:v2i32:$Vm))  =>  (VSUBLuv2i64:v2i64 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBLuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI2.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasV6T2Bit, Feature_UseMulOpsBit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:i32 GPR:i32:$Ra, (mul:i32 GPR:i32:$Rn, GPR:i32:$Rm))  =>  (MLS:i32 GPR:i32:$Rn, GPR:i32:$Rm, GPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MLS));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit, Feature_UseMulOpsBit};
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
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Ra */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Rn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:i32 rGPR:i32:$Ra, (mul:i32 rGPR:i32:$Rn, rGPR:i32:$Rm))  =>  (t2MLS:i32 rGPR:i32:$Rn, rGPR:i32:$Rm, rGPR:i32:$Ra)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2MLS));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI1.getOperand(1)/*Rn*/);
    MIB.add(MI1.getOperand(2)/*Rm*/);
    MIB.add(MI0.getOperand(1)/*Ra*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 8))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i8 DPR:v8i8:$src1, (mul:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm))  =>  (VMLSv8i8:v8i8 DPR:v8i8:$src1, DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLSv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i16 DPR:v4i16:$src1, (mul:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm))  =>  (VMLSv4i16:v4i16 DPR:v4i16:$src1, DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLSv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v2i32 DPR:v2i32:$src1, (mul:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm))  =>  (VMLSv2i32:v2i32 DPR:v2i32:$src1, DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLSv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(16, 8))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v16i8 QPR:v16i8:$src1, (mul:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm))  =>  (VMLSv16i8:v16i8 QPR:v16i8:$src1, QPR:v16i8:$Vn, QPR:v16i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLSv16i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i16 QPR:v8i16:$src1, (mul:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm))  =>  (VMLSv8i16:v8i16 QPR:v8i16:$src1, QPR:v8i16:$Vn, QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLSv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i32 QPR:v4i32:$src1, (mul:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm))  =>  (VMLSv4i32:v4i32 QPR:v4i32:$src1, QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMLSv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i16 QPR:v8i16:$Vn, (sext:v8i16 DPR:v8i8:$Vm))  =>  (VSUBWsv8i16:v8i16 QPR:v8i16:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBWsv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i32 QPR:v4i32:$Vn, (sext:v4i32 DPR:v4i16:$Vm))  =>  (VSUBWsv4i32:v4i32 QPR:v4i32:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBWsv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v2i64 QPR:v2i64:$Vn, (sext:v2i64 DPR:v2i32:$Vm))  =>  (VSUBWsv2i64:v2i64 QPR:v2i64:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBWsv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v8i16 QPR:v8i16:$Vn, (zext:v8i16 DPR:v8i8:$Vm))  =>  (VSUBWuv8i16:v8i16 QPR:v8i16:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBWuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v4i32 QPR:v4i32:$Vn, (zext:v4i32 DPR:v4i16:$Vm))  =>  (VSUBWuv4i32:v4i32 QPR:v4i32:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBWuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* Vm */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (sub:v2i64 QPR:v2i64:$Vn, (zext:v2i64 DPR:v2i32:$Vm))  =>  (VSUBWuv2i64:v2i64 QPR:v2i64:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBWuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI1.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (SUBrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::SUBrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRnopcRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i32 GPRnopc:i32:$Rn, rGPR:i32:$Rm)  =>  (t2SUBrr:i32 GPRnopc:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2SUBrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm)  =>  (VSUBv8i8:v8i8 DPR:v8i8:$Vn, DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm)  =>  (VSUBv4i16:v4i16 DPR:v4i16:$Vn, DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)  =>  (VSUBv2i32:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm)  =>  (VSUBv16i8:v16i8 QPR:v16i8:$Vn, QPR:v16i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv16i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm)  =>  (VSUBv8i16:v8i16 QPR:v8i16:$Vn, QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)  =>  (VSUBv4i32:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v1i64 DPR:v1i64:$Vn, DPR:v1i64:$Vm)  =>  (VSUBv1i64:v1i64 DPR:v1i64:$Vn, DPR:v1i64:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv1i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i64 QPR:v2i64:$Vn, QPR:v2i64:$Vm)  =>  (VSUBv2i64:v2i64 QPR:v2i64:$Vn, QPR:v2i64:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VSUBv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit, Feature_HasDivideInARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (udiv:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (UDIV:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::UDIV));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasDivideInThumbBit, Feature_IsThumbBit, Feature_HasV8MBaselineBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UDIV) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (udiv:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2UDIV:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2UDIV));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i32 GPR:i32:$Rm, -1:i32)  =>  (MVNr:i32 GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::MVNr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i32 rGPR:i32:$Rm, -1:i32)  =>  (t2MVNr:i32 rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2MVNr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i32 GPR:i32:$Rn, GPR:i32:$Rm)  =>  (EORrr:i32 GPR:i32:$Rn, GPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::EORrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumb2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Rm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::rGPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)  =>  (t2EORrr:i32 rGPR:i32:$Rn, rGPR:i32:$Rm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2EORrr));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
    MIB.add(MI0.getOperand(2)/*Rm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)  =>  (VEORd:v2i32 DPR:v2i32:$Vn, DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VEORd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)  =>  (VEORq:v4i32 QPR:v4i32:$Vn, QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VEORq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vn*/);
    MIB.add(MI0.getOperand(2)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (anyext:v8i16 DPR:v8i8:$Vm)  =>  (VMOVLuv8i16:v8i16 DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (anyext:v4i32 DPR:v4i16:$Vm)  =>  (VMOVLuv4i32:v4i32 DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (anyext:v2i64 DPR:v2i32:$Vm)  =>  (VMOVLuv2i64:v2i64 DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Rt */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i32 SPR:f32:$Sn)  =>  (VMOVRS:i32 SPR:f32:$Sn)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVRS));
    MIB.add(MI0.getOperand(0)/*Rt*/);
    MIB.add(MI0.getOperand(1)/*Sn*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_UseVMOVSRBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Sn */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rt */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::GPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f32 GPR:i32:$Rt)  =>  (VMOVSR:f32 GPR:i32:$Rt)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVSR));
    MIB.add(MI0.getOperand(0)/*Sn*/);
    MIB.add(MI0.getOperand(1)/*Rt*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 DPR:v2i32:$src)  =>  (VREV64d32:v1i64 DPR:v2i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 DPR:v4i16:$src)  =>  (VREV64d16:v1i64 DPR:v4i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 DPR:v8i8:$src)  =>  (VREV64d8:v1i64 DPR:v8i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v1i64 DPR:v2f32:$src)  =>  (VREV64d32:v1i64 DPR:v2f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 DPR:v1i64:$src)  =>  (VREV64d32:v2i32 DPR:v1i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 DPR:v4i16:$src)  =>  (VREV32d16:v2i32 DPR:v4i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 DPR:v8i8:$src)  =>  (VREV32d8:v2i32 DPR:v8i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i32 DPR:f64:$src)  =>  (VREV64d32:v2i32 DPR:f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 DPR:v1i64:$src)  =>  (VREV64d16:v4i16 DPR:v1i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 DPR:v2i32:$src)  =>  (VREV32d16:v4i16 DPR:v2i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 DPR:v8i8:$src)  =>  (VREV16d8:v4i16 DPR:v8i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV16d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 DPR:f64:$src)  =>  (VREV64d16:v4i16 DPR:f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i16 DPR:v2f32:$src)  =>  (VREV32d16:v4i16 DPR:v2f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 DPR:v1i64:$src)  =>  (VREV64d8:v8i8 DPR:v1i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 DPR:v2i32:$src)  =>  (VREV32d8:v8i8 DPR:v2i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 DPR:v4i16:$src)  =>  (VREV16d8:v8i8 DPR:v4i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV16d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 DPR:f64:$src)  =>  (VREV64d8:v8i8 DPR:f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i8 DPR:v2f32:$src)  =>  (VREV32d8:v8i8 DPR:v2f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 DPR:v2i32:$src)  =>  (VREV64d32:f64 DPR:v2i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 DPR:v4i16:$src)  =>  (VREV64d16:f64 DPR:v4i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 DPR:v8i8:$src)  =>  (VREV64d8:f64 DPR:v8i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 DPR:v2f32:$src)  =>  (VREV64d32:f64 DPR:v2f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 DPR:f64:$src)  =>  (VREV64d32:v2f32 DPR:f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 DPR:v1i64:$src)  =>  (VREV64d32:v2f32 DPR:v1i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64d32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 DPR:v4i16:$src)  =>  (VREV32d16:v2f32 DPR:v4i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f32 DPR:v8i8:$src)  =>  (VREV32d8:v2f32 DPR:v8i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32d8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 QPR:v4i32:$src)  =>  (VREV64q32:v2i64 QPR:v4i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 QPR:v8i16:$src)  =>  (VREV64q16:v2i64 QPR:v8i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 QPR:v16i8:$src)  =>  (VREV64q8:v2i64 QPR:v16i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2i64 QPR:v4f32:$src)  =>  (VREV64q32:v2i64 QPR:v4f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 QPR:v2i64:$src)  =>  (VREV64q32:v4i32 QPR:v2i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 QPR:v8i16:$src)  =>  (VREV32q16:v4i32 QPR:v8i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 QPR:v16i8:$src)  =>  (VREV32q8:v4i32 QPR:v16i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4i32 QPR:v2f64:$src)  =>  (VREV64q32:v4i32 QPR:v2f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 QPR:v2i64:$src)  =>  (VREV64q16:v8i16 QPR:v2i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 QPR:v4i32:$src)  =>  (VREV32q16:v8i16 QPR:v4i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 QPR:v16i8:$src)  =>  (VREV16q8:v8i16 QPR:v16i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV16q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 QPR:v2f64:$src)  =>  (VREV64q16:v8i16 QPR:v2f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v8i16 QPR:v4f32:$src)  =>  (VREV32q16:v8i16 QPR:v4f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 QPR:v2i64:$src)  =>  (VREV64q8:v16i8 QPR:v2i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 QPR:v4i32:$src)  =>  (VREV32q8:v16i8 QPR:v4i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 QPR:v8i16:$src)  =>  (VREV16q8:v16i8 QPR:v8i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV16q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 QPR:v2f64:$src)  =>  (VREV64q8:v16i8 QPR:v2f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v16i8 QPR:v4f32:$src)  =>  (VREV32q8:v16i8 QPR:v4f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 QPR:v2i64:$src)  =>  (VREV64q32:v4f32 QPR:v2i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 QPR:v8i16:$src)  =>  (VREV32q16:v4f32 QPR:v8i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 QPR:v16i8:$src)  =>  (VREV32q8:v4f32 QPR:v16i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV32q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v4f32 QPR:v2f64:$src)  =>  (VREV64q32:v4f32 QPR:v2f64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 QPR:v4i32:$src)  =>  (VREV64q32:v2f64 QPR:v4i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 QPR:v8i16:$src)  =>  (VREV64q16:v2f64 QPR:v8i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 QPR:v16i8:$src)  =>  (VREV64q8:v2f64 QPR:v16i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsBEBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:v2f64 QPR:v4f32:$src)  =>  (VREV64q32:v2f64 QPR:v4f32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VREV64q32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
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
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Dn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fneg:f64 (fmul:f64 DPR:f64:$Dn, DPR:f64:$Dm))  =>  (VNMULD:f64 DPR:f64:$Dn, DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNMULD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI1.getOperand(1)/*Dn*/);
    MIB.add(MI1.getOperand(2)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit};
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
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_FMUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Sn */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (fneg:f32 (fmul:f32 SPR:f32:$Sn, SPR:f32:$Sm))  =>  (VNMULS:f32 SPR:f32:$Sn, SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNMULS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI1.getOperand(1)/*Sn*/);
    MIB.add(MI1.getOperand(2)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f64 DPR:f64:$Dm)  =>  (VNEGD:f64 DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNEGD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_DontUseNEONForFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f32 SPR:f32:$Sm)  =>  (VNEGS:f32 SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNEGS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI0.getOperand(1)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v2f32 DPR:v2f32:$Vm)  =>  (VNEGfd:v2f32 DPR:v2f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNEGfd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v4f32 QPR:v4f32:$Vm)  =>  (VNEGf32q:v4f32 QPR:v4f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNEGf32q));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v4f16 DPR:v4f16:$Vm)  =>  (VNEGhd:v4f16 DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNEGhd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:v8f16 QPR:v8f16:$Vm)  =>  (VNEGhq:v8f16 QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VNEGhq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasVFP2Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:f64 SPR:f32:$Sm)  =>  (VCVTDS:f64 SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTDS));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v2i32 DPR:v2f32:$Vm)  =>  (VCVTf2sd:v2i32 DPR:v2f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTf2sd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 QPR:v4f32:$Vm)  =>  (VCVTf2sq:v4i32 QPR:v4f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTf2sq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i16 DPR:v4f16:$Vm)  =>  (VCVTh2sd:v4i16 DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTh2sd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i16 QPR:v8f16:$Vm)  =>  (VCVTh2sq:v8i16 QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTh2sq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v2i32 DPR:v2f32:$Vm)  =>  (VCVTf2ud:v2i32 DPR:v2f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTf2ud));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i32 QPR:v4f32:$Vm)  =>  (VCVTf2uq:v4i32 QPR:v4f32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTf2uq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i16 DPR:v4f16:$Vm)  =>  (VCVTh2ud:v4i16 DPR:v4f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTh2ud));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v8i16 QPR:v8f16:$Vm)  =>  (VCVTh2uq:v8i16 QPR:v8f16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTh2uq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Sd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Sm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(ARM::SPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:f32 SPR:f32:$Sm)  =>  (VRINTZS:f32 SPR:f32:$Sm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VRINTZS));
    MIB.add(MI0.getOperand(0)/*Sd*/);
    MIB.add(MI0.getOperand(1)/*Sm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasFPARMv8Bit, Feature_HasDPVFPBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTRUNC) &&
((/* Dd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Dm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (ftrunc:f64 DPR:f64:$Dm)  =>  (VRINTZD:f64 DPR:f64:$Dm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VRINTZD));
    MIB.add(MI0.getOperand(0)/*Dd*/);
    MIB.add(MI0.getOperand(1)/*Dm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:v8i16 DPR:v8i8:$Vm)  =>  (VMOVLsv8i16:v8i16 DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLsv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:v4i32 DPR:v4i16:$Vm)  =>  (VMOVLsv4i32:v4i32 DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLsv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:v2i64 DPR:v2i32:$Vm)  =>  (VMOVLsv2i64:v2i64 DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLsv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v2f32 DPR:v2i32:$Vm)  =>  (VCVTs2fd:v2f32 DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTs2fd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f32 QPR:v4i32:$Vm)  =>  (VCVTs2fq:v4f32 QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTs2fq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f16 DPR:v4i16:$Vm)  =>  (VCVTs2hd:v4f16 DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTs2hd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f16 QPR:v8i16:$Vm)  =>  (VCVTs2hq:v8f16 QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTs2hq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (trunc:v8i8 QPR:v8i16:$Vm)  =>  (VMOVNv8i8:v8i8 QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVNv8i8));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (trunc:v4i16 QPR:v4i32:$Vm)  =>  (VMOVNv4i16:v4i16 QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVNv4i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (trunc:v2i32 QPR:v2i64:$Vm)  =>  (VMOVNv2i32:v2i32 QPR:v2i64:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVNv2i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v2f32 DPR:v2i32:$Vm)  =>  (VCVTu2fd:v2f32 DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTu2fd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f32 QPR:v4i32:$Vm)  =>  (VCVTu2fq:v4f32 QPR:v4i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTu2fq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f16 DPR:v4i16:$Vm)  =>  (VCVTu2hd:v4f16 DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTu2hd));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_HasNEONBit, Feature_HasFullFP16Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v8f16 QPR:v8i16:$Vm)  =>  (VCVTu2hq:v8f16 QPR:v8i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VCVTu2hq));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 8))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (zext:v8i16 DPR:v8i8:$Vm)  =>  (VMOVLuv8i16:v8i16 DPR:v8i8:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLuv8i16));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 16))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (zext:v4i32 DPR:v4i16:$Vm)  =>  (VMOVLuv4i32:v4i32 DPR:v4i16:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLuv4i32));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* Vd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(ARM::QPRRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Vm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 32))) &&
((&RBI.getRegBankFromRegClass(ARM::DPRRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (zext:v2i64 DPR:v2i32:$Vm)  =>  (VMOVLuv2i64:v2i64 DPR:v2i32:$Vm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::VMOVLuv2i64));
    MIB.add(MI0.getOperand(0)/*Vd*/);
    MIB.add(MI0.getOperand(1)/*Vm*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsARMBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 1)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BR) &&
((/* target */ (MI0.getOperand(0).isMBB())))) {
// (br (bb:Other):$target)  =>  (B (bb:Other):$target)
    I.setDesc(TII.get(ARM::B));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_IsThumbBit, Feature_IsThumb1OnlyBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 1)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BR) &&
((/* target */ (MI0.getOperand(0).isMBB())))) {
// (br (bb:Other):$target)  =>  (tB (bb:Other):$target)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::tB));
    MIB.add(MI0.getOperand(0)/*target*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
  PredicateBitset ExpectedFeatures = {Feature_IsThumbBit, Feature_HasV8MBaselineBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 1)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BR) &&
((/* target */ (MI0.getOperand(0).isMBB())))) {
// (br (bb:Other):$target)  =>  (t2B (bb:Other):$target)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(ARM::t2B));
    MIB.add(MI0.getOperand(0)/*target*/);
    MIB.addImm(14);
    MIB.addReg(::zero_reg);
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
computeAvailableModuleFeatures(const ARMSubtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const ARMSubtarget *Subtarget,
                                 const MachineFunction *MF) const;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
