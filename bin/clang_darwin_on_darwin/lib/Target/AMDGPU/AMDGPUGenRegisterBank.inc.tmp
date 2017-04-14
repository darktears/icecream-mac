/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Bank Source Fragments                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGBANK_DECLARATIONS
#undef GET_REGBANK_DECLARATIONS
namespace llvm {
namespace AMDGPU {
enum {
  SGPRRegBankID,
  VGPRRegBankID,
  NumRegisterBanks,
};
} // end namespace AMDGPU
} // end namespace llvm
#endif // GET_REGBANK_DECLARATIONS

#ifdef GET_TARGET_REGBANK_CLASS
#undef GET_TARGET_REGBANK_CLASS
private:
  static RegisterBank *RegBanks[];

protected:
  AMDGPUGenRegisterBankInfo();

#endif // GET_TARGET_REGBANK_CLASS

#ifdef GET_TARGET_REGBANK_IMPL
#undef GET_TARGET_REGBANK_IMPL
namespace llvm {
namespace AMDGPU {
const uint32_t SGPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AMDGPU::SReg_32RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XM0RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XM0_XEXECRegClassID - 0)) |
    (1u << (AMDGPU::SGPR_32RegClassID - 0)) |
    (1u << (AMDGPU::TTMP_32RegClassID - 0)) |
    (1u << (AMDGPU::M0_CLASSRegClassID - 0)) |
    (1u << (AMDGPU::VS_32RegClassID - 0)) |
    0,
    // 32-63
    (1u << (AMDGPU::SReg_64RegClassID - 32)) |
    (1u << (AMDGPU::SReg_64_XEXECRegClassID - 32)) |
    (1u << (AMDGPU::SGPR_64RegClassID - 32)) |
    (1u << (AMDGPU::TTMP_64RegClassID - 32)) |
    (1u << (AMDGPU::SReg_128RegClassID - 32)) |
    (1u << (AMDGPU::VS_64RegClassID - 32)) |
    (1u << (AMDGPU::SGPR_128RegClassID - 32)) |
    (1u << (AMDGPU::TTMP_128RegClassID - 32)) |
    (1u << (AMDGPU::SReg_256RegClassID - 32)) |
    (1u << (AMDGPU::SReg_512RegClassID - 32)) |
    0,
};
const uint32_t VGPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AMDGPU::VGPR_32RegClassID - 0)) |
    (1u << (AMDGPU::VReg_1RegClassID - 0)) |
    (1u << (AMDGPU::VS_32RegClassID - 0)) |
    0,
    // 32-63
    (1u << (AMDGPU::VReg_64RegClassID - 32)) |
    (1u << (AMDGPU::VReg_96RegClassID - 32)) |
    (1u << (AMDGPU::VS_64RegClassID - 32)) |
    (1u << (AMDGPU::VReg_128RegClassID - 32)) |
    (1u << (AMDGPU::VReg_256RegClassID - 32)) |
    (1u << (AMDGPU::VReg_512RegClassID - 32)) |
    0,
};

RegisterBank SGPRRegBank(/* ID */ AMDGPU::SGPRRegBankID, /* Name */ "SGPR", /* Size */ 512, /* CoveredRegClasses */ SGPRRegBankCoverageData, /* NumRegClasses */ 62);
RegisterBank VGPRRegBank(/* ID */ AMDGPU::VGPRRegBankID, /* Name */ "VGPR", /* Size */ 512, /* CoveredRegClasses */ VGPRRegBankCoverageData, /* NumRegClasses */ 62);
} // end namespace AMDGPU

RegisterBank *AMDGPUGenRegisterBankInfo::RegBanks[] = {
    &AMDGPU::SGPRRegBank,
    &AMDGPU::VGPRRegBank,
};

AMDGPUGenRegisterBankInfo::AMDGPUGenRegisterBankInfo()
    : RegisterBankInfo(RegBanks, AMDGPU::NumRegisterBanks) {
  // Assert that RegBank indices match their ID's
#ifndef NDEBUG
  unsigned Index = 0;
  for (const auto &RB : RegBanks)
    assert(Index++ == RB->getID() && "Index != ID");
#endif // NDEBUG
}
} // end namespace llvm
#endif // GET_TARGET_REGBANK_IMPL
