/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the AArch64 target                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable MachineOperand TempOp0;
  mutable MachineOperand TempOp1;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, TempOp0(MachineOperand::CreatePlaceholder())
, TempOp1(MachineOperand::CreatePlaceholder())
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
bool AArch64InstructionSelector::selectImpl(MachineInstr &I) const {
  MachineFunction &MF = *I.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
if ([&]() {
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
(selectArithImmed(MI0.getOperand(1), TempOp0, TempOp1)))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i32 addsub_shifted_imm32:i32:$imm, GPR32sp:i32:$Rn)  =>  (ADDWri:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDWri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
MIB.add(TempOp0);
MIB.add(TempOp1);
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
(selectArithImmed(MI0.getOperand(1), TempOp0, TempOp1)))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(64))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR64spRegClass) == RBI.getRegBank(MI0.getOperand(2).getReg(), MRI, TRI)))))) {
// (add:i64 addsub_shifted_imm64:i64:$imm, GPR64sp:i64:$Rn)  =>  (ADDXri:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDXri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(2)/*Rn*/);
MIB.add(TempOp0);
MIB.add(TempOp1);
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
    if ((MI0.getOpcode() == TargetOpcode::G_ADD) &&
((/* Rd */ (MRI.getType(MI0.getOperand(0).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(0).getReg(), MRI, TRI))))) &&
((/* Rn */ (MRI.getType(MI0.getOperand(1).getReg()) == (LLT::scalar(32))) &&
((&RBI.getRegBankFromRegClass(AArch64::GPR32spRegClass) == RBI.getRegBank(MI0.getOperand(1).getReg(), MRI, TRI))))) &&
((/* imm */ (MRI.getType(MI0.getOperand(2).getReg()) == (LLT::scalar(32))) &&
(selectArithImmed(MI0.getOperand(2), TempOp0, TempOp1))))) {
// (add:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)  =>  (ADDWri:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDWri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
MIB.add(TempOp0);
MIB.add(TempOp1);
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
(selectArithImmed(MI0.getOperand(2), TempOp0, TempOp1))))) {
// (add:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)  =>  (ADDXri:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::ADDXri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
MIB.add(TempOp0);
MIB.add(TempOp1);
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(1).isReg())
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
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
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
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(1).getReg());
if (MI1.getNumOperands() < 2)
  return false;
if (!MI0.getOperand(2).isReg())
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
MachineInstr &MI0 = I;
if (MI0.getNumOperands() < 3)
  return false;
if (!MI0.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
(selectArithImmed(MI0.getOperand(2), TempOp0, TempOp1))))) {
// (sub:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)  =>  (SUBSWri:i32:i32 GPR32sp:i32:$Rn, addsub_shifted_imm32:i32:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SUBSWri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
MIB.add(TempOp0);
MIB.add(TempOp1);
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
(selectArithImmed(MI0.getOperand(2), TempOp0, TempOp1))))) {
// (sub:i64 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)  =>  (SUBSXri:i64:i32 GPR64sp:i64:$Rn, addsub_shifted_imm64:i64:$imm)
MachineInstrBuilder MIB = BuildMI(*I.getParent(), I, I.getDebugLoc(), TII.get(AArch64::SUBSXri));
    MIB.add(MI0.getOperand(0)/*Rd*/);
    MIB.add(MI0.getOperand(1)/*Rn*/);
MIB.add(TempOp0);
MIB.add(TempOp1);
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
MachineInstr &MI1 = *MRI.getVRegDef(MI0.getOperand(2).getReg());
if (MI1.getNumOperands() < 3)
  return false;
if (!MI1.getOperand(1).isReg())
  return false;
MachineInstr &MI2 = *MRI.getVRegDef(MI1.getOperand(1).getReg());
if (MI2.getNumOperands() < 2)
  return false;
if (!MI1.getOperand(2).isReg())
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
    I.setDesc(TII.get(AArch64::EONWrr));
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
    I.setDesc(TII.get(AArch64::EONXrr));
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
    I.setDesc(TII.get(AArch64::EONWrr));
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
    I.setDesc(TII.get(AArch64::EONXrr));
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
