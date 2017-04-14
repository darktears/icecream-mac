/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the X86 target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
bool X86InstructionSelector::selectImpl(MachineInstr &I) const {
  MachineFunction &MF = *I.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
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
    I.setDesc(TII.get(X86::SAR8r1));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i16 GR16:i16:$src1, 1:i8)  =>  (SAR16r1:i16:i32 GR16:i16:$src1)
    I.setDesc(TII.get(X86::SAR16r1));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i32 GR32:i32:$src1, 1:i8)  =>  (SAR32r1:i32:i32 GR32:i32:$src1)
    I.setDesc(TII.get(X86::SAR32r1));
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
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (sra:i64 GR64:i64:$src1, 1:i8)  =>  (SAR64r1:i64:i32 GR64:i64:$src1)
    I.setDesc(TII.get(X86::SAR64r1));
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(8))) &&
((&RBI.getRegBankFromRegClass(X86::GR8RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i8 GR8:i8:$src1, 1:i8)  =>  (SHR8r1:i8:i32 GR8:i8:$src1)
    I.setDesc(TII.get(X86::SHR8r1));
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(16))) &&
((&RBI.getRegBankFromRegClass(X86::GR16RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i16 GR16:i16:$src1, 1:i8)  =>  (SHR16r1:i16:i32 GR16:i16:$src1)
    I.setDesc(TII.get(X86::SHR16r1));
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(X86::GR32RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i32 GR32:i32:$src1, 1:i8)  =>  (SHR32r1:i32:i32 GR32:i32:$src1)
    I.setDesc(TII.get(X86::SHR32r1));
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
    if ((MI0.getOpcode() == TargetOpcode::G_LSHR) &&
((/* dst */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* src1 */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(X86::GR64RegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(8))) &&
(isOperandImmEqual(MI0.getOperand(2), 1, MRI))))) {
// (srl:i64 GR64:i64:$src1, 1:i8)  =>  (SHR64r1:i64:i32 GR64:i64:$src1)
    I.setDesc(TII.get(X86::SHR64r1));
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
    I.setDesc(TII.get(X86::NOT8r));
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
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(16))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i16 GR16:i16:$src1, -1:i16)  =>  (NOT16r:i16 GR16:i16:$src1)
    I.setDesc(TII.get(X86::NOT16r));
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
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i32 GR32:i32:$src1, -1:i32)  =>  (NOT32r:i32 GR32:i32:$src1)
    I.setDesc(TII.get(X86::NOT32r));
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
((/* Operand 2 */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
(isOperandImmEqual(MI0.getOperand(2), -1, MRI))))) {
// (xor:i64 GR64:i64:$src1, -1:i64)  =>  (NOT64r:i64 GR64:i64:$src1)
    I.setDesc(TII.get(X86::NOT64r));
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
