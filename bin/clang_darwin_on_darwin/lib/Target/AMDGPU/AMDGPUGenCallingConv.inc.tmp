/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Calling Convention Implementation Fragment                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool CC_AMDGPU(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_AMDGPU_Kernel(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_R600(unsigned ValNo, MVT ValVT,
                    MVT LocVT, CCValAssign::LocInfo LocInfo,
                    ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool CC_SI(unsigned ValNo, MVT ValVT,
                  MVT LocVT, CCValAssign::LocInfo LocInfo,
                  ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_SI(unsigned ValNo, MVT ValVT,
                     MVT LocVT, CCValAssign::LocInfo LocInfo,
                     ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_AMDGPU(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (static_cast<const AMDGPUSubtarget&>(State.getMachineFunction().getSubtarget()).getGeneration() >=AMDGPUSubtarget::SOUTHERN_ISLANDS && !AMDGPU::isShader(State.getCallingConv())) {
    if (!CC_AMDGPU_Kernel(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (static_cast<const AMDGPUSubtarget&>(State.getMachineFunction().getSubtarget()).getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !AMDGPU::isShader(State.getCallingConv())) {
    if (!CC_AMDGPU_Kernel(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (static_cast<const AMDGPUSubtarget&>(State.getMachineFunction().getSubtarget()).getGeneration() >= AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    if (!CC_SI(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  if (static_cast<const AMDGPUSubtarget&>(State.getMachineFunction().getSubtarget()).getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    if (!CC_R600(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
      return false;
  }

  return true;  // CC didn't match.
}


static bool CC_AMDGPU_Kernel(unsigned ValNo, MVT ValVT,
                             MVT LocVT, CCValAssign::LocInfo LocInfo,
                             ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (allocateKernArg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
    return false;

  return true;  // CC didn't match.
}


static bool CC_R600(unsigned ValNo, MVT ValVT,
                    MVT LocVT, CCValAssign::LocInfo LocInfo,
                    ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isInReg()) {
    if (LocVT == MVT::v4f32 ||
        LocVT == MVT::v4i32) {
      static const MCPhysReg RegList1[] = {
        AMDGPU::T0_XYZW, AMDGPU::T1_XYZW, AMDGPU::T2_XYZW, AMDGPU::T3_XYZW, AMDGPU::T4_XYZW, AMDGPU::T5_XYZW, AMDGPU::T6_XYZW, AMDGPU::T7_XYZW, AMDGPU::T8_XYZW, AMDGPU::T9_XYZW, AMDGPU::T10_XYZW, AMDGPU::T11_XYZW, AMDGPU::T12_XYZW, AMDGPU::T13_XYZW, AMDGPU::T14_XYZW, AMDGPU::T15_XYZW, AMDGPU::T16_XYZW, AMDGPU::T17_XYZW, AMDGPU::T18_XYZW, AMDGPU::T19_XYZW, AMDGPU::T20_XYZW, AMDGPU::T21_XYZW, AMDGPU::T22_XYZW, AMDGPU::T23_XYZW, AMDGPU::T24_XYZW, AMDGPU::T25_XYZW, AMDGPU::T26_XYZW, AMDGPU::T27_XYZW, AMDGPU::T28_XYZW, AMDGPU::T29_XYZW, AMDGPU::T30_XYZW, AMDGPU::T31_XYZW, AMDGPU::T32_XYZW
      };
      if (unsigned Reg = State.AllocateReg(RegList1)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  return true;  // CC didn't match.
}


static bool CC_SI(unsigned ValNo, MVT ValVT,
                  MVT LocVT, CCValAssign::LocInfo LocInfo,
                  ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (ArgFlags.isInReg()) {
    if (LocVT == MVT::f32 ||
        LocVT == MVT::i32) {
      static const MCPhysReg RegList1[] = {
        AMDGPU::SGPR0, AMDGPU::SGPR1, AMDGPU::SGPR2, AMDGPU::SGPR3, AMDGPU::SGPR4, AMDGPU::SGPR5, AMDGPU::SGPR6, AMDGPU::SGPR7, AMDGPU::SGPR8, AMDGPU::SGPR9, AMDGPU::SGPR10, AMDGPU::SGPR11, AMDGPU::SGPR12, AMDGPU::SGPR13, AMDGPU::SGPR14, AMDGPU::SGPR15, AMDGPU::SGPR16, AMDGPU::SGPR17, AMDGPU::SGPR18, AMDGPU::SGPR19, AMDGPU::SGPR20, AMDGPU::SGPR21, AMDGPU::SGPR22, AMDGPU::SGPR23, AMDGPU::SGPR24, AMDGPU::SGPR25, AMDGPU::SGPR26, AMDGPU::SGPR27, AMDGPU::SGPR28, AMDGPU::SGPR29, AMDGPU::SGPR30, AMDGPU::SGPR31, AMDGPU::SGPR32, AMDGPU::SGPR33, AMDGPU::SGPR34, AMDGPU::SGPR35, AMDGPU::SGPR36, AMDGPU::SGPR37, AMDGPU::SGPR38, AMDGPU::SGPR39
      };
      if (unsigned Reg = State.AllocateReg(RegList1)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (ArgFlags.isInReg()) {
    if (LocVT == MVT::i64) {
      static const MCPhysReg RegList2[] = {
        AMDGPU::SGPR0, AMDGPU::SGPR2, AMDGPU::SGPR4, AMDGPU::SGPR6, AMDGPU::SGPR8, AMDGPU::SGPR10, AMDGPU::SGPR12, AMDGPU::SGPR14, AMDGPU::SGPR16, AMDGPU::SGPR18, AMDGPU::SGPR20, AMDGPU::SGPR22, AMDGPU::SGPR24, AMDGPU::SGPR26, AMDGPU::SGPR28, AMDGPU::SGPR30, AMDGPU::SGPR32, AMDGPU::SGPR34, AMDGPU::SGPR36, AMDGPU::SGPR38
      };
      static const MCPhysReg RegList3[] = {
        AMDGPU::SGPR1, AMDGPU::SGPR3, AMDGPU::SGPR5, AMDGPU::SGPR7, AMDGPU::SGPR9, AMDGPU::SGPR11, AMDGPU::SGPR13, AMDGPU::SGPR15, AMDGPU::SGPR17, AMDGPU::SGPR19, AMDGPU::SGPR21, AMDGPU::SGPR23, AMDGPU::SGPR25, AMDGPU::SGPR27, AMDGPU::SGPR29, AMDGPU::SGPR31, AMDGPU::SGPR33, AMDGPU::SGPR35, AMDGPU::SGPR37, AMDGPU::SGPR39
      };
      if (unsigned Reg = State.AllocateReg(RegList2, RegList3)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (!ArgFlags.isInReg()) {
    if (LocVT == MVT::f32 ||
        LocVT == MVT::i32) {
      static const MCPhysReg RegList4[] = {
        AMDGPU::VGPR0, AMDGPU::VGPR1, AMDGPU::VGPR2, AMDGPU::VGPR3, AMDGPU::VGPR4, AMDGPU::VGPR5, AMDGPU::VGPR6, AMDGPU::VGPR7, AMDGPU::VGPR8, AMDGPU::VGPR9, AMDGPU::VGPR10, AMDGPU::VGPR11, AMDGPU::VGPR12, AMDGPU::VGPR13, AMDGPU::VGPR14, AMDGPU::VGPR15, AMDGPU::VGPR16, AMDGPU::VGPR17, AMDGPU::VGPR18, AMDGPU::VGPR19, AMDGPU::VGPR20, AMDGPU::VGPR21, AMDGPU::VGPR22, AMDGPU::VGPR23, AMDGPU::VGPR24, AMDGPU::VGPR25, AMDGPU::VGPR26, AMDGPU::VGPR27, AMDGPU::VGPR28, AMDGPU::VGPR29, AMDGPU::VGPR30, AMDGPU::VGPR31, AMDGPU::VGPR32, AMDGPU::VGPR33, AMDGPU::VGPR34, AMDGPU::VGPR35, AMDGPU::VGPR36, AMDGPU::VGPR37, AMDGPU::VGPR38, AMDGPU::VGPR39, AMDGPU::VGPR40, AMDGPU::VGPR41, AMDGPU::VGPR42, AMDGPU::VGPR43, AMDGPU::VGPR44, AMDGPU::VGPR45, AMDGPU::VGPR46, AMDGPU::VGPR47, AMDGPU::VGPR48, AMDGPU::VGPR49, AMDGPU::VGPR50, AMDGPU::VGPR51, AMDGPU::VGPR52, AMDGPU::VGPR53, AMDGPU::VGPR54, AMDGPU::VGPR55, AMDGPU::VGPR56, AMDGPU::VGPR57, AMDGPU::VGPR58, AMDGPU::VGPR59, AMDGPU::VGPR60, AMDGPU::VGPR61, AMDGPU::VGPR62, AMDGPU::VGPR63, AMDGPU::VGPR64, AMDGPU::VGPR65, AMDGPU::VGPR66, AMDGPU::VGPR67, AMDGPU::VGPR68, AMDGPU::VGPR69, AMDGPU::VGPR70, AMDGPU::VGPR71, AMDGPU::VGPR72, AMDGPU::VGPR73, AMDGPU::VGPR74, AMDGPU::VGPR75, AMDGPU::VGPR76, AMDGPU::VGPR77, AMDGPU::VGPR78, AMDGPU::VGPR79, AMDGPU::VGPR80, AMDGPU::VGPR81, AMDGPU::VGPR82, AMDGPU::VGPR83, AMDGPU::VGPR84, AMDGPU::VGPR85, AMDGPU::VGPR86, AMDGPU::VGPR87, AMDGPU::VGPR88, AMDGPU::VGPR89, AMDGPU::VGPR90, AMDGPU::VGPR91, AMDGPU::VGPR92, AMDGPU::VGPR93, AMDGPU::VGPR94, AMDGPU::VGPR95, AMDGPU::VGPR96, AMDGPU::VGPR97, AMDGPU::VGPR98, AMDGPU::VGPR99, AMDGPU::VGPR100, AMDGPU::VGPR101, AMDGPU::VGPR102, AMDGPU::VGPR103, AMDGPU::VGPR104, AMDGPU::VGPR105, AMDGPU::VGPR106, AMDGPU::VGPR107, AMDGPU::VGPR108, AMDGPU::VGPR109, AMDGPU::VGPR110, AMDGPU::VGPR111, AMDGPU::VGPR112, AMDGPU::VGPR113, AMDGPU::VGPR114, AMDGPU::VGPR115, AMDGPU::VGPR116, AMDGPU::VGPR117, AMDGPU::VGPR118, AMDGPU::VGPR119, AMDGPU::VGPR120, AMDGPU::VGPR121, AMDGPU::VGPR122, AMDGPU::VGPR123, AMDGPU::VGPR124, AMDGPU::VGPR125, AMDGPU::VGPR126, AMDGPU::VGPR127, AMDGPU::VGPR128, AMDGPU::VGPR129, AMDGPU::VGPR130, AMDGPU::VGPR131, AMDGPU::VGPR132, AMDGPU::VGPR133, AMDGPU::VGPR134, AMDGPU::VGPR135
      };
      if (unsigned Reg = State.AllocateReg(RegList4)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  if (ArgFlags.isByVal()) {
    if (LocVT == MVT::i64) {
      static const MCPhysReg RegList5[] = {
        AMDGPU::SGPR0, AMDGPU::SGPR2, AMDGPU::SGPR4, AMDGPU::SGPR6, AMDGPU::SGPR8, AMDGPU::SGPR10, AMDGPU::SGPR12, AMDGPU::SGPR14, AMDGPU::SGPR16, AMDGPU::SGPR18, AMDGPU::SGPR20, AMDGPU::SGPR22, AMDGPU::SGPR24, AMDGPU::SGPR26, AMDGPU::SGPR28, AMDGPU::SGPR30, AMDGPU::SGPR32, AMDGPU::SGPR34, AMDGPU::SGPR36, AMDGPU::SGPR38
      };
      static const MCPhysReg RegList6[] = {
        AMDGPU::SGPR1, AMDGPU::SGPR3, AMDGPU::SGPR5, AMDGPU::SGPR7, AMDGPU::SGPR9, AMDGPU::SGPR11, AMDGPU::SGPR13, AMDGPU::SGPR15, AMDGPU::SGPR17, AMDGPU::SGPR19, AMDGPU::SGPR21, AMDGPU::SGPR23, AMDGPU::SGPR25, AMDGPU::SGPR27, AMDGPU::SGPR29, AMDGPU::SGPR31, AMDGPU::SGPR33, AMDGPU::SGPR35, AMDGPU::SGPR37, AMDGPU::SGPR39
      };
      if (unsigned Reg = State.AllocateReg(RegList5, RegList6)) {
        State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
        return false;
      }
    }
  }

  return true;  // CC didn't match.
}


static bool RetCC_SI(unsigned ValNo, MVT ValVT,
                     MVT LocVT, CCValAssign::LocInfo LocInfo,
                     ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32) {
    static const MCPhysReg RegList1[] = {
      AMDGPU::SGPR0, AMDGPU::SGPR1, AMDGPU::SGPR2, AMDGPU::SGPR3, AMDGPU::SGPR4, AMDGPU::SGPR5, AMDGPU::SGPR6, AMDGPU::SGPR7, AMDGPU::SGPR8, AMDGPU::SGPR9, AMDGPU::SGPR10, AMDGPU::SGPR11, AMDGPU::SGPR12, AMDGPU::SGPR13, AMDGPU::SGPR14, AMDGPU::SGPR15, AMDGPU::SGPR16, AMDGPU::SGPR17, AMDGPU::SGPR18, AMDGPU::SGPR19, AMDGPU::SGPR20, AMDGPU::SGPR21, AMDGPU::SGPR22, AMDGPU::SGPR23, AMDGPU::SGPR24, AMDGPU::SGPR25, AMDGPU::SGPR26, AMDGPU::SGPR27, AMDGPU::SGPR28, AMDGPU::SGPR29, AMDGPU::SGPR30, AMDGPU::SGPR31, AMDGPU::SGPR32, AMDGPU::SGPR33, AMDGPU::SGPR34, AMDGPU::SGPR35, AMDGPU::SGPR36, AMDGPU::SGPR37, AMDGPU::SGPR38, AMDGPU::SGPR39
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::f32) {
    static const MCPhysReg RegList2[] = {
      AMDGPU::VGPR0, AMDGPU::VGPR1, AMDGPU::VGPR2, AMDGPU::VGPR3, AMDGPU::VGPR4, AMDGPU::VGPR5, AMDGPU::VGPR6, AMDGPU::VGPR7, AMDGPU::VGPR8, AMDGPU::VGPR9, AMDGPU::VGPR10, AMDGPU::VGPR11, AMDGPU::VGPR12, AMDGPU::VGPR13, AMDGPU::VGPR14, AMDGPU::VGPR15, AMDGPU::VGPR16, AMDGPU::VGPR17, AMDGPU::VGPR18, AMDGPU::VGPR19, AMDGPU::VGPR20, AMDGPU::VGPR21, AMDGPU::VGPR22, AMDGPU::VGPR23, AMDGPU::VGPR24, AMDGPU::VGPR25, AMDGPU::VGPR26, AMDGPU::VGPR27, AMDGPU::VGPR28, AMDGPU::VGPR29, AMDGPU::VGPR30, AMDGPU::VGPR31, AMDGPU::VGPR32, AMDGPU::VGPR33, AMDGPU::VGPR34, AMDGPU::VGPR35, AMDGPU::VGPR36, AMDGPU::VGPR37, AMDGPU::VGPR38, AMDGPU::VGPR39, AMDGPU::VGPR40, AMDGPU::VGPR41, AMDGPU::VGPR42, AMDGPU::VGPR43, AMDGPU::VGPR44, AMDGPU::VGPR45, AMDGPU::VGPR46, AMDGPU::VGPR47, AMDGPU::VGPR48, AMDGPU::VGPR49, AMDGPU::VGPR50, AMDGPU::VGPR51, AMDGPU::VGPR52, AMDGPU::VGPR53, AMDGPU::VGPR54, AMDGPU::VGPR55, AMDGPU::VGPR56, AMDGPU::VGPR57, AMDGPU::VGPR58, AMDGPU::VGPR59, AMDGPU::VGPR60, AMDGPU::VGPR61, AMDGPU::VGPR62, AMDGPU::VGPR63, AMDGPU::VGPR64, AMDGPU::VGPR65, AMDGPU::VGPR66, AMDGPU::VGPR67, AMDGPU::VGPR68, AMDGPU::VGPR69, AMDGPU::VGPR70, AMDGPU::VGPR71, AMDGPU::VGPR72, AMDGPU::VGPR73, AMDGPU::VGPR74, AMDGPU::VGPR75, AMDGPU::VGPR76, AMDGPU::VGPR77, AMDGPU::VGPR78, AMDGPU::VGPR79, AMDGPU::VGPR80, AMDGPU::VGPR81, AMDGPU::VGPR82, AMDGPU::VGPR83, AMDGPU::VGPR84, AMDGPU::VGPR85, AMDGPU::VGPR86, AMDGPU::VGPR87, AMDGPU::VGPR88, AMDGPU::VGPR89, AMDGPU::VGPR90, AMDGPU::VGPR91, AMDGPU::VGPR92, AMDGPU::VGPR93, AMDGPU::VGPR94, AMDGPU::VGPR95, AMDGPU::VGPR96, AMDGPU::VGPR97, AMDGPU::VGPR98, AMDGPU::VGPR99, AMDGPU::VGPR100, AMDGPU::VGPR101, AMDGPU::VGPR102, AMDGPU::VGPR103, AMDGPU::VGPR104, AMDGPU::VGPR105, AMDGPU::VGPR106, AMDGPU::VGPR107, AMDGPU::VGPR108, AMDGPU::VGPR109, AMDGPU::VGPR110, AMDGPU::VGPR111, AMDGPU::VGPR112, AMDGPU::VGPR113, AMDGPU::VGPR114, AMDGPU::VGPR115, AMDGPU::VGPR116, AMDGPU::VGPR117, AMDGPU::VGPR118, AMDGPU::VGPR119, AMDGPU::VGPR120, AMDGPU::VGPR121, AMDGPU::VGPR122, AMDGPU::VGPR123, AMDGPU::VGPR124, AMDGPU::VGPR125, AMDGPU::VGPR126, AMDGPU::VGPR127, AMDGPU::VGPR128, AMDGPU::VGPR129, AMDGPU::VGPR130, AMDGPU::VGPR131, AMDGPU::VGPR132, AMDGPU::VGPR133, AMDGPU::VGPR134, AMDGPU::VGPR135
    };
    if (unsigned Reg = State.AllocateReg(RegList2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}
