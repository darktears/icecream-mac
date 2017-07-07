/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the X86 target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 88;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_TruePredicateBit = 38,
  Feature_HasCMovBit = 15,
  Feature_NoCMovBit = 75,
  Feature_HasMMXBit = 61,
  Feature_Has3DNowBit = 63,
  Feature_HasSSE1Bit = 26,
  Feature_UseSSE1Bit = 32,
  Feature_HasSSE2Bit = 27,
  Feature_UseSSE2Bit = 33,
  Feature_HasSSE3Bit = 19,
  Feature_UseSSE3Bit = 41,
  Feature_HasSSSE3Bit = 62,
  Feature_UseSSSE3Bit = 42,
  Feature_NoSSE41Bit = 78,
  Feature_UseSSE41Bit = 39,
  Feature_HasSSE42Bit = 46,
  Feature_UseSSE42Bit = 45,
  Feature_HasSSE4ABit = 50,
  Feature_HasAVXBit = 34,
  Feature_HasAVX2Bit = 30,
  Feature_HasAVX1OnlyBit = 28,
  Feature_HasAVX512Bit = 52,
  Feature_UseAVXBit = 31,
  Feature_NoAVX512Bit = 23,
  Feature_HasCDIBit = 56,
  Feature_HasVPOPCNTDQBit = 60,
  Feature_HasERIBit = 59,
  Feature_HasDQIBit = 54,
  Feature_NoDQIBit = 43,
  Feature_HasBWIBit = 55,
  Feature_NoBWIBit = 40,
  Feature_HasVLXBit = 53,
  Feature_NoVLXBit = 22,
  Feature_NoVLX_Or_NoBWIBit = 37,
  Feature_NoVLX_Or_NoDQIBit = 80,
  Feature_HasPOPCNTBit = 44,
  Feature_HasAESBit = 48,
  Feature_HasFXSRBit = 20,
  Feature_HasXSAVEBit = 66,
  Feature_HasXSAVEOPTBit = 67,
  Feature_HasXSAVECBit = 68,
  Feature_HasXSAVESBit = 69,
  Feature_HasPCLMULBit = 49,
  Feature_HasFMABit = 21,
  Feature_HasFMA4Bit = 24,
  Feature_HasXOPBit = 25,
  Feature_HasTBMBit = 9,
  Feature_HasLWPBit = 10,
  Feature_HasMOVBEBit = 3,
  Feature_HasRDRANDBit = 4,
  Feature_HasF16CBit = 51,
  Feature_NoF16CBit = 81,
  Feature_HasFSGSBaseBit = 70,
  Feature_HasLZCNTBit = 6,
  Feature_HasBMIBit = 7,
  Feature_HasBMI2Bit = 8,
  Feature_HasVBMIBit = 57,
  Feature_HasIFMABit = 58,
  Feature_HasRTMBit = 65,
  Feature_HasADXBit = 14,
  Feature_HasSHABit = 47,
  Feature_HasRDSEEDBit = 5,
  Feature_HasPrefetchWBit = 64,
  Feature_HasLAHFSAHFBit = 2,
  Feature_HasMWAITXBit = 11,
  Feature_HasCLZEROBit = 12,
  Feature_FPStackf32Bit = 17,
  Feature_FPStackf64Bit = 18,
  Feature_HasCLFLUSHOPTBit = 13,
  Feature_HasCmpxchg16bBit = 76,
  Feature_Not64BitModeBit = 0,
  Feature_In64BitModeBit = 1,
  Feature_IsLP64Bit = 72,
  Feature_NotLP64Bit = 71,
  Feature_NotWin64WithoutFPBit = 74,
  Feature_IsPS4Bit = 83,
  Feature_NotPS4Bit = 82,
  Feature_KernelCodeBit = 84,
  Feature_NearDataBit = 85,
  Feature_IsNotPICBit = 86,
  Feature_OptForSizeBit = 35,
  Feature_OptForMinSizeBit = 29,
  Feature_OptForSpeedBit = 79,
  Feature_CallImmAddrBit = 87,
  Feature_FavorMemIndirectCallBit = 16,
  Feature_NotSlowIncDecBit = 73,
  Feature_HasFastSHLDRotateBit = 77,
  Feature_HasMFenceBit = 36,
};

PredicateBitset X86InstructionSelector::
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const {
  PredicateBitset Features;
  if (true)
    Features[Feature_TruePredicateBit] = 1;
  if (Subtarget->hasCMov())
    Features[Feature_HasCMovBit] = 1;
  if (!Subtarget->hasCMov())
    Features[Feature_NoCMovBit] = 1;
  if (Subtarget->hasMMX())
    Features[Feature_HasMMXBit] = 1;
  if (Subtarget->has3DNow())
    Features[Feature_Has3DNowBit] = 1;
  if (Subtarget->hasSSE1())
    Features[Feature_HasSSE1Bit] = 1;
  if (Subtarget->hasSSE1() && !Subtarget->hasAVX())
    Features[Feature_UseSSE1Bit] = 1;
  if (Subtarget->hasSSE2())
    Features[Feature_HasSSE2Bit] = 1;
  if (Subtarget->hasSSE2() && !Subtarget->hasAVX())
    Features[Feature_UseSSE2Bit] = 1;
  if (Subtarget->hasSSE3())
    Features[Feature_HasSSE3Bit] = 1;
  if (Subtarget->hasSSE3() && !Subtarget->hasAVX())
    Features[Feature_UseSSE3Bit] = 1;
  if (Subtarget->hasSSSE3())
    Features[Feature_HasSSSE3Bit] = 1;
  if (Subtarget->hasSSSE3() && !Subtarget->hasAVX())
    Features[Feature_UseSSSE3Bit] = 1;
  if (!Subtarget->hasSSE41())
    Features[Feature_NoSSE41Bit] = 1;
  if (Subtarget->hasSSE41() && !Subtarget->hasAVX())
    Features[Feature_UseSSE41Bit] = 1;
  if (Subtarget->hasSSE42())
    Features[Feature_HasSSE42Bit] = 1;
  if (Subtarget->hasSSE42() && !Subtarget->hasAVX())
    Features[Feature_UseSSE42Bit] = 1;
  if (Subtarget->hasSSE4A())
    Features[Feature_HasSSE4ABit] = 1;
  if (Subtarget->hasAVX())
    Features[Feature_HasAVXBit] = 1;
  if (Subtarget->hasAVX2())
    Features[Feature_HasAVX2Bit] = 1;
  if (Subtarget->hasAVX() && !Subtarget->hasAVX2())
    Features[Feature_HasAVX1OnlyBit] = 1;
  if (Subtarget->hasAVX512())
    Features[Feature_HasAVX512Bit] = 1;
  if (Subtarget->hasAVX() && !Subtarget->hasAVX512())
    Features[Feature_UseAVXBit] = 1;
  if (!Subtarget->hasAVX512())
    Features[Feature_NoAVX512Bit] = 1;
  if (Subtarget->hasCDI())
    Features[Feature_HasCDIBit] = 1;
  if (Subtarget->hasVPOPCNTDQ())
    Features[Feature_HasVPOPCNTDQBit] = 1;
  if (Subtarget->hasERI())
    Features[Feature_HasERIBit] = 1;
  if (Subtarget->hasDQI())
    Features[Feature_HasDQIBit] = 1;
  if (!Subtarget->hasDQI())
    Features[Feature_NoDQIBit] = 1;
  if (Subtarget->hasBWI())
    Features[Feature_HasBWIBit] = 1;
  if (!Subtarget->hasBWI())
    Features[Feature_NoBWIBit] = 1;
  if (Subtarget->hasVLX())
    Features[Feature_HasVLXBit] = 1;
  if (!Subtarget->hasVLX())
    Features[Feature_NoVLXBit] = 1;
  if (!Subtarget->hasVLX() || !Subtarget->hasBWI())
    Features[Feature_NoVLX_Or_NoBWIBit] = 1;
  if (!Subtarget->hasVLX() || !Subtarget->hasDQI())
    Features[Feature_NoVLX_Or_NoDQIBit] = 1;
  if (Subtarget->hasPOPCNT())
    Features[Feature_HasPOPCNTBit] = 1;
  if (Subtarget->hasAES())
    Features[Feature_HasAESBit] = 1;
  if (Subtarget->hasFXSR())
    Features[Feature_HasFXSRBit] = 1;
  if (Subtarget->hasXSAVE())
    Features[Feature_HasXSAVEBit] = 1;
  if (Subtarget->hasXSAVEOPT())
    Features[Feature_HasXSAVEOPTBit] = 1;
  if (Subtarget->hasXSAVEC())
    Features[Feature_HasXSAVECBit] = 1;
  if (Subtarget->hasXSAVES())
    Features[Feature_HasXSAVESBit] = 1;
  if (Subtarget->hasPCLMUL())
    Features[Feature_HasPCLMULBit] = 1;
  if (Subtarget->hasFMA())
    Features[Feature_HasFMABit] = 1;
  if (Subtarget->hasFMA4())
    Features[Feature_HasFMA4Bit] = 1;
  if (Subtarget->hasXOP())
    Features[Feature_HasXOPBit] = 1;
  if (Subtarget->hasTBM())
    Features[Feature_HasTBMBit] = 1;
  if (Subtarget->hasLWP())
    Features[Feature_HasLWPBit] = 1;
  if (Subtarget->hasMOVBE())
    Features[Feature_HasMOVBEBit] = 1;
  if (Subtarget->hasRDRAND())
    Features[Feature_HasRDRANDBit] = 1;
  if (Subtarget->hasF16C())
    Features[Feature_HasF16CBit] = 1;
  if (!Subtarget->hasF16C())
    Features[Feature_NoF16CBit] = 1;
  if (Subtarget->hasFSGSBase())
    Features[Feature_HasFSGSBaseBit] = 1;
  if (Subtarget->hasLZCNT())
    Features[Feature_HasLZCNTBit] = 1;
  if (Subtarget->hasBMI())
    Features[Feature_HasBMIBit] = 1;
  if (Subtarget->hasBMI2())
    Features[Feature_HasBMI2Bit] = 1;
  if (Subtarget->hasVBMI())
    Features[Feature_HasVBMIBit] = 1;
  if (Subtarget->hasIFMA())
    Features[Feature_HasIFMABit] = 1;
  if (Subtarget->hasRTM())
    Features[Feature_HasRTMBit] = 1;
  if (Subtarget->hasADX())
    Features[Feature_HasADXBit] = 1;
  if (Subtarget->hasSHA())
    Features[Feature_HasSHABit] = 1;
  if (Subtarget->hasRDSEED())
    Features[Feature_HasRDSEEDBit] = 1;
  if (Subtarget->hasPRFCHW())
    Features[Feature_HasPrefetchWBit] = 1;
  if (Subtarget->hasLAHFSAHF())
    Features[Feature_HasLAHFSAHFBit] = 1;
  if (Subtarget->hasMWAITX())
    Features[Feature_HasMWAITXBit] = 1;
  if (Subtarget->hasCLZERO())
    Features[Feature_HasCLZEROBit] = 1;
  if (!Subtarget->hasSSE1())
    Features[Feature_FPStackf32Bit] = 1;
  if (!Subtarget->hasSSE2())
    Features[Feature_FPStackf64Bit] = 1;
  if (Subtarget->hasCLFLUSHOPT())
    Features[Feature_HasCLFLUSHOPTBit] = 1;
  if (Subtarget->hasCmpxchg16b())
    Features[Feature_HasCmpxchg16bBit] = 1;
  if (!Subtarget->is64Bit())
    Features[Feature_Not64BitModeBit] = 1;
  if (Subtarget->is64Bit())
    Features[Feature_In64BitModeBit] = 1;
  if (Subtarget->isTarget64BitLP64())
    Features[Feature_IsLP64Bit] = 1;
  if (!Subtarget->isTarget64BitLP64())
    Features[Feature_NotLP64Bit] = 1;
  if (Subtarget->isTargetPS4())
    Features[Feature_IsPS4Bit] = 1;
  if (!Subtarget->isTargetPS4())
    Features[Feature_NotPS4Bit] = 1;
  if (TM.getCodeModel() == CodeModel::Kernel)
    Features[Feature_KernelCodeBit] = 1;
  if (TM.getCodeModel() == CodeModel::Small ||TM.getCodeModel() == CodeModel::Kernel)
    Features[Feature_NearDataBit] = 1;
  if (!TM.isPositionIndependent())
    Features[Feature_IsNotPICBit] = 1;
  if (Subtarget->isLegalToCallImmediateAddr())
    Features[Feature_CallImmAddrBit] = 1;
  if (!Subtarget->callRegIndirect())
    Features[Feature_FavorMemIndirectCallBit] = 1;
  if (!Subtarget->slowIncDec())
    Features[Feature_NotSlowIncDecBit] = 1;
  if (Subtarget->hasFastSHLDRotate())
    Features[Feature_HasFastSHLDRotateBit] = 1;
  if (Subtarget->hasMFence())
    Features[Feature_HasMFenceBit] = 1;
  return Features;
}

PredicateBitset X86InstructionSelector::
computeAvailableFunctionFeatures(const X86Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  if (!Subtarget->isTargetWin64() ||Subtarget->getFrameLowering()->hasFP(*MF))
    Features[Feature_NotWin64WithoutFPBit] = 1;
  if (MF->getFunction()->optForSize())
    Features[Feature_OptForSizeBit] = 1;
  if (MF->getFunction()->optForMinSize())
    Features[Feature_OptForMinSizeBit] = 1;
  if (!MF->getFunction()->optForSize())
    Features[Feature_OptForSpeedBit] = 1;
  return Features;
}

bool X86InstructionSelector::selectImpl(MachineInstr &I) const {
  MachineFunction &MF = *I.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  // FIXME: This should be computed on a per-function basis rather than per-insn.
  AvailableFunctionFeatures = computeAvailableFunctionFeatures(&STI, &MF);
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasXOPBit};
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
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src3 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2), VR128:v8i16:$src3)  =>  (VPMACSWWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPMACSWWrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(2)/*src2*/);
    MIB.add(MI0.getOperand(2)/*src3*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasXOPBit};
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
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src3 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2), VR128:v4i32:$src3)  =>  (VPMACSDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPMACSDDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(2)/*src2*/);
    MIB.add(MI0.getOperand(2)/*src3*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasXOPBit};
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
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src3 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 16))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v8i16 VR128:v8i16:$src3, (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2))  =>  (VPMACSWWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2, VR128:v8i16:$src3)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPMACSWWrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(2)/*src2*/);
    MIB.add(MI0.getOperand(1)/*src3*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasXOPBit};
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
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src3 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
(((MI1.getOpcode() == TargetOpcode::G_MUL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 32))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (add:v4i32 VR128:v4i32:$src3, (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2))  =>  (VPMACSDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2, VR128:v4i32:$src3)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPMACSDDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI1.getOperand(2)/*src2*/);
    MIB.add(MI0.getOperand(1)/*src3*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (add:i8 GR8:i8:$src, 1:i8)  =>  (INC8r:i8:i32 GR8:i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::INC8r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (add:i16 GR16:i16:$src, 1:i16)  =>  (INC16r:i16:i32 GR16:i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::INC16r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (add:i32 GR32:i32:$src, 1:i32)  =>  (INC32r:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::INC32r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (add:i64 GR64:i64:$src, 1:i64)  =>  (INC64r:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::INC64r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (add:i8 GR8:i8:$src, -1:i8)  =>  (DEC8r:i8:i32 GR8:i8:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::DEC8r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (add:i16 GR16:i16:$src, -1:i16)  =>  (DEC16r:i16:i32 GR16:i16:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::DEC16r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (add:i32 GR32:i32:$src, -1:i32)  =>  (DEC32r:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::DEC32r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_NotSlowIncDecBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (add:i64 GR64:i64:$src, -1:i64)  =>  (DEC64r:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::DEC64r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (VPADDBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
    I.setDesc(TII.get(X86::VPADDBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (PADDBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
    I.setDesc(TII.get(X86::PADDBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)  =>  (VPADDBYrr:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)
    I.setDesc(TII.get(X86::VPADDBYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPADDWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
    I.setDesc(TII.get(X86::VPADDWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PADDWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
    I.setDesc(TII.get(X86::PADDWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPADDWYrr:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
    I.setDesc(TII.get(X86::VPADDWYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPADDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::VPADDDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PADDDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::PADDDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPADDDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
    I.setDesc(TII.get(X86::VPADDDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPADDQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPADDQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PADDQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::PADDQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPADDQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPADDQYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KADDBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
    I.setDesc(TII.get(X86::KADDBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KADDWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
    I.setDesc(TII.get(X86::KADDWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KADDDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
    I.setDesc(TII.get(X86::KADDDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KADDQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
    I.setDesc(TII.get(X86::KADDQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPADDQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPADDQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPADDQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPADDQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPADDQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPADDQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPADDDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
    I.setDesc(TII.get(X86::VPADDDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPADDDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
    I.setDesc(TII.get(X86::VPADDDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPADDDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
    I.setDesc(TII.get(X86::VPADDDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPADDWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
    I.setDesc(TII.get(X86::VPADDWZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPADDWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
    I.setDesc(TII.get(X86::VPADDWZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPADDWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
    I.setDesc(TII.get(X86::VPADDWZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(64, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(64, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(64, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)  =>  (VPADDBZrr:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)
    I.setDesc(TII.get(X86::VPADDBZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)  =>  (VPADDBZ256rr:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)
    I.setDesc(TII.get(X86::VPADDBZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)  =>  (VPADDBZ128rr:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)
    I.setDesc(TII.get(X86::VPADDBZ128rr));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (ADD8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
    I.setDesc(TII.get(X86::ADD8rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (ADD16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
    I.setDesc(TII.get(X86::ADD16rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (ADD32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
    I.setDesc(TII.get(X86::ADD32rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (ADD64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
    I.setDesc(TII.get(X86::ADD64rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v4i64 (bitconvert:v4i64 VR256:v8f32:$src1), (bitconvert:v4i64 VR256:v8f32:$src2))  =>  (VANDPSYrr:v4i64 VR256:v8f32:$src1, VR256:v8f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VANDPSYrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v4i64 (bitconvert:v4i64 VR256:v4f64:$src1), (bitconvert:v4i64 VR256:v4f64:$src2))  =>  (VANDPDYrr:v4i64 VR256:v4f64:$src1, VR256:v4f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VANDPDYrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v2i64 (bitconvert:v2i64 VR128:v4f32:$src1), (bitconvert:v2i64 VR128:v4f32:$src2))  =>  (VANDPSrr:v2i64 VR128:v4f32:$src1, VR128:v4f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VANDPSrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v2i64 (bitconvert:v2i64 VR128:v2f64:$src1), (bitconvert:v2i64 VR128:v2f64:$src2))  =>  (VANDPDrr:v2i64 VR128:v2f64:$src1, VR128:v2f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VANDPDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v2i64 (bitconvert:v2i64 VR128:v4f32:$src1), (bitconvert:v2i64 VR128:v4f32:$src2))  =>  (ANDPSrr:v2i64 VR128:v4f32:$src1, VR128:v4f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ANDPSrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v2i64 (bitconvert:v2i64 VR128:v2f64:$src1), (bitconvert:v2i64 VR128:v2f64:$src2))  =>  (ANDPDrr:v2i64 VR128:v2f64:$src1, VR128:v2f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ANDPDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v8i64 (bitconvert:v8i64 VR512:v16i32:$src1), (bitconvert:v8i64 VR512:v16i32:$src2))  =>  (VPANDDZrr:v8i64 VR512:v16i32:$src1, VR512:v16i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPANDDZrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v4i64 (bitconvert:v4i64 VR256X:v8i32:$src1), (bitconvert:v4i64 VR256X:v8i32:$src2))  =>  (VPANDDZ256rr:v4i64 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPANDDZ256rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:v2i64 (bitconvert:v2i64 VR128X:v4i32:$src1), (bitconvert:v2i64 VR128X:v4i32:$src2))  =>  (VPANDDZ128rr:v2i64 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPANDDZ128rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCIC32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCIC32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCIC64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCIC64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, -1:i32))  =>  (TZMSK32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::TZMSK32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, -1:i64))  =>  (TZMSK64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::TZMSK64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i32 (add:i32 GR32:i32:$src, 1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (BLCIC32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCIC32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i64 (add:i64 GR64:i64:$src, 1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (BLCIC64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCIC64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i32 (add:i32 GR32:i32:$src, -1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (TZMSK32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::TZMSK32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (and:i64 (add:i64 GR64:i64:$src, -1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (TZMSK64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::TZMSK64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (xor:i32 GR32:i32:$src1, -1:i32), GR32:i32:$src2)  =>  (ANDN32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ANDN32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(2)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 (xor:i64 GR64:i64:$src1, -1:i64), GR64:i64:$src2)  =>  (ANDN64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ANDN64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(2)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (add:i32 GR32:i32:$src, -1:i32), GR32:i32:$src)  =>  (BLSR32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSR32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 (add:i64 GR64:i64:$src, -1:i64), GR64:i64:$src)  =>  (BLSR64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSR64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (sub:i32 0:i32, GR32:i32:$src), GR32:i32:$src)  =>  (BLSI32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(2)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 (sub:i64 0:i64, GR64:i64:$src), GR64:i64:$src)  =>  (BLSI64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSI64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(2)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMI2Bit};
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
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI2.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI2.getOperand(1).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI2.getOperand(1).getReg());
if (MI3.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), -1, MRI)))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(((MI2.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(8))))) &&
((/* Operand 1 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(1), 32, MRI)))) &&
((/* lz */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI3.getOperand(2).getReg(), MRI, TRI))))))
))))
))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (and:i32 (srl:i32 -1:i32, (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz))), GR32:i32:$src)  =>  (BZHI32rr:i32:i32 GR32:i32:$src, GR32:i32:$lz)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BZHI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(2)/*src*/);
    MIB.add(MI3.getOperand(2)/*lz*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 (add:i32 GR32:i32:$src, 1:i32), GR32:i32:$src)  =>  (BLCFILL32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCFILL32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 (add:i64 GR64:i64:$src, 1:i64), GR64:i64:$src)  =>  (BLCFILL64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCFILL64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSR32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSR32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSR64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSR64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 GR32:i32:$src, (sub:i32 0:i32, GR32:i32:$src))  =>  (BLSI32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(1), 0, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 GR64:i64:$src, (sub:i64 0:i64, GR64:i64:$src))  =>  (BLSI64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSI64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMI2Bit};
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
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI2.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI2.getOperand(1).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI2.getOperand(1).getReg());
if (MI3.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_LSHR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), -1, MRI)))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(((MI2.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(8))))) &&
((/* Operand 1 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(1), 32, MRI)))) &&
((/* lz */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI3.getOperand(2).getReg(), MRI, TRI))))))
))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
// (and:i32 GR32:i32:$src, (srl:i32 -1:i32, (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz))))  =>  (BZHI32rr:i32:i32 GR32:i32:$src, GR32:i32:$lz)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BZHI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
    MIB.add(MI3.getOperand(2)/*lz*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCFILL32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCFILL32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCFILL64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCFILL64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i32 GR32:i32:$src2, (xor:i32 GR32:i32:$src1, -1:i32))  =>  (ANDN32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ANDN32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (and:i64 GR64:i64:$src2, (xor:i64 GR64:i64:$src1, -1:i64))  =>  (ANDN64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ANDN64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPANDrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPANDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PANDrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::PANDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPANDYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPANDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KANDBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
    I.setDesc(TII.get(X86::KANDBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KANDWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
    I.setDesc(TII.get(X86::KANDWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KANDDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
    I.setDesc(TII.get(X86::KANDDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KANDQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
    I.setDesc(TII.get(X86::KANDQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPANDQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPANDQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPANDQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPANDQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPANDQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPANDQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX1OnlyBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_AND) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VANDPSYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VANDPSYrr));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (AND8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
    I.setDesc(TII.get(X86::AND8rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (AND16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
    I.setDesc(TII.get(X86::AND16rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (AND32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
    I.setDesc(TII.get(X86::AND32rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (and:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (AND64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
    I.setDesc(TII.get(X86::AND64rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i8 GR8:i8:$src1, 1:i8)  =>  (SAR8r1:i8:i32 GR8:i8:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SAR8r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i16 GR16:i16:$src1, 1:i8)  =>  (SAR16r1:i16:i32 GR16:i16:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SAR16r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i32 GR32:i32:$src1, 1:i8)  =>  (SAR32r1:i32:i32 GR32:i32:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SAR32r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i64 GR64:i64:$src1, 1:i8)  =>  (SAR64r1:i64:i32 GR64:i64:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SAR64r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSRAVDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSRAVDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSRAVDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSRAVDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSRAVDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
    I.setDesc(TII.get(X86::VPSRAVDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSRAVDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSRAVDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSRAVDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSRAVDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSRAVQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPSRAVQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSRAVQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSRAVQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSRAVQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSRAVQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSRAVWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
    I.setDesc(TII.get(X86::VPSRAVWZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit, Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSRAVWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
    I.setDesc(TII.get(X86::VPSRAVWZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit, Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ASHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sra:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSRAVWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
    I.setDesc(TII.get(X86::VPSRAVWZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf32Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (ADD_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
    I.setDesc(TII.get(X86::ADD_Fp32));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf64Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (ADD_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
    I.setDesc(TII.get(X86::ADD_Fp64));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (ADD_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
    I.setDesc(TII.get(X86::ADD_Fp80));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VADDPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::VADDPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VADDPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::VADDPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VADDPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
    I.setDesc(TII.get(X86::VADDPSYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VADDPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
    I.setDesc(TII.get(X86::VADDPDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (ADDPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::ADDPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (ADDPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::ADDPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VADDSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::VADDSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VADDSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::VADDSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (ADDSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::ADDSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (ADDSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::ADDSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VADDSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
    I.setDesc(TII.get(X86::VADDSSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VADDSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
    I.setDesc(TII.get(X86::VADDSDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VADDPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
    I.setDesc(TII.get(X86::VADDPSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VADDPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
    I.setDesc(TII.get(X86::VADDPDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VADDPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
    I.setDesc(TII.get(X86::VADDPSZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VADDPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
    I.setDesc(TII.get(X86::VADDPSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VADDPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
    I.setDesc(TII.get(X86::VADDPDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FADD) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fadd:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VADDPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
    I.setDesc(TII.get(X86::VADDPDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf32Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (DIV_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
    I.setDesc(TII.get(X86::DIV_Fp32));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf64Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (DIV_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
    I.setDesc(TII.get(X86::DIV_Fp64));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (DIV_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
    I.setDesc(TII.get(X86::DIV_Fp80));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VDIVPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::VDIVPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VDIVPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::VDIVPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VDIVPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
    I.setDesc(TII.get(X86::VDIVPSYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VDIVPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
    I.setDesc(TII.get(X86::VDIVPDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (DIVPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::DIVPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (DIVPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::DIVPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VDIVSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::VDIVSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VDIVSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::VDIVSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (DIVSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::DIVSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (DIVSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::DIVSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VDIVSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
    I.setDesc(TII.get(X86::VDIVSSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VDIVSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
    I.setDesc(TII.get(X86::VDIVSDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VDIVPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
    I.setDesc(TII.get(X86::VDIVPSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VDIVPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
    I.setDesc(TII.get(X86::VDIVPDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VDIVPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
    I.setDesc(TII.get(X86::VDIVPSZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VDIVPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
    I.setDesc(TII.get(X86::VDIVPSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VDIVPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
    I.setDesc(TII.get(X86::VDIVPDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FDIV) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fdiv:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VDIVPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
    I.setDesc(TII.get(X86::VDIVPDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf32Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (MUL_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
    I.setDesc(TII.get(X86::MUL_Fp32));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf64Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (MUL_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
    I.setDesc(TII.get(X86::MUL_Fp64));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (MUL_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
    I.setDesc(TII.get(X86::MUL_Fp80));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VMULPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::VMULPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VMULPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::VMULPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VMULPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
    I.setDesc(TII.get(X86::VMULPSYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VMULPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
    I.setDesc(TII.get(X86::VMULPDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (MULPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::MULPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (MULPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::MULPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VMULSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::VMULSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VMULSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::VMULSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (MULSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::MULSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (MULSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::MULSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VMULSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
    I.setDesc(TII.get(X86::VMULSSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VMULSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
    I.setDesc(TII.get(X86::VMULSDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VMULPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
    I.setDesc(TII.get(X86::VMULPSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VMULPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
    I.setDesc(TII.get(X86::VMULPDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VMULPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
    I.setDesc(TII.get(X86::VMULPSZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VMULPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
    I.setDesc(TII.get(X86::VMULPSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VMULPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
    I.setDesc(TII.get(X86::VMULPDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FMUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fmul:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VMULPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
    I.setDesc(TII.get(X86::VMULPDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf32Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f32 RFP32:f32:$src1, RFP32:f32:$src2)  =>  (SUB_Fp32:f32:i16 RFP32:f32:$src1, RFP32:f32:$src2)
    I.setDesc(TII.get(X86::SUB_Fp32));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf64Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f64 RFP64:f64:$src1, RFP64:f64:$src2)  =>  (SUB_Fp64:f64:i16 RFP64:f64:$src1, RFP64:f64:$src2)
    I.setDesc(TII.get(X86::SUB_Fp64));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f80 RFP80:f80:$src1, RFP80:f80:$src2)  =>  (SUB_Fp80:f80:i16 RFP80:f80:$src1, RFP80:f80:$src2)
    I.setDesc(TII.get(X86::SUB_Fp80));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (VSUBPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::VSUBPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (VSUBPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::VSUBPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)  =>  (VSUBPSYrr:v8f32 VR256:v8f32:$src1, VR256:v8f32:$src2)
    I.setDesc(TII.get(X86::VSUBPSYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)  =>  (VSUBPDYrr:v4f64 VR256:v4f64:$src1, VR256:v4f64:$src2)
    I.setDesc(TII.get(X86::VSUBPDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)  =>  (SUBPSrr:v4f32 VR128:v4f32:$src1, VR128:v4f32:$src2)
    I.setDesc(TII.get(X86::SUBPSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)  =>  (SUBPDrr:v2f64 VR128:v2f64:$src1, VR128:v2f64:$src2)
    I.setDesc(TII.get(X86::SUBPDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (VSUBSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::VSUBSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (VSUBSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::VSUBSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f32 FR32:f32:$src1, FR32:f32:$src2)  =>  (SUBSSrr:f32 FR32:f32:$src1, FR32:f32:$src2)
    I.setDesc(TII.get(X86::SUBSSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f64 FR64:f64:$src1, FR64:f64:$src2)  =>  (SUBSDrr:f64 FR64:f64:$src1, FR64:f64:$src2)
    I.setDesc(TII.get(X86::SUBSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f32 FR32X:f32:$src1, FR32X:f32:$src2)  =>  (VSUBSSZrr:f32 FR32X:f32:$src1, FR32X:f32:$src2)
    I.setDesc(TII.get(X86::VSUBSSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:f64 FR64X:f64:$src1, FR64X:f64:$src2)  =>  (VSUBSDZrr:f64 FR64X:f64:$src1, FR64X:f64:$src2)
    I.setDesc(TII.get(X86::VSUBSDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)  =>  (VSUBPSZrr:v16f32 VR512:v16f32:$src1, VR512:v16f32:$src2)
    I.setDesc(TII.get(X86::VSUBPSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)  =>  (VSUBPDZrr:v8f64 VR512:v8f64:$src1, VR512:v8f64:$src2)
    I.setDesc(TII.get(X86::VSUBPDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)  =>  (VSUBPSZ128rr:v4f32 VR128X:v4f32:$src1, VR128X:v4f32:$src2)
    I.setDesc(TII.get(X86::VSUBPSZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)  =>  (VSUBPSZ256rr:v8f32 VR256X:v8f32:$src1, VR256X:v8f32:$src2)
    I.setDesc(TII.get(X86::VSUBPSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)  =>  (VSUBPDZ128rr:v2f64 VR128X:v2f64:$src1, VR128X:v2f64:$src2)
    I.setDesc(TII.get(X86::VSUBPDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FSUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (fsub:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)  =>  (VSUBPDZ256rr:v4f64 VR256X:v4f64:$src1, VR256X:v4f64:$src2)
    I.setDesc(TII.get(X86::VSUBPDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBMI2Bit};
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
if (!MI1.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI1.getOperand(2).getReg()))
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(2).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI2.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI2.getOperand(1).getReg()))
  return false;
MachineInstr &MI3 = *MRI.getVRegDef(MI2.getOperand(1).getReg());
if (MI3.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(2).getReg()))
  return false;
MachineInstr &MI4 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI4.getNumOperands() < 2)
  return false;
if (!MI4.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI4.getOperand(1).getReg()))
  return false;
MachineInstr &MI5 = *MRI.getVRegDef(MI4.getOperand(1).getReg());
if (MI5.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SHL) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(((MI2.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(8))))) &&
((/* Operand 1 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI3.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI3.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI3.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI3.getOperand(1), 32, MRI)))) &&
((/* lz */ (MRI.getType(MI3.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI3.getOperand(2).getReg(), MRI, TRI))))))
))))
))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(((MI4.getOpcode() == TargetOpcode::G_TRUNC) &&
((/* Operand 0 */ (MRI.getType(MI4.getOperand(0).getReg()) == (LLT::scalar(8))))) &&
((/* Operand 1 */ (MRI.getType(MI4.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI5.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI5.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI5.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI5.getOperand(1), 32, MRI)))) &&
((/* lz */ (MRI.getType(MI5.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI5.getOperand(2).getReg(), MRI, TRI))))))
))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
      if (!isObviouslySafeToFold(MI3)) return false;
      if (!isObviouslySafeToFold(MI4)) return false;
      if (!isObviouslySafeToFold(MI5)) return false;
// (srl:i32 (shl:i32 GR32:i32:$src, (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz))), (trunc:i8 (sub:i32 32:i32, GR32:i32:$lz)))  =>  (BZHI32rr:i32:i32 GR32:i32:$src, GR32:i32:$lz)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BZHI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
    MIB.add(MI3.getOperand(2)/*lz*/);
    for (const auto *FromMI : {&MI0, &MI1, &MI2, &MI3, &MI4, &MI5, })
      for (const auto &MMO : FromMI->memoperands())
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i8 GR8:i8:$src1, 1:i8)  =>  (SHR8r1:i8:i32 GR8:i8:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SHR8r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i16 GR16:i16:$src1, 1:i8)  =>  (SHR16r1:i16:i32 GR16:i16:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SHR16r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i32 GR32:i32:$src1, 1:i8)  =>  (SHR32r1:i32:i32 GR32:i32:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SHR32r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i64 GR64:i64:$src1, 1:i8)  =>  (SHR64r1:i64:i32 GR64:i64:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::SHR64r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSRLVDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSRLVDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSRLVDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSRLVDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPSRLVQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSRLVQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPSRLVQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSRLVQYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSRLVDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
    I.setDesc(TII.get(X86::VPSRLVDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSRLVDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSRLVDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSRLVDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSRLVDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSRLVQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPSRLVQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSRLVQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSRLVQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSRLVQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSRLVQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSRLVWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
    I.setDesc(TII.get(X86::VPSRLVWZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit, Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSRLVWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
    I.setDesc(TII.get(X86::VPSRLVWZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit, Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (srl:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSRLVWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
    I.setDesc(TII.get(X86::VPSRLVWZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPMULLWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
    I.setDesc(TII.get(X86::VPMULLWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PMULLWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
    I.setDesc(TII.get(X86::PMULLWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPMULLWYrr:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
    I.setDesc(TII.get(X86::VPMULLWYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPMULLDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::VPMULLDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPMULLDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
    I.setDesc(TII.get(X86::VPMULLDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE41Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PMULLDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::PMULLDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPMULLDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
    I.setDesc(TII.get(X86::VPMULLDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPMULLDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
    I.setDesc(TII.get(X86::VPMULLDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPMULLDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
    I.setDesc(TII.get(X86::VPMULLDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPMULLWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
    I.setDesc(TII.get(X86::VPMULLWZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPMULLWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
    I.setDesc(TII.get(X86::VPMULLWZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPMULLWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
    I.setDesc(TII.get(X86::VPMULLWZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPMULLQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPMULLQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPMULLQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPMULLQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_MUL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPMULLQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPMULLQZ128rr));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (IMUL16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
    I.setDesc(TII.get(X86::IMUL16rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (IMUL32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
    I.setDesc(TII.get(X86::IMUL32rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (mul:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (IMUL64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
    I.setDesc(TII.get(X86::IMUL64rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v4i64 (bitconvert:v4i64 VR256:v8f32:$src1), (bitconvert:v4i64 VR256:v8f32:$src2))  =>  (VORPSYrr:v4i64 VR256:v8f32:$src1, VR256:v8f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VORPSYrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v4i64 (bitconvert:v4i64 VR256:v4f64:$src1), (bitconvert:v4i64 VR256:v4f64:$src2))  =>  (VORPDYrr:v4i64 VR256:v4f64:$src1, VR256:v4f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VORPDYrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v2i64 (bitconvert:v2i64 VR128:v4f32:$src1), (bitconvert:v2i64 VR128:v4f32:$src2))  =>  (VORPSrr:v2i64 VR128:v4f32:$src1, VR128:v4f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VORPSrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v2i64 (bitconvert:v2i64 VR128:v2f64:$src1), (bitconvert:v2i64 VR128:v2f64:$src2))  =>  (VORPDrr:v2i64 VR128:v2f64:$src1, VR128:v2f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VORPDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v2i64 (bitconvert:v2i64 VR128:v4f32:$src1), (bitconvert:v2i64 VR128:v4f32:$src2))  =>  (ORPSrr:v2i64 VR128:v4f32:$src1, VR128:v4f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ORPSrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v2i64 (bitconvert:v2i64 VR128:v2f64:$src1), (bitconvert:v2i64 VR128:v2f64:$src2))  =>  (ORPDrr:v2i64 VR128:v2f64:$src1, VR128:v2f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ORPDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v8i64 (bitconvert:v8i64 VR512:v16i32:$src1), (bitconvert:v8i64 VR512:v16i32:$src2))  =>  (VPORDZrr:v8i64 VR512:v16i32:$src1, VR512:v16i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPORDZrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v4i64 (bitconvert:v4i64 VR256X:v8i32:$src1), (bitconvert:v4i64 VR256X:v8i32:$src2))  =>  (VPORDZ256rr:v4i64 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPORDZ256rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:v2i64 (bitconvert:v2i64 VR128X:v4i32:$src1), (bitconvert:v2i64 VR128X:v4i32:$src2))  =>  (VPORDZ128rr:v2i64 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPORDZ128rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSIC32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSIC32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSIC64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSIC64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i32 (xor:i32 GR32:i32:$src, -1:i32), (add:i32 GR32:i32:$src, 1:i32))  =>  (T1MSKC32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::T1MSKC32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i64 (xor:i64 GR64:i64:$src, -1:i64), (add:i64 GR64:i64:$src, 1:i64))  =>  (T1MSKC64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::T1MSKC64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i32 (add:i32 GR32:i32:$src, -1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (BLSIC32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSIC32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i64 (add:i64 GR64:i64:$src, -1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (BLSIC64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSIC64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i32 (add:i32 GR32:i32:$src, 1:i32), (xor:i32 GR32:i32:$src, -1:i32))  =>  (T1MSKC32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::T1MSKC32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i64 (add:i64 GR64:i64:$src, 1:i64), (xor:i64 GR64:i64:$src, -1:i64))  =>  (T1MSKC64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::T1MSKC64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i32 (xor:i32 (add:i32 GR32:i32:$src, 1:i32), -1:i32), GR32:i32:$src)  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI2.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i64 (xor:i64 (add:i64 GR64:i64:$src, 1:i64), -1:i64), GR64:i64:$src)  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI2.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), -2, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 (sub:i32 -2:i32, GR32:i32:$src), GR32:i32:$src)  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(2)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(1), -2, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 (sub:i64 -2:i64, GR64:i64:$src), GR64:i64:$src)  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(2)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 (add:i32 GR32:i32:$src, 1:i32), GR32:i32:$src)  =>  (BLCS32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCS32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 (add:i64 GR64:i64:$src, 1:i64), GR64:i64:$src)  =>  (BLCS64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCS64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 (add:i32 GR32:i32:$src, -1:i32), GR32:i32:$src)  =>  (BLSFILL32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSFILL32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 (add:i64 GR64:i64:$src, -1:i64), GR64:i64:$src)  =>  (BLSFILL64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSFILL64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i32 GR32:i32:$src, (xor:i32 (add:i32 GR32:i32:$src, 1:i32), -1:i32))  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_XOR) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI2.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI2.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI2.getOperand(2), 1, MRI)))))
))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (or:i64 GR64:i64:$src, (xor:i64 (add:i64 GR64:i64:$src, 1:i64), -1:i64))  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(1), -2, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 GR32:i32:$src, (sub:i32 -2:i32, GR32:i32:$src))  =>  (BLCI32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_SUB) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* Operand 1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(1), -2, MRI)))) &&
((/* src */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(2).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 GR64:i64:$src, (sub:i64 -2:i64, GR64:i64:$src))  =>  (BLCI64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCI64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCS32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCS32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCS64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCS64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSFILL32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSFILL32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (or:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSFILL64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSFILL64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPORrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::PORrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPORYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPORYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KORBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
    I.setDesc(TII.get(X86::KORBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KORWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
    I.setDesc(TII.get(X86::KORWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KORDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
    I.setDesc(TII.get(X86::KORDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KORQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
    I.setDesc(TII.get(X86::KORQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPORQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPORQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPORQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPORQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPORQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPORQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX1OnlyBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_OR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VORPSYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VORPSYrr));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (OR8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
    I.setDesc(TII.get(X86::OR8rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (OR16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
    I.setDesc(TII.get(X86::OR16rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (OR32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
    I.setDesc(TII.get(X86::OR32rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (or:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (OR64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
    I.setDesc(TII.get(X86::OR64rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (shl:i8 GR8:i8:$src1, 1:i8)  =>  (ADD8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ADD8rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (shl:i16 GR16:i16:$src1, 1:i8)  =>  (ADD16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ADD16rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (shl:i32 GR32:i32:$src1, 1:i8)  =>  (ADD32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ADD32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (shl:i64 GR64:i64:$src1, 1:i8)  =>  (ADD64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::ADD64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSLLVDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSLLVDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSLLVDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSLLVDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPSLLVQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSLLVQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPSLLVQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSLLVQYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSLLVDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
    I.setDesc(TII.get(X86::VPSLLVDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSLLVDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSLLVDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSLLVDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSLLVDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSLLVQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPSLLVQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSLLVQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSLLVQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSLLVQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSLLVQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSLLVWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
    I.setDesc(TII.get(X86::VPSLLVWZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit, Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSLLVWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
    I.setDesc(TII.get(X86::VPSLLVWZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit, Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SHL) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (shl:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSLLVWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
    I.setDesc(TII.get(X86::VPSLLVWZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (VPSUBBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
    I.setDesc(TII.get(X86::VPSUBBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)  =>  (PSUBBrr:v16i8 VR128:v16i8:$src1, VR128:v16i8:$src2)
    I.setDesc(TII.get(X86::PSUBBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)  =>  (VPSUBBYrr:v32i8 VR256:v32i8:$src1, VR256:v32i8:$src2)
    I.setDesc(TII.get(X86::VPSUBBYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (VPSUBWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
    I.setDesc(TII.get(X86::VPSUBWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)  =>  (PSUBWrr:v8i16 VR128:v8i16:$src1, VR128:v8i16:$src2)
    I.setDesc(TII.get(X86::PSUBWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLX_Or_NoBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)  =>  (VPSUBWYrr:v16i16 VR256:v16i16:$src1, VR256:v16i16:$src2)
    I.setDesc(TII.get(X86::VPSUBWYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (VPSUBDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSUBDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)  =>  (PSUBDrr:v4i32 VR128:v4i32:$src1, VR128:v4i32:$src2)
    I.setDesc(TII.get(X86::PSUBDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)  =>  (VPSUBDYrr:v8i32 VR256:v8i32:$src1, VR256:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSUBDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPSUBQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSUBQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PSUBQrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::PSUBQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPSUBQYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSUBQYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPSUBQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPSUBQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPSUBQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPSUBQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPSUBQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPSUBQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)  =>  (VPSUBDZrr:v16i32 VR512:v16i32:$src1, VR512:v16i32:$src2)
    I.setDesc(TII.get(X86::VPSUBDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)  =>  (VPSUBDZ256rr:v8i32 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
    I.setDesc(TII.get(X86::VPSUBDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)  =>  (VPSUBDZ128rr:v4i32 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
    I.setDesc(TII.get(X86::VPSUBDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)  =>  (VPSUBWZrr:v32i16 VR512:v32i16:$src1, VR512:v32i16:$src2)
    I.setDesc(TII.get(X86::VPSUBWZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)  =>  (VPSUBWZ256rr:v16i16 VR256X:v16i16:$src1, VR256X:v16i16:$src2)
    I.setDesc(TII.get(X86::VPSUBWZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 16))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)  =>  (VPSUBWZ128rr:v8i16 VR128X:v8i16:$src1, VR128X:v8i16:$src2)
    I.setDesc(TII.get(X86::VPSUBWZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(64, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(64, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(64, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)  =>  (VPSUBBZrr:v64i8 VR512:v64i8:$src1, VR512:v64i8:$src2)
    I.setDesc(TII.get(X86::VPSUBBZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)  =>  (VPSUBBZ256rr:v32i8 VR256X:v32i8:$src1, VR256X:v32i8:$src2)
    I.setDesc(TII.get(X86::VPSUBBZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SUB) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 8))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)  =>  (VPSUBBZ128rr:v16i8 VR128X:v16i8:$src1, VR128X:v16i8:$src2)
    I.setDesc(TII.get(X86::VPSUBBZ128rr));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (SUB8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
    I.setDesc(TII.get(X86::SUB8rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (SUB16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
    I.setDesc(TII.get(X86::SUB16rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (SUB32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
    I.setDesc(TII.get(X86::SUB32rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (sub:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (SUB64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
    I.setDesc(TII.get(X86::SUB64rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v4i64 (bitconvert:v4i64 VR256:v8f32:$src1), (bitconvert:v4i64 VR256:v8f32:$src2))  =>  (VXORPSYrr:v4i64 VR256:v8f32:$src1, VR256:v8f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VXORPSYrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v4i64 (bitconvert:v4i64 VR256:v4f64:$src1), (bitconvert:v4i64 VR256:v4f64:$src2))  =>  (VXORPDYrr:v4i64 VR256:v4f64:$src1, VR256:v4f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VXORPDYrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v2i64 (bitconvert:v2i64 VR128:v4f32:$src1), (bitconvert:v2i64 VR128:v4f32:$src2))  =>  (VXORPSrr:v2i64 VR128:v4f32:$src1, VR128:v4f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VXORPSrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v2i64 (bitconvert:v2i64 VR128:v2f64:$src1), (bitconvert:v2i64 VR128:v2f64:$src2))  =>  (VXORPDrr:v2i64 VR128:v2f64:$src1, VR128:v2f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VXORPDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v2i64 (bitconvert:v2i64 VR128:v4f32:$src1), (bitconvert:v2i64 VR128:v4f32:$src2))  =>  (XORPSrr:v2i64 VR128:v4f32:$src1, VR128:v4f32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::XORPSrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v2i64 (bitconvert:v2i64 VR128:v2f64:$src1), (bitconvert:v2i64 VR128:v2f64:$src2))  =>  (XORPDrr:v2i64 VR128:v2f64:$src1, VR128:v2f64:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::XORPDrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(8, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(8, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v8i64 (bitconvert:v8i64 VR512:v16i32:$src1), (bitconvert:v8i64 VR512:v16i32:$src2))  =>  (VPXORDZrr:v8i64 VR512:v16i32:$src1, VR512:v16i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPXORDZrr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(4, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v4i64 (bitconvert:v4i64 VR256X:v8i32:$src1), (bitconvert:v4i64 VR256X:v8i32:$src2))  =>  (VPXORDZ256rr:v4i64 VR256X:v8i32:$src1, VR256X:v8i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPXORDZ256rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src1 */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
(((MI2.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI2.getOperand(0).getReg()) == (LLT::vector(2, 64))))) &&
((/* src2 */ (MRI.getType(MI2.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI2.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
      if (!isObviouslySafeToFold(MI2)) return false;
// (xor:v2i64 (bitconvert:v2i64 VR128X:v4i32:$src1), (bitconvert:v2i64 VR128X:v4i32:$src2))  =>  (VPXORDZ128rr:v2i64 VR128X:v4i32:$src1, VR128X:v4i32:$src2)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::VPXORDZ128rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src1*/);
    MIB.add(MI2.getOperand(1)/*src2*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 (add:i32 GR32:i32:$src, -1:i32), GR32:i32:$src)  =>  (BLSMSK32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSMSK32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 (add:i64 GR64:i64:$src, -1:i64), GR64:i64:$src)  =>  (BLSMSK64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSMSK64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 (add:i32 GR32:i32:$src, 1:i32), GR32:i32:$src)  =>  (BLCMSK32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCMSK32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
))) &&
((/* src */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 (add:i64 GR64:i64:$src, 1:i64), GR64:i64:$src)  =>  (BLCMSK64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCMSK64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, -1:i32))  =>  (BLSMSK32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSMSK32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasBMIBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), -1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, -1:i64))  =>  (BLSMSK64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLSMSK64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(32))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i32 GR32:i32:$src, (add:i32 GR32:i32:$src, 1:i32))  =>  (BLCMSK32rr:i32:i32 GR32:i32:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCMSK32rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasTBMBit};
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
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(((MI1.getOpcode() == TargetOpcode::G_ADD) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(64))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI1.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI1.getOperand(2), 1, MRI)))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (xor:i64 GR64:i64:$src, (add:i64 GR64:i64:$src, 1:i64))  =>  (BLCMSK64rr:i64:i32 GR64:i64:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::BLCMSK64rr));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src*/);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i8 GR8:i8:$src1, -1:i8)  =>  (NOT8r:i8 GR8:i8:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::NOT8r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i16 GR16:i16:$src1, -1:i16)  =>  (NOT16r:i16 GR16:i16:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::NOT16r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i32 GR32:i32:$src1, -1:i32)  =>  (NOT32r:i32 GR32:i32:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::NOT32r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i64 GR64:i64:$src1, -1:i64)  =>  (NOT64r:i64 GR64:i64:$src1)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::NOT64r));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI0.getOperand(1)/*src1*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (VPXORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::VPXORrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)  =>  (PXORrr:v2i64 VR128:v2i64:$src1, VR128:v2i64:$src2)
    I.setDesc(TII.get(X86::PXORrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX2Bit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VPXORYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VPXORYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)  =>  (KXORBrr:v8i1 VK8:v8i1:$src1, VK8:v8i1:$src2)
    I.setDesc(TII.get(X86::KXORBrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)  =>  (KXORWrr:v16i1 VK16:v16i1:$src1, VK16:v16i1:$src2)
    I.setDesc(TII.get(X86::KXORWrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(32, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)  =>  (KXORDrr:v32i1 VK32:v32i1:$src1, VK32:v32i1:$src2)
    I.setDesc(TII.get(X86::KXORDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasBWIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(64, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)  =>  (KXORQrr:v64i1 VK64:v64i1:$src1, VK64:v64i1:$src2)
    I.setDesc(TII.get(X86::KXORQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)  =>  (VPXORQZrr:v8i64 VR512:v8i64:$src1, VR512:v8i64:$src2)
    I.setDesc(TII.get(X86::VPXORQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)  =>  (VPXORQZ256rr:v4i64 VR256X:v4i64:$src1, VR256X:v4i64:$src2)
    I.setDesc(TII.get(X86::VPXORQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)  =>  (VPXORQZ128rr:v2i64 VR128X:v2i64:$src1, VR128X:v2i64:$src2)
    I.setDesc(TII.get(X86::VPXORQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX1OnlyBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_XOR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)  =>  (VXORPSYrr:v4i64 VR256:v4i64:$src1, VR256:v4i64:$src2)
    I.setDesc(TII.get(X86::VXORPSYrr));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i8 GR8:i8:$src1, GR8:i8:$src2)  =>  (XOR8rr:i8:i32 GR8:i8:$src1, GR8:i8:$src2)
    I.setDesc(TII.get(X86::XOR8rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i16 GR16:i16:$src1, GR16:i16:$src2)  =>  (XOR16rr:i16:i32 GR16:i16:$src1, GR16:i16:$src2)
    I.setDesc(TII.get(X86::XOR16rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i32 GR32:i32:$src1, GR32:i32:$src2)  =>  (XOR32rr:i32:i32 GR32:i32:$src1, GR32:i32:$src2)
    I.setDesc(TII.get(X86::XOR32rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* src2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (xor:i64 GR64:i64:$src1, GR64:i64:$src2)  =>  (XOR64rr:i64:i32 GR64:i64:$src1, GR64:i64:$src2)
    I.setDesc(TII.get(X86::XOR64rr));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::EFLAGS, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_ANYEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (anyext:i32 GR8:i8:$src)  =>  (MOVZX32rr8:i32 GR8:i8:$src)
    I.setDesc(TII.get(X86::MOVZX32rr8));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 GR64:i64:$src)  =>  (VMOV64toSDrr:f64 GR64:i64:$src)
    I.setDesc(TII.get(X86::VMOV64toSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 GR64:i64:$src)  =>  (MOV64toSDrr:f64 GR64:i64:$src)
    I.setDesc(TII.get(X86::MOV64toSDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f32 GR32:i32:$src)  =>  (VMOVDI2SSrr:f32 GR32:i32:$src)
    I.setDesc(TII.get(X86::VMOVDI2SSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f32 GR32:i32:$src)  =>  (MOVDI2SSrr:f32 GR32:i32:$src)
    I.setDesc(TII.get(X86::MOVDI2SSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i64 FR64:f64:$src)  =>  (VMOVSDto64rr:i64 FR64:f64:$src)
    I.setDesc(TII.get(X86::VMOVSDto64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i64 FR64:f64:$src)  =>  (MOVSDto64rr:i64 FR64:f64:$src)
    I.setDesc(TII.get(X86::MOVSDto64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i32 FR32:f32:$src)  =>  (VMOVSS2DIrr:i32 FR32:f32:$src)
    I.setDesc(TII.get(X86::VMOVSS2DIrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i32 FR32:f32:$src)  =>  (MOVSS2DIrr:i32 FR32:f32:$src)
    I.setDesc(TII.get(X86::MOVSS2DIrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f64 GR64:i64:$src)  =>  (VMOV64toSDZrr:f64 GR64:i64:$src)
    I.setDesc(TII.get(X86::VMOV64toSDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i64 FR64X:f64:$src)  =>  (VMOVSDto64Zrr:i64 FR64X:f64:$src)
    I.setDesc(TII.get(X86::VMOVSDto64Zrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:f32 GR32:i32:$src)  =>  (VMOVDI2SSZrr:f32 GR32:i32:$src)
    I.setDesc(TII.get(X86::VMOVDI2SSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (bitconvert:i32 FR32X:f32:$src)  =>  (VMOVSS2DIZrr:i32 FR32X:f32:$src)
    I.setDesc(TII.get(X86::VMOVSS2DIZrr));
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
    if ((MI0.getOpcode() == TargetOpcode::G_CONSTANT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MI0.getOperand(1).isCImm() && MI0.getOperand(1).getCImm()->equalsInt(0))))) {
// 0:i32  =>  (MOV32r0:i32:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::MOV32r0));
    MIB.add(MI0.getOperand(0)/*dst*/);
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
  PredicateBitset ExpectedFeatures = {Feature_OptForSizeBit, Feature_NotSlowIncDecBit, Feature_Not64BitModeBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_CONSTANT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MI0.getOperand(1).isCImm() && MI0.getOperand(1).getCImm()->equalsInt(1))))) {
// 1:i32  =>  (MOV32r1:i32:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::MOV32r1));
    MIB.add(MI0.getOperand(0)/*dst*/);
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
  PredicateBitset ExpectedFeatures = {Feature_OptForSizeBit, Feature_NotSlowIncDecBit, Feature_Not64BitModeBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_CONSTANT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MI0.getOperand(1).isCImm() && MI0.getOperand(1).getCImm()->equalsInt(-1))))) {
// -1:i32  =>  (MOV32r_1:i32:i32)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::MOV32r_1));
    MIB.add(MI0.getOperand(0)/*dst*/);
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
  PredicateBitset ExpectedFeatures = {Feature_FPStackf32Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::RFP32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f32 RFP32:f32:$src)  =>  (CHS_Fp32:f32:i16 RFP32:f32:$src)
    I.setDesc(TII.get(X86::CHS_Fp32));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_FPStackf64Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::RFP64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f64 RFP64:f64:$src)  =>  (CHS_Fp64:f64:i16 RFP64:f64:$src)
    I.setDesc(TII.get(X86::CHS_Fp64));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
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
    if ((MI0.getOpcode() == TargetOpcode::G_FNEG) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(80))) &&
((&RBI.getRegBankFromRegClass(X86::RFP80RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fneg:f80 RFP80:f80:$src)  =>  (CHS_Fp80:f80:i16 RFP80:f80:$src)
    I.setDesc(TII.get(X86::CHS_Fp80));
    auto MIB = MachineInstrBuilder(MF, &I);
    MIB.addDef(X86::FPSW, RegState::Implicit);
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:f64 FR32:f32:$src)  =>  (CVTSS2SDrr:f64 FR32:f32:$src)
    I.setDesc(TII.get(X86::CVTSS2SDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:v4f64 VR128:v4f32:$src)  =>  (VCVTPS2PDYrr:v4f64 VR128:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTPS2PDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:v8f64 VR256X:v8f32:$src)  =>  (VCVTPS2PDZrr:v8f64 VR256X:v8f32:$src)
    I.setDesc(TII.get(X86::VCVTPS2PDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fpextend:v4f64 VR128X:v4f32:$src)  =>  (VCVTPS2PDZ256rr:v4f64 VR128X:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTPS2PDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FR32:f32:$src)  =>  (VCVTTSS2SIrr:i32 FR32:f32:$src)
    I.setDesc(TII.get(X86::VCVTTSS2SIrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FR32:f32:$src)  =>  (VCVTTSS2SI64rr:i64 FR32:f32:$src)
    I.setDesc(TII.get(X86::VCVTTSS2SI64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FR64:f64:$src)  =>  (VCVTTSD2SIrr:i32 FR64:f64:$src)
    I.setDesc(TII.get(X86::VCVTTSD2SIrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseAVXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FR64:f64:$src)  =>  (VCVTTSD2SI64rr:i64 FR64:f64:$src)
    I.setDesc(TII.get(X86::VCVTTSD2SI64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FR32:f32:$src)  =>  (CVTTSS2SIrr:i32 FR32:f32:$src)
    I.setDesc(TII.get(X86::CVTTSS2SIrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FR32:f32:$src)  =>  (CVTTSS2SI64rr:i64 FR32:f32:$src)
    I.setDesc(TII.get(X86::CVTTSS2SI64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FR64:f64:$src)  =>  (CVTTSD2SIrr:i32 FR64:f64:$src)
    I.setDesc(TII.get(X86::CVTTSD2SIrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FR64:f64:$src)  =>  (CVTTSD2SI64rr:i64 FR64:f64:$src)
    I.setDesc(TII.get(X86::CVTTSD2SI64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 VR128:v4f32:$src)  =>  (VCVTTPS2DQrr:v4i32 VR128:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2DQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i32 VR256:v8f32:$src)  =>  (VCVTTPS2DQYrr:v8i32 VR256:v8f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2DQYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 VR128:v4f32:$src)  =>  (CVTTPS2DQrr:v4i32 VR128:v4f32:$src)
    I.setDesc(TII.get(X86::CVTTPS2DQrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 VR256:v4f64:$src)  =>  (VCVTTPD2DQYrr:v4i32 VR256:v4f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2DQYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FR32X:f32:$src)  =>  (VCVTTSS2SIZrr:i32 FR32X:f32:$src)
    I.setDesc(TII.get(X86::VCVTTSS2SIZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FR32X:f32:$src)  =>  (VCVTTSS2SI64Zrr:i64 FR32X:f32:$src)
    I.setDesc(TII.get(X86::VCVTTSS2SI64Zrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i32 FR64X:f64:$src)  =>  (VCVTTSD2SIZrr:i32 FR64X:f64:$src)
    I.setDesc(TII.get(X86::VCVTTSD2SIZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:i64 FR64X:f64:$src)  =>  (VCVTTSD2SI64Zrr:i64 FR64X:f64:$src)
    I.setDesc(TII.get(X86::VCVTTSD2SI64Zrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v16i32 VR512:v16f32:$src)  =>  (VCVTTPS2DQZrr:v16i32 VR512:v16f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2DQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 VR128X:v4f32:$src)  =>  (VCVTTPS2DQZ128rr:v4i32 VR128X:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2DQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i32 VR256X:v8f32:$src)  =>  (VCVTTPS2DQZ256rr:v8i32 VR256X:v8f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2DQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i32 VR512:v8f64:$src)  =>  (VCVTTPD2DQZrr:v8i32 VR512:v8f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2DQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i32 VR256X:v4f64:$src)  =>  (VCVTTPD2DQZ256rr:v4i32 VR256X:v4f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2DQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i64 VR512:v8f64:$src)  =>  (VCVTTPD2QQZrr:v8i64 VR512:v8f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2QQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v2i64 VR128X:v2f64:$src)  =>  (VCVTTPD2QQZ128rr:v2i64 VR128X:v2f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2QQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i64 VR256X:v4f64:$src)  =>  (VCVTTPD2QQZ256rr:v4i64 VR256X:v4f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2QQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v8i64 VR256X:v8f32:$src)  =>  (VCVTTPS2QQZrr:v8i64 VR256X:v8f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2QQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOSI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_sint:v4i64 VR128X:v4f32:$src)  =>  (VCVTTPS2QQZ256rr:v4i64 VR128X:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2QQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i32 FR32X:f32:$src)  =>  (VCVTTSS2USIZrr:i32 FR32X:f32:$src)
    I.setDesc(TII.get(X86::VCVTTSS2USIZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i64 FR32X:f32:$src)  =>  (VCVTTSS2USI64Zrr:i64 FR32X:f32:$src)
    I.setDesc(TII.get(X86::VCVTTSS2USI64Zrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i32 FR64X:f64:$src)  =>  (VCVTTSD2USIZrr:i32 FR64X:f64:$src)
    I.setDesc(TII.get(X86::VCVTTSD2USIZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:i64 FR64X:f64:$src)  =>  (VCVTTSD2USI64Zrr:i64 FR64X:f64:$src)
    I.setDesc(TII.get(X86::VCVTTSD2USI64Zrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v16i32 VR512:v16f32:$src)  =>  (VCVTTPS2UDQZrr:v16i32 VR512:v16f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2UDQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i32 VR128X:v4f32:$src)  =>  (VCVTTPS2UDQZ128rr:v4i32 VR128X:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2UDQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v8i32 VR256X:v8f32:$src)  =>  (VCVTTPS2UDQZ256rr:v8i32 VR256X:v8f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2UDQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v8i32 VR512:v8f64:$src)  =>  (VCVTTPD2UDQZrr:v8i32 VR512:v8f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2UDQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i32 VR256X:v4f64:$src)  =>  (VCVTTPD2UDQZ256rr:v4i32 VR256X:v4f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2UDQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v8i64 VR512:v8f64:$src)  =>  (VCVTTPD2UQQZrr:v8i64 VR512:v8f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2UQQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v2i64 VR128X:v2f64:$src)  =>  (VCVTTPD2UQQZ128rr:v2i64 VR128X:v2f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2UQQZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i64 VR256X:v4f64:$src)  =>  (VCVTTPD2UQQZ256rr:v4i64 VR256X:v4f64:$src)
    I.setDesc(TII.get(X86::VCVTTPD2UQQZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v8i64 VR256X:v8f32:$src)  =>  (VCVTTPS2UQQZrr:v8i64 VR256X:v8f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2UQQZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_FPTOUI) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (fp_to_uint:v4i64 VR128X:v4f32:$src)  =>  (VCVTTPS2UQQZ256rr:v4i64 VR128X:v4f32:$src)
    I.setDesc(TII.get(X86::VCVTTPS2UQQZ256rr));
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
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:i32 GR8:i8:$src)  =>  (MOVSX32rr8:i32 GR8:i8:$src)
    I.setDesc(TII.get(X86::MOVSX32rr8));
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
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:i32 GR16:i16:$src)  =>  (MOVSX32rr16:i32 GR16:i16:$src)
    I.setDesc(TII.get(X86::MOVSX32rr16));
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
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:i64 GR8:i8:$src)  =>  (MOVSX64rr8:i64 GR8:i8:$src)
    I.setDesc(TII.get(X86::MOVSX64rr8));
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
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:i64 GR16:i16:$src)  =>  (MOVSX64rr16:i64 GR16:i16:$src)
    I.setDesc(TII.get(X86::MOVSX64rr16));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_In64BitModeBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sext:i64 GR32:i32:$src)  =>  (MOVSX64rr32:i64 GR32:i32:$src)
    I.setDesc(TII.get(X86::MOVSX64rr32));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f32 GR32:i32:$src)  =>  (CVTSI2SSrr:f32 GR32:i32:$src)
    I.setDesc(TII.get(X86::CVTSI2SSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE1Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::FR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f32 GR64:i64:$src)  =>  (CVTSI2SS64rr:f32 GR64:i64:$src)
    I.setDesc(TII.get(X86::CVTSI2SS64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f64 GR32:i32:$src)  =>  (CVTSI2SDrr:f64 GR32:i32:$src)
    I.setDesc(TII.get(X86::CVTSI2SDrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::FR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:f64 GR64:i64:$src)  =>  (CVTSI2SD64rr:f64 GR64:i64:$src)
    I.setDesc(TII.get(X86::CVTSI2SD64rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f32 VR128:v4i32:$src)  =>  (VCVTDQ2PSrr:v4f32 VR128:v4i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f32 VR256:v8i32:$src)  =>  (VCVTDQ2PSYrr:v8f32 VR256:v8i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PSYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_UseSSE2Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f32 VR128:v4i32:$src)  =>  (CVTDQ2PSrr:v4f32 VR128:v4i32:$src)
    I.setDesc(TII.get(X86::CVTDQ2PSrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVXBit, Feature_NoVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f64 VR128:v4i32:$src)  =>  (VCVTDQ2PDYrr:v4f64 VR128:v4i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PDYrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f64 VR256X:v8i32:$src)  =>  (VCVTDQ2PDZrr:v8f64 VR256X:v8i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f64 VR128X:v4i32:$src)  =>  (VCVTDQ2PDZ256rr:v4f64 VR128X:v4i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v16f32 VR512:v16i32:$src)  =>  (VCVTDQ2PSZrr:v16f32 VR512:v16i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f32 VR128X:v4i32:$src)  =>  (VCVTDQ2PSZ128rr:v4f32 VR128X:v4i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PSZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f32 VR256X:v8i32:$src)  =>  (VCVTDQ2PSZ256rr:v8f32 VR256X:v8i32:$src)
    I.setDesc(TII.get(X86::VCVTDQ2PSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f64 VR512:v8i64:$src)  =>  (VCVTQQ2PDZrr:v8f64 VR512:v8i64:$src)
    I.setDesc(TII.get(X86::VCVTQQ2PDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v2f64 VR128X:v2i64:$src)  =>  (VCVTQQ2PDZ128rr:v2f64 VR128X:v2i64:$src)
    I.setDesc(TII.get(X86::VCVTQQ2PDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f64 VR256X:v4i64:$src)  =>  (VCVTQQ2PDZ256rr:v4f64 VR256X:v4i64:$src)
    I.setDesc(TII.get(X86::VCVTQQ2PDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v8f32 VR512:v8i64:$src)  =>  (VCVTQQ2PSZrr:v8f32 VR512:v8i64:$src)
    I.setDesc(TII.get(X86::VCVTQQ2PSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_SITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (sint_to_fp:v4f32 VR256X:v4i64:$src)  =>  (VCVTQQ2PSZ256rr:v4f32 VR256X:v4i64:$src)
    I.setDesc(TII.get(X86::VCVTQQ2PSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v8f64 VR256X:v8i32:$src)  =>  (VCVTUDQ2PDZrr:v8f64 VR256X:v8i32:$src)
    I.setDesc(TII.get(X86::VCVTUDQ2PDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f64 VR128X:v4i32:$src)  =>  (VCVTUDQ2PDZ256rr:v4f64 VR128X:v4i32:$src)
    I.setDesc(TII.get(X86::VCVTUDQ2PDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasAVX512Bit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(16, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v16f32 VR512:v16i32:$src)  =>  (VCVTUDQ2PSZrr:v16f32 VR512:v16i32:$src)
    I.setDesc(TII.get(X86::VCVTUDQ2PSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f32 VR128X:v4i32:$src)  =>  (VCVTUDQ2PSZ128rr:v4f32 VR128X:v4i32:$src)
    I.setDesc(TII.get(X86::VCVTUDQ2PSZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v8f32 VR256X:v8i32:$src)  =>  (VCVTUDQ2PSZ256rr:v8f32 VR256X:v8i32:$src)
    I.setDesc(TII.get(X86::VCVTUDQ2PSZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v8f64 VR512:v8i64:$src)  =>  (VCVTUQQ2PDZrr:v8f64 VR512:v8i64:$src)
    I.setDesc(TII.get(X86::VCVTUQQ2PDZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(2, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v2f64 VR128X:v2i64:$src)  =>  (VCVTUQQ2PDZ128rr:v2f64 VR128X:v2i64:$src)
    I.setDesc(TII.get(X86::VCVTUQQ2PDZ128rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f64 VR256X:v4i64:$src)  =>  (VCVTUQQ2PDZ256rr:v4f64 VR256X:v4i64:$src)
    I.setDesc(TII.get(X86::VCVTUQQ2PDZ256rr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(8, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(8, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR512RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v8f32 VR512:v8i64:$src)  =>  (VCVTUQQ2PSZrr:v8f32 VR512:v8i64:$src)
    I.setDesc(TII.get(X86::VCVTUQQ2PSZrr));
    MachineInstr &NewI = I;
      constrainSelectedInstRegOperands(NewI, TII, TRI, RBI);
      return true;
    }
    return false;
  }()) { return true; }

if ([&]() {
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit, Feature_HasVLXBit};
if ((AvailableFeatures & ExpectedFeatures) != ExpectedFeatures)
  return false;
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_UITOFP) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::vector(4, 32))) &&
((&RBI.getRegBankFromRegClass(X86::VR128XRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::vector(4, 64))) &&
((&RBI.getRegBankFromRegClass(X86::VR256XRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (uint_to_fp:v4f32 VR256X:v4i64:$src)  =>  (VCVTUQQ2PSZ256rr:v4f32 VR256X:v4i64:$src)
    I.setDesc(TII.get(X86::VCVTUQQ2PSZ256rr));
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
if (!MI0.getOperand(1).isReg())
  return false;
if (TRI.isPhysicalRegister(MI0.getOperand(1).getReg()))
  return false;
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(16))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(16, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK16RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (zext:i32 (bitconvert:i16 VK16:v16i1:$src))  =>  (KMOVWrk:i32 VK16:v16i1:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::KMOVWrk));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
  PredicateBitset ExpectedFeatures = {Feature_HasDQIBit};
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
if (MI1.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Operand 1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
(((MI1.getOpcode() == TargetOpcode::G_BITCAST) &&
((/* Operand 0 */ (MRI.getType(MI1.getOperand(0).getReg()) == (LLT::scalar(8))))) &&
((/* src */ (MRI.getType(MI1.getOperand(1).getReg()) == (LLT::vector(8, 1))) &&
((&RBI.getRegBankFromRegClass(X86::VK8RegClass) == RBI.getRegBank(MI1.getOperand(1).getReg(), MRI, TRI))))))
)))) {
      if (!isObviouslySafeToFold(MI1)) return false;
// (zext:i32 (bitconvert:i8 VK8:v8i1:$src))  =>  (KMOVBrk:i32 VK8:v8i1:$src)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(X86::KMOVBrk));
    MIB.add(MI0.getOperand(0)/*dst*/);
    MIB.add(MI1.getOperand(1)/*src*/);
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
if (MI0.getNumOperands() < 2)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (zext:i32 GR8:i8:$src)  =>  (MOVZX32rr8:i32 GR8:i8:$src)
    I.setDesc(TII.get(X86::MOVZX32rr8));
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
    if ((MI0.getOpcode() == TargetOpcode::G_ZEXT) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI)))))) {
// (zext:i32 GR16:i16:$src)  =>  (MOVZX32rr16:i32 GR16:i16:$src)
    I.setDesc(TII.get(X86::MOVZX32rr16));
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
((/* dst */ (MI0.getOperand(0).isMBB())))) {
// (br (bb:Other):$dst)  =>  (JMP_1 (bb:Other):$dst)
    I.setDesc(TII.get(X86::JMP_1));
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
computeAvailableModuleFeatures(const X86Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const X86Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
