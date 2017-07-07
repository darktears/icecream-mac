/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace Hexagon {
enum {
  ArchV4 = 0,
  ArchV5 = 1,
  ArchV55 = 2,
  ArchV60 = 3,
  ArchV62 = 4,
  ExtensionHVX = 5,
  ExtensionHVXDbl = 6,
  FeatureLongCalls = 7
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "hvx", "Hexagon HVX instructions", { Hexagon::ExtensionHVX }, { } },
  { "hvx-double", "Hexagon HVX Double instructions", { Hexagon::ExtensionHVXDbl }, { } },
  { "long-calls", "Use constant-extended calls", { Hexagon::FeatureLongCalls }, { } },
  { "v4", "Enable Hexagon V4 architecture", { Hexagon::ArchV4 }, { } },
  { "v5", "Enable Hexagon V5 architecture", { Hexagon::ArchV5 }, { } },
  { "v55", "Enable Hexagon V55 architecture", { Hexagon::ArchV55 }, { } },
  { "v60", "Enable Hexagon V60 architecture", { Hexagon::ArchV60 }, { } },
  { "v62", "Enable Hexagon V62 architecture", { Hexagon::ArchV62 }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv4", "Select the hexagonv4 processor", { Hexagon::ArchV4 }, { } },
  { "hexagonv5", "Select the hexagonv5 processor", { Hexagon::ArchV4, Hexagon::ArchV5 }, { } },
  { "hexagonv55", "Select the hexagonv55 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55 }, { } },
  { "hexagonv60", "Select the hexagonv60 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ExtensionHVX }, { } },
  { "hexagonv62", "Select the hexagonv62 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::ExtensionHVX }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV4FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV4"
namespace HexagonItinerariesV4Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV4Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-18
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-28
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29-32
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33-34
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-36
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37-39
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-43
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-51
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 52-53
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54-55
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-61
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62-63
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 64-65
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73-75
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-79
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80-81
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82-83
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84-86
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87-90
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91-92
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93-94
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95-96
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97-98
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99-100
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101-102
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-104
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105-106
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107-108
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109-110
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111-112
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  4,   2, // 1-2
  3,   2,   2, // 3-5
  3,   2,   2, // 6-8
  4,   2,   2, // 9-11
  3,   2,   2, // 12-14
  3,   2,   2, // 15-17
  4,   2,   2, // 18-20
  3,   2, // 21-22
  1,   1,   1, // 23-25
  3,   2, // 26-27
  3,   2,   2,   2, // 28-31
  3,   3,   2,   2, // 32-35
  3,   2,   2, // 36-38
  4,   2,   2, // 39-41
  4,   2, // 42-43
  3,   3,   2, // 44-46
  4,   1, // 47-48
  3,   2,   2, // 49-51
  4,   2,   2, // 52-54
  4,   2,   2, // 55-57
  3,   1,   1, // 58-60
  4,   1,   1, // 61-63
  4,   2,   1,   1, // 64-67
  4,   4,   1,   1,   2, // 68-72
  3,   1,   2, // 73-75
  2, // 76
  4,   1,   1, // 77-79
  4,   1,   1,   1, // 80-83
  4,   4,   1,   1,   1, // 84-88
  4,   4,   2,   2, // 89-92
  3,   2, // 93-94
  3,   2,   2, // 95-97
  3,   1,   1, // 98-100
  3,   1,   2, // 101-103
  3,   1, // 104-105
  3,   2,   2,   2, // 106-109
  4,   2, // 110-111
  3,   2,   2,   2, // 112-115
  2, // 116
  2,   1, // 117-118
  1,   1,   1, // 119-121
  1, // 122
  2, // 123
  4,   1, // 124-125
  4,   2, // 126-127
  4,   1,   1, // 128-130
  4,   1,   1,   1, // 131-134
  4,   1,   1,   1,   2, // 135-139
  4,   4,   1, // 140-142
  4,   1,   1, // 143-145
  4,   4,   1,   1, // 146-149
  2,   2, // 150-151
  1, // 152
  2,   1, // 153-154
  2, // 155
  2,   2, // 156-157
  3,   2, // 158-159
  2,   2, // 160-161
  2,   1, // 162-163
  3,   1, // 164-165
  2,   1, // 166-167
  1,   2, // 168-169
  2,   2, // 170-171
  2,   1, // 172-173
  2, // 174
  2,   2, // 175-176
  2,   1, // 177-178
  2, // 179
  3,   1,   2, // 180-182
  1,   1,   2, // 183-185
  3,   2,   2, // 186-188
  1,   2,   2, // 189-191
  1,   3,   2, // 192-194
  3,   2,   2, // 195-197
  3,   2, // 198-199
  1,   2, // 200-201
  4,   2, // 202-203
  4,   2,   1,   2, // 204-207
  4,   3,   2,   1,   2, // 208-212
  4,   3,   2,   1,   2,   2, // 213-218
  4,   1,   2, // 219-221
  4,   3,   1,   2, // 222-225
  4,   3,   1,   2,   2, // 226-230
  4,   2, // 231-232
  4,   1, // 233-234
  4,   3,   3,   1,   2, // 235-239
  1,   2,   2, // 240-242
  1,   2,   2, // 243-245
  4,   3,   2,   2, // 246-249
  4,   2,   1,   2,   2, // 250-254
  4,   3,   2, // 255-257
  4,   1,   2,   2, // 258-261
  4,   1,   1,   2, // 262-265
  4,   2,   2, // 266-268
  4,   2,   1,   1,   2, // 269-273
  4,   3,   1,   1,   2, // 274-278
  4,   2, // 279-280
  4,   2,   1, // 281-283
  4,   3,   1, // 284-286
  4,   2,   2,   2, // 287-290
  4,   2,   1,   2, // 291-294
  4,   1,   2, // 295-297
  3,   2,   2,   2, // 298-301
  4,   2,   2,   1, // 302-305
  4,   2,   2, // 306-308
  2,   2, // 309-310
  2,   3, // 311-312
  1,   1,   1, // 313-315
  4,   2,   2,   2, // 316-319
  4,   2,   2, // 320-322
  3,   2, // 323-324
  4,   1,   1, // 325-327
  4,   2,   2, // 328-330
  3,   2,   2,   2,   2, // 331-335
  2,   1,   2,   2, // 336-339
  3,   2,   1,   2,   2, // 340-344
  3,   3,   1,   2,   2, // 345-349
  2,   1,   2,   3, // 350-353
  3,   2,   1,   2,   3, // 354-358
  3,   3,   1,   2,   3, // 359-363
  1,   2,   2, // 364-366
  3,   1,   2,   2, // 367-370
  3,   1,   2,   2,   2, // 371-375
  1,   2,   3, // 376-378
  3,   1,   2,   3, // 379-382
  3,   1,   2,   2,   3, // 383-387
  4,   1,   1, // 388-390
  3,   2, // 391-392
  2,   2,   2, // 393-395
  2,   1,   1,   2,   2, // 396-400
  3,   2,   2, // 401-403
  3,   1,   1,   2,   2, // 404-408
  2,   2,   3, // 409-411
  2,   1,   1,   2,   3, // 412-416
  3,   2,   3, // 417-419
  3,   1,   1,   2,   3, // 420-424
  1,   2,   2, // 425-427
  2,   1,   2,   2, // 428-431
  3,   1,   2,   2, // 432-435
  1,   1,   2,   2, // 436-439
  1,   2,   2,   2, // 440-443
  1,   1,   2,   3, // 444-447
  1,   2,   2,   3, // 448-451
  4,   1,   1,   2, // 452-455
  4,   2,   1,   1,   2, // 456-460
  4,   2, // 461-462
  3,   2,   2, // 463-465
  4,   2,   2,   2, // 466-469
  3,   2, // 470-471
  3,   2,   2, // 472-474
  3,   2, // 475-476
  3, // 477
  3, // 478
  1,   2, // 479-480
  2, // 481
  1,   2, // 482-483
  1,   1,   1, // 484-486
  1, // 487
  1, // 488
  1,   2, // 489-490
  1, // 491
  1,   1, // 492-493
  1, // 494
  4,   2, // 495-496
  3,   2,   2, // 497-499
  3,   2,   2, // 500-502
  4,   2,   2, // 503-505
  4,   2,   2, // 506-508
  3,   2,   2, // 509-511
  4,   2,   2, // 512-514
  3,   2, // 515-516
  1,   1,   1, // 517-519
  3,   2, // 520-521
  3,   2,   2,   2, // 522-525
  3,   3,   2,   2, // 526-529
  3,   2,   2, // 530-532
  3,   2,   2, // 533-535
  4,   2, // 536-537
  3,   3,   2, // 538-540
  4,   1, // 541-542
  3,   2,   2, // 543-545
  4,   2,   2, // 546-548
  3,   2,   2, // 549-551
  3,   1,   1, // 552-554
  4,   1,   1, // 555-557
  4,   2,   1,   1, // 558-561
  4,   4,   1,   1,   2, // 562-566
  3,   1,   2, // 567-569
  2, // 570
  4,   1,   1, // 571-573
  4,   1,   1,   2, // 574-577
  4,   4,   1,   1,   1, // 578-582
  4,   4,   2,   2, // 583-586
  3,   2, // 587-588
  3,   2,   2, // 589-591
  3,   1,   1, // 592-594
  3,   1,   2, // 595-597
  3,   1, // 598-599
  3,   2,   2,   2, // 600-603
  4,   2, // 604-605
  3,   2,   2,   2, // 606-609
  2, // 610
  3,   1, // 611-612
  1,   1,   1, // 613-615
  1, // 616
  2, // 617
  5,   1, // 618-619
  4,   2, // 620-621
  5,   1,   1, // 622-624
  5,   2,   1,   1, // 625-628
  5,   2,   1,   1,   2, // 629-633
  5,   5,   1, // 634-636
  4,   2,   2, // 637-639
  5,   5,   1,   1, // 640-643
  2,   2, // 644-645
  1, // 646
  2,   1, // 647-648
  2, // 649
  2,   2, // 650-651
  3,   2, // 652-653
  2,   2, // 654-655
  2,   1, // 656-657
  3,   1, // 658-659
  2,   1, // 660-661
  1,   2, // 662-663
  2,   2, // 664-665
  2,   1, // 666-667
  2, // 668
  2,   2, // 669-670
  2,   1, // 671-672
  2, // 673
  3,   2,   2, // 674-676
  1,   1,   2, // 677-679
  3,   2,   2, // 680-682
  1,   2,   2, // 683-685
  2,   3,   2, // 686-688
  3,   2,   2, // 689-691
  3,   2, // 692-693
  1,   2, // 694-695
  4,   2, // 696-697
  4,   2,   1,   2, // 698-701
  4,   3,   2,   1,   2, // 702-706
  4,   3,   2,   1,   2,   2, // 707-712
  4,   1,   2, // 713-715
  4,   3,   1,   2, // 716-719
  4,   3,   1,   2,   2, // 720-724
  4,   2, // 725-726
  4,   1, // 727-728
  4,   3,   3,   1,   2, // 729-733
  1,   2,   2, // 734-736
  1,   2,   2, // 737-739
  4,   3,   2,   2, // 740-743
  4,   2,   1,   2,   2, // 744-748
  4,   3,   2, // 749-751
  4,   1,   2,   2, // 752-755
  4,   1,   1,   2, // 756-759
  4,   2,   2, // 760-762
  4,   2,   1,   1,   2, // 763-767
  4,   3,   1,   1,   2, // 768-772
  3,   2, // 773-774
  3,   2,   2, // 775-777
  3,   3,   2, // 778-780
  4,   2,   2,   2, // 781-784
  4,   2,   1,   2, // 785-788
  4,   1,   2, // 789-791
  4,   2,   2,   2, // 792-795
  4,   2,   2,   1, // 796-799
  4,   2,   2, // 800-802
  2,   2, // 803-804
  2,   3, // 805-806
  9,   1,   2, // 807-809
  9,   1,   2, // 810-812
  1,   1,   1, // 813-815
  9,   2,   7, // 816-818
  1,   2,   7, // 819-821
  1,   2,   5, // 822-824
  9,   2,   7,   7, // 825-828
  4,   2,   2,   2, // 829-832
  4,   2,   2, // 833-835
  4,   2, // 836-837
  4,   1,   1, // 838-840
  4,   2,   2, // 841-843
  4,   2,   2,   2,   2, // 844-848
  2,   1,   2,   2, // 849-852
  3,   2,   1,   2,   2, // 853-857
  3,   3,   1,   2,   2, // 858-862
  2,   1,   2,   3, // 863-866
  3,   2,   1,   2,   3, // 867-871
  3,   3,   1,   2,   3, // 872-876
  1,   2,   2, // 877-879
  3,   1,   2,   2, // 880-883
  3,   1,   2,   2,   2, // 884-888
  1,   2,   3, // 889-891
  3,   1,   2,   3, // 892-895
  3,   1,   2,   2,   3, // 896-900
  4,   1,   1, // 901-903
  4,   2, // 904-905
  2,   2,   2, // 906-908
  2,   1,   1,   2,   2, // 909-913
  3,   2,   2, // 914-916
  3,   1,   1,   2,   2, // 917-921
  2,   2,   3, // 922-924
  2,   1,   1,   2,   3, // 925-929
  3,   2,   3, // 930-932
  3,   1,   1,   2,   3, // 933-937
  1,   2,   2, // 938-940
  2,   1,   2,   2, // 941-944
  3,   1,   2,   2, // 945-948
  1,   1,   2,   2, // 949-952
  1,   2,   2,   2, // 953-956
  1,   1,   2,   3, // 957-960
  1,   2,   2,   3, // 961-964
  4,   1,   1,   2, // 965-968
  4,   2,   1,   1,   2, // 969-973
  4,   2, // 974-975
  3,   2,   2, // 976-978
  4,   2,   2,   2, // 979-982
  3,   2, // 983-984
  3,   2,   2, // 985-987
  3,   2, // 988-989
  3, // 990
  3, // 991
  1,   2, // 992-993
  2, // 994
  1,   2, // 995-996
  1,   1,   1, // 997-999
  4,   7,   1, // 1000-1002
  9,   7,   7,   7, // 1003-1006
  9,   2, // 1007-1008
  9,   7,   7, // 1009-1011
  9,   7, // 1012-1013
  9,   2, // 1014-1015
  9,   3,   1,   2, // 1016-1019
  9,   2,   1,   2, // 1020-1023
  9,   3,   2,   1,   2, // 1024-1028
  9,   3,   1,   2, // 1029-1032
  9,   1,   2, // 1033-1035
  9,   2,   1,   2, // 1036-1039
  9,   3,   2,   1,   2, // 1040-1044
  9,   3,   1,   2, // 1045-1048
  2,   1,   2,   5, // 1049-1052
  3,   2,   1,   2,   5, // 1053-1057
  3,   1,   2,   5, // 1058-1061
  1,   2,   5, // 1062-1064
  2,   1,   2,   5, // 1065-1068
  3,   2,   1,   2,   5, // 1069-1073
  3,   1,   2,   5, // 1074-1077
  2,   1,   2,   7, // 1078-1081
  3,   2,   1,   2,   7, // 1082-1086
  7,   1,   2,   7, // 1087-1090
  3,   7,   1,   2,   7, // 1091-1095
  3,   1,   2,   7, // 1096-1099
  9,   5,   5, // 1100-1102
  9,   7,   7, // 1103-1105
  9,   7,   7,   7, // 1106-1109
  9,   9,   7,   7,   7, // 1110-1114
  9,   5,   5, // 1115-1117
  9,   5,   5, // 1118-1120
  9,   7,   5,   5, // 1121-1124
  9,   5,   5,   2, // 1125-1128
  9,   7,   2, // 1129-1131
  9,   7,   7,   2, // 1132-1135
  9,   5,   2, // 1136-1138
  9,   7,   5,   2, // 1139-1142
  9,   5,   5,   2, // 1143-1146
  9,   5, // 1147-1148
  9,   9,   5,   5,   2, // 1149-1153
  9,   5, // 1154-1155
  9,   5,   5, // 1156-1158
  9,   5,   5,   2, // 1159-1162
  9,   5,   2, // 1163-1165
  9,   7,   5,   2, // 1166-1169
  9,   5,   2, // 1170-1172
  9,   7,   5,   2, // 1173-1176
  3, // 1177
  9,   7,   5,   5,   2, // 1178-1182
  9,   5,   2,   2, // 1183-1186
  9,   7,   5,   2,   2, // 1187-1191
  9,   5,   2, // 1192-1194
  9,   5,   5, // 1195-1197
  9,   7, // 1198-1199
  9,   7,   7,   7, // 1200-1203
  9,   5, // 1204-1205
  9,   7,   5, // 1206-1208
  2, // 1209
  3,   2, // 1210-1211
  1, // 1212
  1, // 1213
  1,   2, // 1214-1215
  1, // 1216
  1,   1, // 1217-1218
  1, // 1219
  4,   2, // 1220-1221
  3,   2,   2, // 1222-1224
  4,   2,   2, // 1225-1227
  4,   2,   2, // 1228-1230
  4,   2,   2, // 1231-1233
  3,   2,   2, // 1234-1236
  4,   2,   2, // 1237-1239
  3,   2, // 1240-1241
  1,   1,   1, // 1242-1244
  3,   2, // 1245-1246
  3,   2,   2,   2, // 1247-1250
  3,   3,   2,   2, // 1251-1254
  3,   2,   2, // 1255-1257
  3,   2,   2, // 1258-1260
  4,   2, // 1261-1262
  3,   3,   2, // 1263-1265
  4,   1, // 1266-1267
  3,   2,   2, // 1268-1270
  4,   2,   2, // 1271-1273
  3,   2,   2, // 1274-1276
  3,   1,   1, // 1277-1279
  4,   1,   1, // 1280-1282
  4,   2,   1,   1, // 1283-1286
  3,   4,   2,   2,   2, // 1287-1291
  3,   1,   2, // 1292-1294
  2, // 1295
  4,   1,   1, // 1296-1298
  4,   1,   1,   2, // 1299-1302
  4,   4,   2,   1,   1, // 1303-1307
  4,   4,   2,   2, // 1308-1311
  3,   2, // 1312-1313
  3,   2,   2, // 1314-1316
  3,   1,   1, // 1317-1319
  3,   1,   2, // 1320-1322
  3,   1, // 1323-1324
  3,   2,   2,   2, // 1325-1328
  4,   2, // 1329-1330
  3,   2,   2,   2, // 1331-1334
  2, // 1335
  3,   1, // 1336-1337
  1,   1,   1, // 1338-1340
  1, // 1341
  2, // 1342
  5,   1, // 1343-1344
  4,   2, // 1345-1346
  5,   1,   1, // 1347-1349
  5,   2,   1,   1, // 1350-1353
  5,   2,   1,   1,   2, // 1354-1358
  5,   5,   1, // 1359-1361
  4,   2,   2, // 1362-1364
  5,   5,   1,   1, // 1365-1368
  2,   2, // 1369-1370
  1, // 1371
  2,   1, // 1372-1373
  2, // 1374
  2,   2, // 1375-1376
  3,   2, // 1377-1378
  2,   2, // 1379-1380
  2,   1, // 1381-1382
  3,   1, // 1383-1384
  2,   1, // 1385-1386
  1,   2, // 1387-1388
  2,   2, // 1389-1390
  2,   1, // 1391-1392
  2, // 1393
  2,   2, // 1394-1395
  2,   1, // 1396-1397
  2, // 1398
  3,   2,   2, // 1399-1401
  1,   1,   2, // 1402-1404
  3,   2,   2, // 1405-1407
  1,   2,   2, // 1408-1410
  2,   3,   2, // 1411-1413
  3,   2,   2, // 1414-1416
  3,   2, // 1417-1418
  1,   2, // 1419-1420
  4,   2, // 1421-1422
  4,   2,   1,   2, // 1423-1426
  4,   3,   2,   1,   2, // 1427-1431
  4,   3,   2,   1,   2,   2, // 1432-1437
  4,   1,   2, // 1438-1440
  4,   3,   1,   2, // 1441-1444
  4,   3,   1,   2,   2, // 1445-1449
  4,   2, // 1450-1451
  4,   1, // 1452-1453
  4,   3,   3,   1,   2, // 1454-1458
  1,   2,   2, // 1459-1461
  1,   2,   2, // 1462-1464
  4,   3,   2,   2, // 1465-1468
  4,   2,   1,   2,   2, // 1469-1473
  4,   3,   2, // 1474-1476
  4,   1,   2,   2, // 1477-1480
  4,   1,   1,   2, // 1481-1484
  4,   2,   2, // 1485-1487
  4,   2,   1,   1,   2, // 1488-1492
  4,   3,   1,   1,   2, // 1493-1497
  3,   2, // 1498-1499
  3,   2,   2, // 1500-1502
  3,   3,   2, // 1503-1505
  4,   2,   2,   2, // 1506-1509
  4,   2,   1,   2, // 1510-1513
  4,   1,   2, // 1514-1516
  4,   2,   2,   2, // 1517-1520
  4,   2,   2,   1, // 1521-1524
  4,   2,   2, // 1525-1527
  2,   2, // 1528-1529
  2,   3, // 1530-1531
  9,   1,   2, // 1532-1534
  9,   1,   2, // 1535-1537
  1,   1,   1, // 1538-1540
  9,   2,   7, // 1541-1543
  1,   2,   7, // 1544-1546
  1,   2,   5, // 1547-1549
  9,   2,   7,   7, // 1550-1553
  4,   2,   2,   2, // 1554-1557
  4,   2,   2, // 1558-1560
  4,   2, // 1561-1562
  4,   1,   1, // 1563-1565
  4,   2,   2, // 1566-1568
  4,   2,   2,   2,   2, // 1569-1573
  2,   1,   2,   2, // 1574-1577
  3,   2,   1,   2,   2, // 1578-1582
  3,   3,   1,   2,   2, // 1583-1587
  2,   1,   2,   3, // 1588-1591
  3,   2,   1,   2,   3, // 1592-1596
  3,   3,   1,   2,   3, // 1597-1601
  1,   2,   2, // 1602-1604
  3,   1,   2,   2, // 1605-1608
  3,   1,   2,   2,   2, // 1609-1613
  1,   2,   3, // 1614-1616
  3,   1,   2,   3, // 1617-1620
  3,   1,   2,   2,   3, // 1621-1625
  4,   1,   1, // 1626-1628
  4,   2, // 1629-1630
  2,   2,   2, // 1631-1633
  2,   1,   1,   2,   2, // 1634-1638
  3,   2,   2, // 1639-1641
  3,   1,   1,   2,   2, // 1642-1646
  2,   2,   3, // 1647-1649
  2,   1,   1,   2,   3, // 1650-1654
  3,   2,   3, // 1655-1657
  3,   1,   1,   2,   3, // 1658-1662
  1,   2,   2, // 1663-1665
  2,   1,   2,   2, // 1666-1669
  3,   1,   2,   2, // 1670-1673
  1,   1,   2,   2, // 1674-1677
  1,   2,   2,   2, // 1678-1681
  1,   1,   2,   3, // 1682-1685
  1,   2,   2,   3, // 1686-1689
  4,   1,   1,   2, // 1690-1693
  4,   2,   1,   1,   2, // 1694-1698
  4,   2, // 1699-1700
  3,   2,   2, // 1701-1703
  4,   2,   2,   2, // 1704-1707
  3,   2, // 1708-1709
  3,   2,   2, // 1710-1712
  3,   2, // 1713-1714
  3, // 1715
  3, // 1716
  1,   2, // 1717-1718
  2, // 1719
  1,   2, // 1720-1721
  1,   1,   1, // 1722-1724
  4,   7,   1, // 1725-1727
  9,   7,   7,   7, // 1728-1731
  9,   2, // 1732-1733
  9,   7,   7, // 1734-1736
  9,   7, // 1737-1738
  9,   2, // 1739-1740
  9,   3,   1,   2, // 1741-1744
  9,   2,   1,   2, // 1745-1748
  9,   3,   2,   1,   2, // 1749-1753
  9,   3,   1,   2, // 1754-1757
  9,   1,   2, // 1758-1760
  9,   2,   1,   2, // 1761-1764
  9,   3,   2,   1,   2, // 1765-1769
  9,   3,   1,   2, // 1770-1773
  2,   1,   2,   5, // 1774-1777
  3,   2,   1,   2,   5, // 1778-1782
  3,   1,   2,   5, // 1783-1786
  1,   2,   5, // 1787-1789
  2,   1,   2,   5, // 1790-1793
  3,   2,   1,   2,   5, // 1794-1798
  3,   1,   2,   5, // 1799-1802
  2,   1,   2,   7, // 1803-1806
  3,   2,   1,   2,   7, // 1807-1811
  7,   1,   2,   7, // 1812-1815
  3,   7,   1,   2,   7, // 1816-1820
  3,   1,   2,   7, // 1821-1824
  9,   5,   5, // 1825-1827
  9,   7,   7, // 1828-1830
  9,   7,   7,   7, // 1831-1834
  9,   9,   7,   7,   7, // 1835-1839
  9,   5,   5, // 1840-1842
  9,   5,   5, // 1843-1845
  9,   7,   5,   5, // 1846-1849
  9,   5,   5,   2, // 1850-1853
  9,   7,   2, // 1854-1856
  9,   7,   7,   2, // 1857-1860
  9,   5,   2, // 1861-1863
  9,   7,   5,   2, // 1864-1867
  9,   5,   5,   2, // 1868-1871
  9,   5, // 1872-1873
  9,   9,   5,   5,   2, // 1874-1878
  9,   5, // 1879-1880
  9,   5,   5, // 1881-1883
  9,   5,   5,   2, // 1884-1887
  9,   5,   2, // 1888-1890
  9,   7,   5,   2, // 1891-1894
  9,   5,   2, // 1895-1897
  9,   7,   5,   2, // 1898-1901
  3, // 1902
  9,   7,   5,   5,   2, // 1903-1907
  9,   5,   2,   2, // 1908-1911
  9,   7,   5,   2,   2, // 1912-1916
  9,   5,   2, // 1917-1919
  9,   7,   7, // 1920-1922
  9,   7, // 1923-1924
  9,   7,   7,   7, // 1925-1928
  9,   5, // 1929-1930
  9,   7,   5, // 1931-1933
  2, // 1934
  3,   2, // 1935-1936
  1, // 1937
  1, // 1938
  1,   2, // 1939-1940
  1, // 1941
  1,   1, // 1942-1943
  1, // 1944
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1-2
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 3-5
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 6-8
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 9-11
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 12-14
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 15-17
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 18-20
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 21-22
 0,  0,  0, // 23-25
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 26-27
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 28-31
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 32-35
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 36-38
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 39-41
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 42-43
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 44-46
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 47-48
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 49-51
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 52-54
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 55-57
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 58-60
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 61-63
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 64-67
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 68-72
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 73-75
HexagonItinerariesV55Bypass::Hex_FWD, // 76
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 77-79
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 80-83
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 84-88
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 89-92
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 93-94
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 95-97
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 98-100
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 101-103
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 104-105
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 106-109
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 110-111
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 112-115
HexagonItinerariesV55Bypass::Hex_FWD, // 116
 0,  0, // 117-118
 0,  0,  0, // 119-121
HexagonItinerariesV55Bypass::Hex_FWD, // 122
 0, // 123
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 124-125
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 126-127
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 128-130
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 131-134
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 135-139
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 140-142
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 143-145
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 146-149
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 150-151
HexagonItinerariesV55Bypass::Hex_FWD, // 152
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 153-154
HexagonItinerariesV55Bypass::Hex_FWD, // 155
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 156-157
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 158-159
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 160-161
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 162-163
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 164-165
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 166-167
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 168-169
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 170-171
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 172-173
HexagonItinerariesV55Bypass::Hex_FWD, // 174
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 175-176
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 177-178
HexagonItinerariesV55Bypass::Hex_FWD, // 179
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 180-182
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 183-185
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 186-188
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 189-191
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 192-194
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 195-197
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 198-199
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 200-201
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 202-203
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 204-207
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 208-212
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 213-218
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 219-221
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 222-225
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 226-230
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 231-232
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 233-234
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 235-239
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 240-242
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 243-245
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 246-249
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 250-254
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 255-257
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 258-261
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 262-265
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 266-268
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 269-273
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 274-278
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 279-280
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 281-283
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 284-286
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 287-290
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 291-294
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 295-297
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 298-301
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 302-305
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 306-308
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 309-310
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 311-312
 0,  0,  0, // 313-315
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 316-319
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 320-322
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 323-324
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 325-327
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 328-330
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 331-335
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 336-339
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 340-344
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 345-349
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 350-353
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 354-358
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 359-363
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 364-366
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 367-370
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 371-375
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 376-378
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 379-382
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 383-387
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 388-390
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 391-392
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 393-395
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 396-400
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 401-403
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 404-408
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 409-411
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 412-416
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 417-419
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 420-424
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 425-427
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 428-431
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 432-435
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 436-439
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 440-443
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 444-447
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 448-451
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 452-455
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 456-460
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 461-462
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 463-465
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 466-469
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 470-471
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 472-474
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 475-476
HexagonItinerariesV55Bypass::Hex_FWD, // 477
HexagonItinerariesV55Bypass::Hex_FWD, // 478
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 479-480
HexagonItinerariesV55Bypass::Hex_FWD, // 481
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 482-483
 0,  0,  0, // 484-486
HexagonItinerariesV55Bypass::Hex_FWD, // 487
HexagonItinerariesV55Bypass::Hex_FWD, // 488
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 489-490
HexagonItinerariesV55Bypass::Hex_FWD, // 491
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 492-493
HexagonItinerariesV55Bypass::Hex_FWD, // 494
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 495-496
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 497-499
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 500-502
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 503-505
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 506-508
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 509-511
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 512-514
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 515-516
 0,  0,  0, // 517-519
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 520-521
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 522-525
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 526-529
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 530-532
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 533-535
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 536-537
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 538-540
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 541-542
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 543-545
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 546-548
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 549-551
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 552-554
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 555-557
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 558-561
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 562-566
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 567-569
HexagonItinerariesV60Bypass::Hex_FWD, // 570
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 571-573
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 574-577
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 578-582
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 583-586
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 587-588
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 589-591
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 592-594
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 595-597
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 598-599
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 600-603
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 604-605
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 606-609
HexagonItinerariesV60Bypass::Hex_FWD, // 610
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 611-612
 0,  0,  0, // 613-615
HexagonItinerariesV60Bypass::Hex_FWD, // 616
 0, // 617
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 618-619
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 620-621
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 622-624
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 625-628
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 629-633
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 634-636
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 637-639
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 640-643
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 644-645
HexagonItinerariesV60Bypass::Hex_FWD, // 646
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 647-648
HexagonItinerariesV60Bypass::Hex_FWD, // 649
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 650-651
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 652-653
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 654-655
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 656-657
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 658-659
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 660-661
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 662-663
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 664-665
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 666-667
HexagonItinerariesV60Bypass::Hex_FWD, // 668
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 669-670
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 671-672
HexagonItinerariesV60Bypass::Hex_FWD, // 673
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 674-676
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 677-679
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 680-682
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 683-685
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 686-688
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 689-691
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 692-693
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 694-695
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 696-697
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 698-701
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 702-706
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 707-712
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 713-715
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 716-719
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 720-724
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 725-726
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 727-728
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 729-733
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 734-736
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 737-739
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 740-743
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 744-748
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 749-751
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 752-755
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 756-759
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 760-762
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 763-767
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 768-772
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 773-774
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 775-777
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 778-780
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 781-784
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 785-788
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 789-791
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 792-795
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 796-799
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 800-802
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 803-804
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 805-806
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 807-809
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 810-812
 0,  0,  0, // 813-815
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 816-818
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 819-821
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 822-824
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 825-828
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 829-832
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 833-835
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 836-837
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 838-840
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 841-843
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 844-848
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 849-852
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 853-857
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 858-862
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 863-866
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 867-871
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 872-876
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 877-879
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 880-883
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 884-888
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 889-891
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 892-895
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 896-900
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 901-903
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 904-905
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 906-908
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 909-913
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 914-916
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 917-921
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 922-924
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 925-929
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 930-932
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 933-937
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 938-940
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 941-944
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 945-948
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 949-952
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 953-956
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 957-960
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 961-964
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 965-968
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 969-973
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 974-975
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 976-978
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 979-982
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 983-984
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 985-987
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 988-989
HexagonItinerariesV60Bypass::Hex_FWD, // 990
HexagonItinerariesV60Bypass::Hex_FWD, // 991
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 992-993
HexagonItinerariesV60Bypass::Hex_FWD, // 994
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 995-996
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 997-999
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1000-1002
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 1003-1006
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1007-1008
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1009-1011
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1012-1013
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1014-1015
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1016-1019
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1020-1023
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1024-1028
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1029-1032
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1033-1035
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1036-1039
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1040-1044
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1045-1048
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1049-1052
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1053-1057
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1058-1061
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1062-1064
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1065-1068
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1069-1073
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1074-1077
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1078-1081
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1082-1086
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1087-1090
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1091-1095
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1096-1099
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1100-1102
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1103-1105
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1106-1109
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1110-1114
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1115-1117
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1118-1120
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1121-1124
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1125-1128
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1129-1131
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1132-1135
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1136-1138
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1139-1142
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1143-1146
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1147-1148
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1149-1153
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1154-1155
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1156-1158
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1159-1162
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1163-1165
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1166-1169
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1170-1172
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1173-1176
HexagonItinerariesV60Bypass::HVX_FWD, // 1177
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1178-1182
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1183-1186
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1187-1191
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1192-1194
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1195-1197
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1198-1199
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1200-1203
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1204-1205
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1206-1208
HexagonItinerariesV60Bypass::Hex_FWD, // 1209
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1210-1211
HexagonItinerariesV60Bypass::Hex_FWD, // 1212
HexagonItinerariesV60Bypass::Hex_FWD, // 1213
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1214-1215
HexagonItinerariesV60Bypass::Hex_FWD, // 1216
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1217-1218
HexagonItinerariesV60Bypass::Hex_FWD, // 1219
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1220-1221
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1222-1224
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1225-1227
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1228-1230
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1231-1233
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1234-1236
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1237-1239
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1240-1241
 0,  0,  0, // 1242-1244
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1245-1246
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1247-1250
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1251-1254
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1255-1257
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1258-1260
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1261-1262
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1263-1265
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1266-1267
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1268-1270
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1271-1273
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1274-1276
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1277-1279
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1280-1282
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1283-1286
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1287-1291
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1292-1294
HexagonItinerariesV62Bypass::Hex_FWD, // 1295
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1296-1298
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1299-1302
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1303-1307
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1308-1311
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1312-1313
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1314-1316
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1317-1319
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1320-1322
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1323-1324
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1325-1328
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1329-1330
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1331-1334
HexagonItinerariesV62Bypass::Hex_FWD, // 1335
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1336-1337
 0,  0,  0, // 1338-1340
HexagonItinerariesV62Bypass::Hex_FWD, // 1341
 0, // 1342
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1343-1344
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1345-1346
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1347-1349
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1350-1353
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1354-1358
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1359-1361
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1362-1364
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1365-1368
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1369-1370
HexagonItinerariesV62Bypass::Hex_FWD, // 1371
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1372-1373
HexagonItinerariesV62Bypass::Hex_FWD, // 1374
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1375-1376
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1377-1378
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1379-1380
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1381-1382
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1383-1384
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1385-1386
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1387-1388
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1389-1390
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1391-1392
HexagonItinerariesV62Bypass::Hex_FWD, // 1393
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1394-1395
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1396-1397
HexagonItinerariesV62Bypass::Hex_FWD, // 1398
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1399-1401
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1402-1404
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1405-1407
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1408-1410
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1411-1413
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1414-1416
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1417-1418
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1419-1420
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1421-1422
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1423-1426
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1427-1431
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1432-1437
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1438-1440
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1441-1444
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1445-1449
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1450-1451
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1452-1453
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1454-1458
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1459-1461
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1462-1464
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1465-1468
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1469-1473
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1474-1476
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1477-1480
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1481-1484
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1485-1487
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1488-1492
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1493-1497
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1498-1499
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1500-1502
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1503-1505
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1506-1509
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1510-1513
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1514-1516
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1517-1520
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1521-1524
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1525-1527
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1528-1529
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1530-1531
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1532-1534
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1535-1537
 0,  0,  0, // 1538-1540
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1541-1543
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1544-1546
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1547-1549
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1550-1553
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1554-1557
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1558-1560
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1561-1562
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1563-1565
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1566-1568
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1569-1573
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1574-1577
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1578-1582
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1583-1587
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1588-1591
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1592-1596
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1597-1601
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1602-1604
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1605-1608
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1609-1613
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1614-1616
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1617-1620
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1621-1625
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1626-1628
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1629-1630
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1631-1633
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1634-1638
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1639-1641
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1642-1646
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1647-1649
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1650-1654
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1655-1657
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1658-1662
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1663-1665
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1666-1669
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1670-1673
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1674-1677
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1678-1681
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1682-1685
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1686-1689
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1690-1693
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1694-1698
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1699-1700
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1701-1703
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1704-1707
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1708-1709
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1710-1712
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1713-1714
HexagonItinerariesV62Bypass::Hex_FWD, // 1715
HexagonItinerariesV62Bypass::Hex_FWD, // 1716
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1717-1718
HexagonItinerariesV62Bypass::Hex_FWD, // 1719
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1720-1721
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1722-1724
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1725-1727
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1728-1731
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1732-1733
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1734-1736
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1737-1738
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1739-1740
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1741-1744
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1745-1748
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1749-1753
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1754-1757
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1758-1760
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1761-1764
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1765-1769
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1770-1773
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1774-1777
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1778-1782
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1783-1786
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1787-1789
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1790-1793
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1794-1798
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1799-1802
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1803-1806
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1807-1811
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1812-1815
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1816-1820
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1821-1824
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1825-1827
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1828-1830
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1831-1834
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1835-1839
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1840-1842
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1843-1845
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1846-1849
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1850-1853
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1854-1856
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1857-1860
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1861-1863
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1864-1867
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1868-1871
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1872-1873
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1874-1878
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1879-1880
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1881-1883
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1884-1887
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1888-1890
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1891-1894
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1895-1897
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1898-1901
HexagonItinerariesV62Bypass::HVX_FWD, // 1902
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1903-1907
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1908-1911
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1912-1916
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1917-1919
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1920-1922
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1923-1924
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1925-1928
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1929-1930
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1931-1933
HexagonItinerariesV62Bypass::Hex_FWD, // 1934
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1935-1936
HexagonItinerariesV62Bypass::Hex_FWD, // 1937
HexagonItinerariesV62Bypass::Hex_FWD, // 1938
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1939-1940
HexagonItinerariesV62Bypass::Hex_FWD, // 1941
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1942-1943
HexagonItinerariesV62Bypass::Hex_FWD, // 1944
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 tc_94e6ffd9
  { 1, 2, 3, 0, 0 }, // 2 tc_548f402d
  { 1, 1, 2, 0, 0 }, // 3 tc_bd16579e
  { 1, 1, 2, 0, 0 }, // 4 tc_47ab9233
  { 1, 1, 2, 0, 0 }, // 5 tc_7ca2ea10
  { 1, 1, 2, 0, 0 }, // 6 tc_9c18c9a5
  { 1, 2, 3, 0, 0 }, // 7 tc_b0f50e3c
  { 1, 2, 3, 0, 0 }, // 8 tc_f16d5b17
  { 1, 2, 3, 0, 0 }, // 9 PSEUDO
  { 1, 1, 2, 0, 0 }, // 10 tc_b86c7e8b
  { 1, 2, 3, 0, 0 }, // 11 tc_e2c31426
  { 1, 2, 3, 0, 0 }, // 12 tc_1b6011fb
  { 1, 2, 3, 0, 0 }, // 13 tc_28d296df
  { 1, 2, 3, 0, 0 }, // 14 tc_511f28f6
  { 1, 2, 3, 0, 0 }, // 15 tc_76c4c5ef
  { 1, 3, 4, 0, 0 }, // 16 tc_3b4892c6
  { 1, 2, 3, 0, 0 }, // 17 tc_b08be45e
  { 1, 3, 4, 0, 0 }, // 18 tc_82f0f122
  { 1, 1, 2, 0, 0 }, // 19 tc_cd321066
  { 1, 1, 2, 0, 0 }, // 20 tc_63cd9d2d
  { 1, 1, 2, 0, 0 }, // 21 tc_37326008
  { 1, 1, 2, 0, 0 }, // 22 tc_c58f771a
  { 1, 1, 2, 0, 0 }, // 23 tc_8c8041e6
  { 1, 1, 2, 0, 0 }, // 24 tc_8cb685d9
  { 1, 1, 2, 0, 0 }, // 25 tc_a87879e8
  { 1, 1, 2, 0, 0 }, // 26 tc_5fa2857c
  { 1, 2, 3, 0, 0 }, // 27 tc_9a13af9d
  { 1, 1, 2, 0, 0 }, // 28 tc_e2c08bb4
  { 1, 1, 2, 0, 0 }, // 29 tc_2aaab1e0
  { 1, 1, 2, 0, 0 }, // 30 tc_ae0722f7
  { 1, 1, 2, 0, 0 }, // 31 tc_583510c7
  { 1, 1, 2, 0, 0 }, // 32 tc_81a23d44
  { 1, 1, 2, 0, 0 }, // 33 tc_d63b71d1
  { 1, 2, 3, 0, 0 }, // 34 tc_5fe9fcd0
  { 1, 2, 3, 0, 0 }, // 35 tc_9df8b0dc
  { 1, 1, 2, 0, 0 }, // 36 tc_47f0b7ad
  { 1, 1, 2, 0, 0 }, // 37 tc_d1b5a4b6
  { 1, 3, 4, 0, 0 }, // 38 tc_1fe8323c
  { 1, 1, 2, 0, 0 }, // 39 tc_43068634
  { 1, 1, 2, 0, 0 }, // 40 tc_639d93ee
  { 1, 4, 5, 0, 0 }, // 41 LD_tc_ld_SLOT01
  { 1, 5, 6, 0, 0 }, // 42 DUPLEX
  { 1, 6, 7, 0, 0 }, // 43 tc_b08b653e
  { 1, 7, 8, 0, 0 }, // 44 tc_ENDLOOP
  { 1, 1, 2, 0, 0 }, // 45 tc_e836c161
  { 1, 1, 2, 0, 0 }, // 46 tc_485bb57c
  { 1, 1, 2, 0, 0 }, // 47 tc_3bea1824
  { 1, 1, 2, 0, 0 }, // 48 tc_2d1e6f5c
  { 1, 1, 2, 0, 0 }, // 49 tc_2e55aa16
  { 1, 1, 2, 0, 0 }, // 50 tc_f1aa2cdb
  { 1, 1, 2, 0, 0 }, // 51 tc_f1240c08
  { 1, 1, 2, 0, 0 }, // 52 tc_09c86199
  { 1, 1, 2, 0, 0 }, // 53 tc_0767081f
  { 1, 6, 7, 0, 0 }, // 54 tc_ecfaae86
  { 1, 6, 7, 0, 0 }, // 55 tc_84630363
  { 1, 2, 3, 0, 0 }, // 56 tc_aad55963
  { 1, 1, 2, 0, 0 }, // 57 tc_a333d2a9
  { 1, 1, 2, 0, 0 }, // 58 tc_1b834fe7
  { 1, 1, 2, 0, 0 }, // 59 tc_537e2013
  { 1, 1, 2, 0, 0 }, // 60 tc_b5bfaa60
  { 1, 6, 7, 0, 0 }, // 61 tc_07ac815d
  { 1, 6, 7, 0, 0 }, // 62 tc_1f9668cc
  { 1, 6, 7, 0, 0 }, // 63 tc_a1fb80e1
  { 1, 3, 4, 0, 0 }, // 64 tc_b324366f
  { 1, 3, 4, 0, 0 }, // 65 tc_1000eb10
  { 1, 3, 4, 0, 0 }, // 66 tc_f055fbb6
  { 1, 6, 7, 0, 0 }, // 67 tc_b189ad4c
  { 1, 3, 4, 0, 0 }, // 68 tc_feb4974b
  { 1, 3, 4, 0, 0 }, // 69 tc_d6a805a8
  { 1, 6, 7, 0, 0 }, // 70 tc_cbe45117
  { 1, 5, 6, 0, 0 }, // 71 tc_580a779c
  { 1, 1, 2, 0, 0 }, // 72 tc_92d1833c
  { 1, 5, 6, 0, 0 }, // 73 tc_09faec3b
  { 1, 1, 2, 0, 0 }, // 74 tc_d108a090
  { 1, 5, 6, 0, 0 }, // 75 tc_3e61d314
  { 1, 1, 2, 0, 0 }, // 76 tc_1e062b18
  { 1, 5, 6, 0, 0 }, // 77 tc_dbe218dd
  { 1, 1, 2, 0, 0 }, // 78 tc_eb07ef6f
  { 1, 4, 5, 0, 0 }, // 79 tc_c1dbc916
  { 1, 4, 5, 0, 0 }, // 80 tc_14da557c
  { 1, 4, 5, 0, 0 }, // 81 tc_ae762521
  { 1, 4, 5, 0, 0 }, // 82 tc_d2a33af5
  { 1, 4, 5, 0, 0 }, // 83 tc_bf6fa601
  { 1, 4, 5, 0, 0 }, // 84 tc_65dc7cc4
  { 1, 4, 5, 0, 0 }, // 85 tc_3eab77bd
  { 1, 4, 5, 0, 0 }, // 86 tc_70cabf66
  { 1, 5, 6, 0, 0 }, // 87 tc_29c14515
  { 1, 4, 5, 0, 0 }, // 88 tc_e578178f
  { 1, 5, 6, 0, 0 }, // 89 tc_a9c993d9
  { 1, 5, 6, 0, 0 }, // 90 tc_da79106e
  { 1, 4, 5, 0, 0 }, // 91 tc_261d9b78
  { 1, 4, 5, 0, 0 }, // 92 tc_baccf077
  { 1, 4, 5, 0, 0 }, // 93 tc_b5f5a094
  { 1, 4, 5, 0, 0 }, // 94 tc_7d9a56cd
  { 1, 4, 5, 0, 0 }, // 95 tc_5625c6c1
  { 1, 4, 5, 0, 0 }, // 96 tc_136c4786
  { 1, 4, 5, 0, 0 }, // 97 tc_9dafb7d3
  { 1, 4, 5, 0, 0 }, // 98 tc_128719e8
  { 1, 5, 6, 0, 0 }, // 99 tc_dcfee7ae
  { 1, 5, 6, 0, 0 }, // 100 tc_9ce7a5ab
  { 1, 5, 6, 0, 0 }, // 101 tc_3993c58b
  { 1, 1, 2, 0, 0 }, // 102 tc_c0cd91a8
  { 1, 1, 2, 0, 0 }, // 103 tc_a12a5971
  { 1, 1, 2, 0, 0 }, // 104 tc_ae2c2dc2
  { 1, 1, 2, 0, 0 }, // 105 tc_3c10f809
  { 1, 1, 2, 0, 0 }, // 106 tc_69bb508b
  { 1, 1, 2, 0, 0 }, // 107 tc_faab1248
  { 1, 4, 5, 0, 0 }, // 108 tc_c14739d5
  { 1, 5, 6, 0, 0 }, // 109 tc_9e86015f
  { 0, 0, 0, 0, 0 }, // 110 tc_b712833a
  { 0, 0, 0, 0, 0 }, // 111 tc_35e92f8e
  { 1, 8, 10, 0, 0 }, // 112 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 113 tc_b06ab583
  { 0, 0, 0, 0, 0 }, // 114 tc_e3748cdf
  { 0, 0, 0, 0, 0 }, // 115 tc_354299ad
  { 0, 0, 0, 0, 0 }, // 116 tc_2171ebae
  { 1, 1, 2, 0, 0 }, // 117 tc_090485bb
  { 1, 5, 6, 0, 0 }, // 118 tc_0cb867f2
  { 1, 1, 2, 0, 0 }, // 119 tc_ab1b5e74
  { 1, 1, 2, 0, 0 }, // 120 tc_5d806107
  { 1, 1, 2, 0, 0 }, // 121 tc_87601822
  { 1, 1, 2, 0, 0 }, // 122 tc_d95f4e98
  { 1, 4, 5, 0, 0 }, // 123 tc_3d905451
  { 1, 4, 5, 0, 0 }, // 124 tc_9b73d261
  { 1, 4, 5, 0, 0 }, // 125 tc_7675c0e9
  { 1, 5, 6, 0, 0 }, // 126 tc_9da3628f
  { 1, 5, 6, 0, 0 }, // 127 tc_e2480a7f
  { 1, 5, 6, 0, 0 }, // 128 tc_8fab9ac3
  { 1, 4, 5, 0, 0 }, // 129 tc_53ee6546
  { 1, 4, 5, 0, 0 }, // 130 tc_20a8e109
  { 1, 4, 5, 0, 0 }, // 131 tc_251c87b2
  { 1, 5, 6, 0, 0 }, // 132 tc_6c576d46
  { 1, 5, 6, 0, 0 }, // 133 tc_c8f9a6f6
  { 1, 5, 6, 0, 0 }, // 134 tc_9c68db63
  { 1, 5, 6, 0, 0 }, // 135 tc_7d01cbdc
  { 1, 1, 2, 0, 0 }, // 136 tc_88fa2da6
  { 1, 4, 5, 0, 0 }, // 137 tc_c85212ca
  { 1, 4, 5, 0, 0 }, // 138 tc_7bc567a7
  { 1, 4, 5, 0, 0 }, // 139 tc_336e698c
  { 1, 4, 5, 0, 0 }, // 140 tc_7639d4b0
  { 1, 5, 6, 0, 0 }, // 141 tc_2c8fe5ae
  { 1, 5, 6, 0, 0 }, // 142 tc_77781686
  { 1, 5, 6, 0, 0 }, // 143 tc_7986ba30
  { 1, 5, 6, 0, 0 }, // 144 tc_8def9c57
  { 1, 4, 5, 0, 0 }, // 145 tc_fcee8723
  { 1, 4, 5, 0, 0 }, // 146 tc_1e69aa99
  { 1, 4, 5, 0, 0 }, // 147 tc_8f0a6bad
  { 1, 4, 5, 0, 0 }, // 148 tc_45631a8d
  { 1, 4, 5, 0, 0 }, // 149 tc_a4567c39
  { 1, 5, 6, 0, 0 }, // 150 tc_be995eaf
  { 1, 5, 6, 0, 0 }, // 151 tc_210b2456
  { 1, 1, 2, 0, 0 }, // 152 tc_6264c5e0
  { 1, 1, 2, 0, 0 }, // 153 tc_bc5561d8
  { 1, 1, 2, 0, 0 }, // 154 tc_ca280e8b
  { 1, 1, 2, 0, 0 }, // 155 tc_9f518242
  { 1, 1, 2, 0, 0 }, // 156 tc_e17ce9ad
  { 1, 1, 2, 0, 0 }, // 157 tc_78b3c689
  { 1, 4, 5, 0, 0 }, // 158 tc_821c4233
  { 1, 4, 5, 0, 0 }, // 159 tc_d2609065
  { 1, 4, 5, 0, 0 }, // 160 tc_7c2dcd4d
  { 1, 4, 5, 0, 0 }, // 161 tc_f26aa619
  { 1, 4, 5, 0, 0 }, // 162 tc_e8c7a357
  { 1, 4, 5, 0, 0 }, // 163 tc_86442910
  { 1, 5, 6, 0, 0 }, // 164 tc_35fb9d13
  { 1, 5, 6, 0, 0 }, // 165 tc_95c54f8b
  { 1, 5, 6, 0, 0 }, // 166 tc_f027ebe9
  { 1, 4, 5, 0, 0 }, // 167 tc_6c52d277
  { 1, 4, 5, 0, 0 }, // 168 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 169 tc_9777e6bf
  { 0, 0, 0, 0, 0 }, // 170 CVI_VA
  { 0, 0, 0, 0, 0 }, // 171 tc_6b78cf13
  { 0, 0, 0, 0, 0 }, // 172 tc_97c165b9
  { 0, 0, 0, 0, 0 }, // 173 tc_71337255
  { 0, 0, 0, 0, 0 }, // 174 tc_4105d6b5
  { 0, 0, 0, 0, 0 }, // 175 tc_4fd8566e
  { 0, 0, 0, 0, 0 }, // 176 tc_5cbf490b
  { 0, 0, 0, 0, 0 }, // 177 tc_da979fb3
  { 0, 0, 0, 0, 0 }, // 178 tc_eb669007
  { 0, 0, 0, 0, 0 }, // 179 tc_77a4c701
  { 0, 0, 0, 0, 0 }, // 180 tc_51cd3aab
  { 0, 0, 0, 0, 0 }, // 181 tc_38208312
  { 0, 0, 0, 0, 0 }, // 182 tc_9c267309
  { 0, 0, 0, 0, 0 }, // 183 tc_d642eff3
  { 0, 0, 0, 0, 0 }, // 184 tc_6fd9ad30
  { 0, 0, 0, 0, 0 }, // 185 tc_7fa82b08
  { 0, 0, 0, 0, 0 }, // 186 tc_1b93bdc6
  { 0, 0, 0, 0, 0 }, // 187 tc_d5090f3e
  { 0, 0, 0, 0, 0 }, // 188 tc_8b6a873f
  { 0, 0, 0, 0, 0 }, // 189 tc_db5b9e2f
  { 0, 0, 0, 0, 0 }, // 190 tc_85d237e3
  { 0, 0, 0, 0, 0 }, // 191 tc_0317c6ca
  { 0, 0, 0, 0, 0 }, // 192 tc_aedb9f9e
  { 0, 0, 0, 0, 0 }, // 193 tc_99093773
  { 0, 0, 0, 0, 0 }, // 194 tc_a4c9df3b
  { 0, 0, 0, 0, 0 }, // 195 tc_908a4c8c
  { 0, 0, 0, 0, 0 }, // 196 tc_bbaf280e
  { 0, 0, 0, 0, 0 }, // 197 tc_a3127e12
  { 0, 0, 0, 0, 0 }, // 198 tc_5a9fc4ec
  { 0, 0, 0, 0, 0 }, // 199 tc_45453b98
  { 0, 0, 0, 0, 0 }, // 200 tc_eda67dcd
  { 0, 0, 0, 0, 0 }, // 201 tc_e172d86a
  { 0, 0, 0, 0, 0 }, // 202 tc_c4b515c5
  { 0, 0, 0, 0, 0 }, // 203 tc_e231aa4f
  { 0, 0, 0, 0, 0 }, // 204 tc_9311da3f
  { 0, 0, 0, 0, 0 }, // 205 tc_41f4b64e
  { 0, 0, 0, 0, 0 }, // 206 tc_c00bf9c9
  { 0, 0, 0, 0, 0 }, // 207 tc_7fa8b40f
  { 0, 0, 0, 0, 0 }, // 208 tc_d2cb81ea
  { 0, 0, 0, 0, 0 }, // 209 tc_5c120602
  { 0, 0, 0, 0, 0 }, // 210 tc_e6299d16
  { 0, 0, 0, 0, 0 }, // 211 tc_f3fc3f83
  { 0, 0, 0, 0, 0 }, // 212 tc_4e2a5159
  { 0, 0, 0, 0, 0 }, // 213 tc_69b6dd20
  { 0, 0, 0, 0, 0 }, // 214 tc_d725e5b0
  { 0, 0, 0, 0, 0 }, // 215 tc_7c3f55c4
  { 0, 0, 0, 0, 0 }, // 216 tc_d98f4d63
  { 0, 0, 0, 0, 0 }, // 217 tc_e5053c8f
  { 0, 0, 0, 0, 0 }, // 218 tc_cedf314b
  { 0, 0, 0, 0, 0 }, // 219 tc_cbf6d1dc
  { 0, 0, 0, 0, 0 }, // 220 tc_7e9f581b
  { 0, 0, 0, 0, 0 }, // 221 tc_41f99e1c
  { 0, 0, 0, 0, 0 }, // 222 tc_bf142ae2
  { 0, 0, 0, 0, 0 }, // 223 tc_9b9642a1
  { 0, 0, 0, 0, 0 }, // 224 tc_644584f8
  { 0, 0, 0, 0, 0 }, // 225 tc_316c637c
  { 0, 0, 0, 0, 0 }, // 226 tc_d7bea0ec
  { 0, 0, 0, 0, 0 }, // 227 tc_72ad7b54
  { 0, 0, 0, 0, 0 }, // 228 tc_b77635b4
  { 0, 0, 0, 0, 0 }, // 229 tc_28978789
  { 1, 5, 6, 0, 0 }, // 230 tc_ef2676fd
  { 1, 3, 4, 0, 0 }, // 231 tc_bcf0e36e
  { 1, 5, 6, 0, 0 }, // 232 tc_30665cb0
  { 1, 5, 6, 0, 0 }, // 233 tc_34e882a4
  { 1, 5, 6, 0, 0 }, // 234 tc_ef0ebaaa
  { 1, 6, 7, 0, 0 }, // 235 tc_049dfb74
  { 1, 6, 7, 0, 0 }, // 236 tc_d267fa19
  { 1, 5, 6, 0, 0 }, // 237 tc_f4608adc
  { 1, 3, 4, 0, 0 }, // 238 tc_4997da4a
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 10, 11, 1, 3 }, // 1 tc_94e6ffd9
  { 1, 11, 12, 3, 6 }, // 2 tc_548f402d
  { 1, 10, 11, 6, 9 }, // 3 tc_bd16579e
  { 1, 10, 11, 9, 12 }, // 4 tc_47ab9233
  { 1, 10, 11, 12, 15 }, // 5 tc_7ca2ea10
  { 1, 10, 11, 15, 18 }, // 6 tc_9c18c9a5
  { 1, 11, 12, 18, 21 }, // 7 tc_b0f50e3c
  { 1, 11, 12, 21, 23 }, // 8 tc_f16d5b17
  { 1, 11, 12, 23, 26 }, // 9 PSEUDO
  { 1, 10, 11, 26, 28 }, // 10 tc_b86c7e8b
  { 1, 11, 12, 0, 0 }, // 11 tc_e2c31426
  { 1, 11, 12, 28, 32 }, // 12 tc_1b6011fb
  { 1, 11, 12, 32, 36 }, // 13 tc_28d296df
  { 1, 11, 12, 36, 39 }, // 14 tc_511f28f6
  { 1, 11, 12, 39, 42 }, // 15 tc_76c4c5ef
  { 1, 12, 13, 42, 44 }, // 16 tc_3b4892c6
  { 1, 11, 12, 44, 47 }, // 17 tc_b08be45e
  { 1, 12, 13, 47, 49 }, // 18 tc_82f0f122
  { 1, 10, 11, 49, 52 }, // 19 tc_cd321066
  { 1, 10, 11, 52, 55 }, // 20 tc_63cd9d2d
  { 1, 10, 11, 55, 58 }, // 21 tc_37326008
  { 1, 10, 11, 58, 61 }, // 22 tc_c58f771a
  { 1, 10, 11, 61, 64 }, // 23 tc_8c8041e6
  { 1, 10, 11, 64, 68 }, // 24 tc_8cb685d9
  { 1, 10, 11, 68, 73 }, // 25 tc_a87879e8
  { 1, 10, 11, 73, 76 }, // 26 tc_5fa2857c
  { 1, 11, 12, 76, 77 }, // 27 tc_9a13af9d
  { 1, 10, 11, 77, 80 }, // 28 tc_e2c08bb4
  { 1, 10, 11, 80, 84 }, // 29 tc_2aaab1e0
  { 1, 10, 11, 84, 89 }, // 30 tc_ae0722f7
  { 1, 10, 11, 89, 93 }, // 31 tc_583510c7
  { 1, 10, 11, 93, 95 }, // 32 tc_81a23d44
  { 1, 10, 11, 95, 98 }, // 33 tc_d63b71d1
  { 1, 11, 12, 98, 101 }, // 34 tc_5fe9fcd0
  { 1, 11, 12, 101, 104 }, // 35 tc_9df8b0dc
  { 1, 10, 11, 104, 106 }, // 36 tc_47f0b7ad
  { 1, 10, 11, 106, 110 }, // 37 tc_d1b5a4b6
  { 1, 12, 13, 110, 112 }, // 38 tc_1fe8323c
  { 1, 10, 11, 112, 116 }, // 39 tc_43068634
  { 1, 10, 11, 116, 117 }, // 40 tc_639d93ee
  { 1, 13, 14, 117, 119 }, // 41 LD_tc_ld_SLOT01
  { 1, 14, 15, 119, 122 }, // 42 DUPLEX
  { 1, 15, 16, 122, 123 }, // 43 tc_b08b653e
  { 1, 16, 17, 123, 124 }, // 44 tc_ENDLOOP
  { 1, 10, 11, 124, 126 }, // 45 tc_e836c161
  { 1, 10, 11, 126, 128 }, // 46 tc_485bb57c
  { 1, 10, 11, 128, 131 }, // 47 tc_3bea1824
  { 1, 10, 11, 131, 135 }, // 48 tc_2d1e6f5c
  { 1, 10, 11, 135, 140 }, // 49 tc_2e55aa16
  { 1, 10, 11, 140, 143 }, // 50 tc_f1aa2cdb
  { 1, 10, 11, 143, 146 }, // 51 tc_f1240c08
  { 1, 10, 11, 146, 150 }, // 52 tc_09c86199
  { 1, 10, 11, 150, 152 }, // 53 tc_0767081f
  { 1, 15, 16, 152, 153 }, // 54 tc_ecfaae86
  { 1, 15, 16, 153, 155 }, // 55 tc_84630363
  { 1, 11, 12, 0, 0 }, // 56 tc_aad55963
  { 1, 10, 11, 155, 156 }, // 57 tc_a333d2a9
  { 1, 10, 11, 156, 158 }, // 58 tc_1b834fe7
  { 1, 10, 11, 158, 160 }, // 59 tc_537e2013
  { 1, 10, 11, 160, 162 }, // 60 tc_b5bfaa60
  { 1, 15, 16, 162, 164 }, // 61 tc_07ac815d
  { 1, 15, 16, 164, 166 }, // 62 tc_1f9668cc
  { 1, 15, 16, 166, 168 }, // 63 tc_a1fb80e1
  { 1, 12, 13, 168, 170 }, // 64 tc_b324366f
  { 1, 12, 13, 170, 172 }, // 65 tc_1000eb10
  { 1, 12, 13, 172, 174 }, // 66 tc_f055fbb6
  { 1, 15, 16, 174, 175 }, // 67 tc_b189ad4c
  { 1, 12, 13, 175, 177 }, // 68 tc_feb4974b
  { 1, 12, 13, 177, 179 }, // 69 tc_d6a805a8
  { 1, 15, 16, 179, 180 }, // 70 tc_cbe45117
  { 1, 14, 15, 180, 183 }, // 71 tc_580a779c
  { 1, 10, 11, 183, 186 }, // 72 tc_92d1833c
  { 1, 14, 15, 186, 189 }, // 73 tc_09faec3b
  { 1, 10, 11, 189, 192 }, // 74 tc_d108a090
  { 1, 14, 15, 192, 195 }, // 75 tc_3e61d314
  { 1, 10, 11, 195, 198 }, // 76 tc_1e062b18
  { 1, 14, 15, 198, 200 }, // 77 tc_dbe218dd
  { 1, 10, 11, 200, 202 }, // 78 tc_eb07ef6f
  { 1, 13, 14, 202, 204 }, // 79 tc_c1dbc916
  { 1, 13, 14, 204, 208 }, // 80 tc_14da557c
  { 1, 13, 14, 208, 213 }, // 81 tc_ae762521
  { 1, 13, 14, 213, 219 }, // 82 tc_d2a33af5
  { 1, 13, 14, 219, 222 }, // 83 tc_bf6fa601
  { 1, 13, 14, 222, 226 }, // 84 tc_65dc7cc4
  { 1, 13, 14, 226, 231 }, // 85 tc_3eab77bd
  { 1, 13, 14, 231, 233 }, // 86 tc_70cabf66
  { 1, 14, 15, 233, 235 }, // 87 tc_29c14515
  { 1, 13, 14, 235, 240 }, // 88 tc_e578178f
  { 1, 14, 15, 240, 243 }, // 89 tc_a9c993d9
  { 1, 14, 15, 243, 246 }, // 90 tc_da79106e
  { 1, 13, 14, 246, 250 }, // 91 tc_261d9b78
  { 1, 13, 14, 250, 255 }, // 92 tc_baccf077
  { 1, 13, 14, 255, 258 }, // 93 tc_b5f5a094
  { 1, 13, 14, 258, 262 }, // 94 tc_7d9a56cd
  { 1, 13, 14, 262, 266 }, // 95 tc_5625c6c1
  { 1, 13, 14, 266, 269 }, // 96 tc_136c4786
  { 1, 13, 14, 269, 274 }, // 97 tc_9dafb7d3
  { 1, 13, 14, 274, 279 }, // 98 tc_128719e8
  { 1, 14, 15, 279, 281 }, // 99 tc_dcfee7ae
  { 1, 14, 15, 281, 284 }, // 100 tc_9ce7a5ab
  { 1, 14, 15, 284, 287 }, // 101 tc_3993c58b
  { 1, 10, 11, 287, 291 }, // 102 tc_c0cd91a8
  { 1, 10, 11, 291, 295 }, // 103 tc_a12a5971
  { 1, 10, 11, 295, 298 }, // 104 tc_ae2c2dc2
  { 1, 10, 11, 298, 302 }, // 105 tc_3c10f809
  { 1, 10, 11, 302, 306 }, // 106 tc_69bb508b
  { 1, 10, 11, 306, 309 }, // 107 tc_faab1248
  { 1, 13, 14, 309, 311 }, // 108 tc_c14739d5
  { 1, 14, 15, 311, 313 }, // 109 tc_9e86015f
  { 0, 0, 0, 0, 0 }, // 110 tc_b712833a
  { 0, 0, 0, 0, 0 }, // 111 tc_35e92f8e
  { 1, 17, 19, 313, 316 }, // 112 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 113 tc_b06ab583
  { 0, 0, 0, 0, 0 }, // 114 tc_e3748cdf
  { 0, 0, 0, 0, 0 }, // 115 tc_354299ad
  { 0, 0, 0, 0, 0 }, // 116 tc_2171ebae
  { 1, 10, 11, 316, 320 }, // 117 tc_090485bb
  { 1, 14, 15, 320, 323 }, // 118 tc_0cb867f2
  { 1, 10, 11, 323, 325 }, // 119 tc_ab1b5e74
  { 1, 10, 11, 325, 328 }, // 120 tc_5d806107
  { 1, 10, 11, 328, 331 }, // 121 tc_87601822
  { 1, 10, 11, 331, 336 }, // 122 tc_d95f4e98
  { 1, 13, 14, 336, 340 }, // 123 tc_3d905451
  { 1, 13, 14, 340, 345 }, // 124 tc_9b73d261
  { 1, 13, 14, 345, 350 }, // 125 tc_7675c0e9
  { 1, 14, 15, 350, 354 }, // 126 tc_9da3628f
  { 1, 14, 15, 354, 359 }, // 127 tc_e2480a7f
  { 1, 14, 15, 359, 364 }, // 128 tc_8fab9ac3
  { 1, 13, 14, 364, 367 }, // 129 tc_53ee6546
  { 1, 13, 14, 367, 371 }, // 130 tc_20a8e109
  { 1, 13, 14, 371, 376 }, // 131 tc_251c87b2
  { 1, 14, 15, 376, 379 }, // 132 tc_6c576d46
  { 1, 14, 15, 379, 383 }, // 133 tc_c8f9a6f6
  { 1, 14, 15, 383, 388 }, // 134 tc_9c68db63
  { 1, 14, 15, 388, 391 }, // 135 tc_7d01cbdc
  { 1, 10, 11, 391, 393 }, // 136 tc_88fa2da6
  { 1, 13, 14, 393, 396 }, // 137 tc_c85212ca
  { 1, 13, 14, 396, 401 }, // 138 tc_7bc567a7
  { 1, 13, 14, 401, 404 }, // 139 tc_336e698c
  { 1, 13, 14, 404, 409 }, // 140 tc_7639d4b0
  { 1, 14, 15, 409, 412 }, // 141 tc_2c8fe5ae
  { 1, 14, 15, 412, 417 }, // 142 tc_77781686
  { 1, 14, 15, 417, 420 }, // 143 tc_7986ba30
  { 1, 14, 15, 420, 425 }, // 144 tc_8def9c57
  { 1, 13, 14, 425, 428 }, // 145 tc_fcee8723
  { 1, 13, 14, 428, 432 }, // 146 tc_1e69aa99
  { 1, 13, 14, 432, 436 }, // 147 tc_8f0a6bad
  { 1, 13, 14, 436, 440 }, // 148 tc_45631a8d
  { 1, 13, 14, 440, 444 }, // 149 tc_a4567c39
  { 1, 14, 15, 444, 448 }, // 150 tc_be995eaf
  { 1, 14, 15, 448, 452 }, // 151 tc_210b2456
  { 1, 10, 11, 452, 456 }, // 152 tc_6264c5e0
  { 1, 10, 11, 456, 461 }, // 153 tc_bc5561d8
  { 1, 10, 11, 461, 463 }, // 154 tc_ca280e8b
  { 1, 10, 11, 463, 466 }, // 155 tc_9f518242
  { 1, 10, 11, 466, 470 }, // 156 tc_e17ce9ad
  { 1, 10, 11, 470, 472 }, // 157 tc_78b3c689
  { 1, 13, 14, 472, 475 }, // 158 tc_821c4233
  { 1, 13, 14, 475, 477 }, // 159 tc_d2609065
  { 1, 13, 14, 477, 478 }, // 160 tc_7c2dcd4d
  { 1, 13, 14, 478, 479 }, // 161 tc_f26aa619
  { 1, 13, 14, 479, 481 }, // 162 tc_e8c7a357
  { 1, 13, 14, 0, 0 }, // 163 tc_86442910
  { 1, 14, 15, 0, 0 }, // 164 tc_35fb9d13
  { 1, 14, 15, 0, 0 }, // 165 tc_95c54f8b
  { 1, 14, 15, 481, 482 }, // 166 tc_f027ebe9
  { 1, 13, 14, 482, 484 }, // 167 tc_6c52d277
  { 1, 13, 14, 484, 487 }, // 168 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 169 tc_9777e6bf
  { 0, 0, 0, 0, 0 }, // 170 CVI_VA
  { 0, 0, 0, 0, 0 }, // 171 tc_6b78cf13
  { 0, 0, 0, 0, 0 }, // 172 tc_97c165b9
  { 0, 0, 0, 0, 0 }, // 173 tc_71337255
  { 0, 0, 0, 0, 0 }, // 174 tc_4105d6b5
  { 0, 0, 0, 0, 0 }, // 175 tc_4fd8566e
  { 0, 0, 0, 0, 0 }, // 176 tc_5cbf490b
  { 0, 0, 0, 0, 0 }, // 177 tc_da979fb3
  { 0, 0, 0, 0, 0 }, // 178 tc_eb669007
  { 0, 0, 0, 0, 0 }, // 179 tc_77a4c701
  { 0, 0, 0, 0, 0 }, // 180 tc_51cd3aab
  { 0, 0, 0, 0, 0 }, // 181 tc_38208312
  { 0, 0, 0, 0, 0 }, // 182 tc_9c267309
  { 0, 0, 0, 0, 0 }, // 183 tc_d642eff3
  { 0, 0, 0, 0, 0 }, // 184 tc_6fd9ad30
  { 0, 0, 0, 0, 0 }, // 185 tc_7fa82b08
  { 0, 0, 0, 0, 0 }, // 186 tc_1b93bdc6
  { 0, 0, 0, 0, 0 }, // 187 tc_d5090f3e
  { 0, 0, 0, 0, 0 }, // 188 tc_8b6a873f
  { 0, 0, 0, 0, 0 }, // 189 tc_db5b9e2f
  { 0, 0, 0, 0, 0 }, // 190 tc_85d237e3
  { 0, 0, 0, 0, 0 }, // 191 tc_0317c6ca
  { 0, 0, 0, 0, 0 }, // 192 tc_aedb9f9e
  { 0, 0, 0, 0, 0 }, // 193 tc_99093773
  { 0, 0, 0, 0, 0 }, // 194 tc_a4c9df3b
  { 0, 0, 0, 0, 0 }, // 195 tc_908a4c8c
  { 0, 0, 0, 0, 0 }, // 196 tc_bbaf280e
  { 0, 0, 0, 0, 0 }, // 197 tc_a3127e12
  { 0, 0, 0, 0, 0 }, // 198 tc_5a9fc4ec
  { 0, 0, 0, 0, 0 }, // 199 tc_45453b98
  { 0, 0, 0, 0, 0 }, // 200 tc_eda67dcd
  { 0, 0, 0, 0, 0 }, // 201 tc_e172d86a
  { 0, 0, 0, 0, 0 }, // 202 tc_c4b515c5
  { 0, 0, 0, 0, 0 }, // 203 tc_e231aa4f
  { 0, 0, 0, 0, 0 }, // 204 tc_9311da3f
  { 0, 0, 0, 0, 0 }, // 205 tc_41f4b64e
  { 0, 0, 0, 0, 0 }, // 206 tc_c00bf9c9
  { 0, 0, 0, 0, 0 }, // 207 tc_7fa8b40f
  { 0, 0, 0, 0, 0 }, // 208 tc_d2cb81ea
  { 0, 0, 0, 0, 0 }, // 209 tc_5c120602
  { 0, 0, 0, 0, 0 }, // 210 tc_e6299d16
  { 0, 0, 0, 0, 0 }, // 211 tc_f3fc3f83
  { 0, 0, 0, 0, 0 }, // 212 tc_4e2a5159
  { 0, 0, 0, 0, 0 }, // 213 tc_69b6dd20
  { 0, 0, 0, 0, 0 }, // 214 tc_d725e5b0
  { 0, 0, 0, 0, 0 }, // 215 tc_7c3f55c4
  { 0, 0, 0, 0, 0 }, // 216 tc_d98f4d63
  { 0, 0, 0, 0, 0 }, // 217 tc_e5053c8f
  { 0, 0, 0, 0, 0 }, // 218 tc_cedf314b
  { 0, 0, 0, 0, 0 }, // 219 tc_cbf6d1dc
  { 0, 0, 0, 0, 0 }, // 220 tc_7e9f581b
  { 0, 0, 0, 0, 0 }, // 221 tc_41f99e1c
  { 0, 0, 0, 0, 0 }, // 222 tc_bf142ae2
  { 0, 0, 0, 0, 0 }, // 223 tc_9b9642a1
  { 0, 0, 0, 0, 0 }, // 224 tc_644584f8
  { 0, 0, 0, 0, 0 }, // 225 tc_316c637c
  { 0, 0, 0, 0, 0 }, // 226 tc_d7bea0ec
  { 0, 0, 0, 0, 0 }, // 227 tc_72ad7b54
  { 0, 0, 0, 0, 0 }, // 228 tc_b77635b4
  { 0, 0, 0, 0, 0 }, // 229 tc_28978789
  { 1, 14, 15, 0, 0 }, // 230 tc_ef2676fd
  { 1, 12, 13, 0, 0 }, // 231 tc_bcf0e36e
  { 1, 14, 15, 487, 488 }, // 232 tc_30665cb0
  { 1, 14, 15, 488, 489 }, // 233 tc_34e882a4
  { 1, 14, 15, 489, 491 }, // 234 tc_ef0ebaaa
  { 1, 15, 16, 491, 492 }, // 235 tc_049dfb74
  { 1, 15, 16, 0, 0 }, // 236 tc_d267fa19
  { 1, 14, 15, 492, 494 }, // 237 tc_f4608adc
  { 1, 12, 13, 494, 495 }, // 238 tc_4997da4a
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 19, 20, 495, 497 }, // 1 tc_94e6ffd9
  { 1, 20, 21, 497, 500 }, // 2 tc_548f402d
  { 1, 19, 20, 500, 503 }, // 3 tc_bd16579e
  { 1, 19, 20, 503, 506 }, // 4 tc_47ab9233
  { 1, 19, 20, 506, 509 }, // 5 tc_7ca2ea10
  { 1, 19, 20, 509, 512 }, // 6 tc_9c18c9a5
  { 1, 20, 21, 512, 515 }, // 7 tc_b0f50e3c
  { 1, 20, 21, 515, 517 }, // 8 tc_f16d5b17
  { 1, 20, 21, 517, 520 }, // 9 PSEUDO
  { 1, 19, 20, 520, 522 }, // 10 tc_b86c7e8b
  { 1, 20, 21, 0, 0 }, // 11 tc_e2c31426
  { 1, 20, 21, 522, 526 }, // 12 tc_1b6011fb
  { 1, 20, 21, 526, 530 }, // 13 tc_28d296df
  { 1, 20, 21, 530, 533 }, // 14 tc_511f28f6
  { 1, 20, 21, 533, 536 }, // 15 tc_76c4c5ef
  { 1, 21, 22, 536, 538 }, // 16 tc_3b4892c6
  { 1, 20, 21, 538, 541 }, // 17 tc_b08be45e
  { 1, 21, 22, 541, 543 }, // 18 tc_82f0f122
  { 1, 19, 20, 543, 546 }, // 19 tc_cd321066
  { 1, 19, 20, 546, 549 }, // 20 tc_63cd9d2d
  { 1, 19, 20, 549, 552 }, // 21 tc_37326008
  { 1, 19, 20, 552, 555 }, // 22 tc_c58f771a
  { 1, 19, 20, 555, 558 }, // 23 tc_8c8041e6
  { 1, 19, 20, 558, 562 }, // 24 tc_8cb685d9
  { 1, 19, 20, 562, 567 }, // 25 tc_a87879e8
  { 1, 19, 20, 567, 570 }, // 26 tc_5fa2857c
  { 1, 20, 21, 570, 571 }, // 27 tc_9a13af9d
  { 1, 19, 20, 571, 574 }, // 28 tc_e2c08bb4
  { 1, 19, 20, 574, 578 }, // 29 tc_2aaab1e0
  { 1, 19, 20, 578, 583 }, // 30 tc_ae0722f7
  { 1, 19, 20, 583, 587 }, // 31 tc_583510c7
  { 1, 19, 20, 587, 589 }, // 32 tc_81a23d44
  { 1, 19, 20, 589, 592 }, // 33 tc_d63b71d1
  { 1, 20, 21, 592, 595 }, // 34 tc_5fe9fcd0
  { 1, 20, 21, 595, 598 }, // 35 tc_9df8b0dc
  { 1, 19, 20, 598, 600 }, // 36 tc_47f0b7ad
  { 1, 19, 20, 600, 604 }, // 37 tc_d1b5a4b6
  { 1, 21, 22, 604, 606 }, // 38 tc_1fe8323c
  { 1, 19, 20, 606, 610 }, // 39 tc_43068634
  { 1, 19, 20, 610, 611 }, // 40 tc_639d93ee
  { 1, 22, 23, 611, 613 }, // 41 LD_tc_ld_SLOT01
  { 1, 23, 24, 613, 616 }, // 42 DUPLEX
  { 1, 24, 25, 616, 617 }, // 43 tc_b08b653e
  { 1, 25, 26, 617, 618 }, // 44 tc_ENDLOOP
  { 1, 19, 20, 618, 620 }, // 45 tc_e836c161
  { 1, 19, 20, 620, 622 }, // 46 tc_485bb57c
  { 1, 19, 20, 622, 625 }, // 47 tc_3bea1824
  { 1, 19, 20, 625, 629 }, // 48 tc_2d1e6f5c
  { 1, 19, 20, 629, 634 }, // 49 tc_2e55aa16
  { 1, 19, 20, 634, 637 }, // 50 tc_f1aa2cdb
  { 1, 19, 20, 637, 640 }, // 51 tc_f1240c08
  { 1, 19, 20, 640, 644 }, // 52 tc_09c86199
  { 1, 19, 20, 644, 646 }, // 53 tc_0767081f
  { 1, 24, 25, 646, 647 }, // 54 tc_ecfaae86
  { 1, 24, 25, 647, 649 }, // 55 tc_84630363
  { 1, 20, 21, 0, 0 }, // 56 tc_aad55963
  { 1, 19, 20, 649, 650 }, // 57 tc_a333d2a9
  { 1, 19, 20, 650, 652 }, // 58 tc_1b834fe7
  { 1, 19, 20, 652, 654 }, // 59 tc_537e2013
  { 1, 19, 20, 654, 656 }, // 60 tc_b5bfaa60
  { 1, 24, 25, 656, 658 }, // 61 tc_07ac815d
  { 1, 24, 25, 658, 660 }, // 62 tc_1f9668cc
  { 1, 24, 25, 660, 662 }, // 63 tc_a1fb80e1
  { 1, 21, 22, 662, 664 }, // 64 tc_b324366f
  { 1, 21, 22, 664, 666 }, // 65 tc_1000eb10
  { 1, 21, 22, 666, 668 }, // 66 tc_f055fbb6
  { 1, 24, 25, 668, 669 }, // 67 tc_b189ad4c
  { 1, 21, 22, 669, 671 }, // 68 tc_feb4974b
  { 1, 21, 22, 671, 673 }, // 69 tc_d6a805a8
  { 1, 24, 25, 673, 674 }, // 70 tc_cbe45117
  { 1, 23, 24, 674, 677 }, // 71 tc_580a779c
  { 1, 19, 20, 677, 680 }, // 72 tc_92d1833c
  { 1, 23, 24, 680, 683 }, // 73 tc_09faec3b
  { 1, 19, 20, 683, 686 }, // 74 tc_d108a090
  { 1, 23, 24, 686, 689 }, // 75 tc_3e61d314
  { 1, 19, 20, 689, 692 }, // 76 tc_1e062b18
  { 1, 23, 24, 692, 694 }, // 77 tc_dbe218dd
  { 1, 19, 20, 694, 696 }, // 78 tc_eb07ef6f
  { 1, 22, 23, 696, 698 }, // 79 tc_c1dbc916
  { 1, 22, 23, 698, 702 }, // 80 tc_14da557c
  { 1, 22, 23, 702, 707 }, // 81 tc_ae762521
  { 1, 22, 23, 707, 713 }, // 82 tc_d2a33af5
  { 1, 22, 23, 713, 716 }, // 83 tc_bf6fa601
  { 1, 22, 23, 716, 720 }, // 84 tc_65dc7cc4
  { 1, 22, 23, 720, 725 }, // 85 tc_3eab77bd
  { 1, 22, 23, 725, 727 }, // 86 tc_70cabf66
  { 1, 23, 24, 727, 729 }, // 87 tc_29c14515
  { 1, 22, 23, 729, 734 }, // 88 tc_e578178f
  { 1, 23, 24, 734, 737 }, // 89 tc_a9c993d9
  { 1, 23, 24, 737, 740 }, // 90 tc_da79106e
  { 1, 22, 23, 740, 744 }, // 91 tc_261d9b78
  { 1, 22, 23, 744, 749 }, // 92 tc_baccf077
  { 1, 22, 23, 749, 752 }, // 93 tc_b5f5a094
  { 1, 22, 23, 752, 756 }, // 94 tc_7d9a56cd
  { 1, 22, 23, 756, 760 }, // 95 tc_5625c6c1
  { 1, 22, 23, 760, 763 }, // 96 tc_136c4786
  { 1, 22, 23, 763, 768 }, // 97 tc_9dafb7d3
  { 1, 22, 23, 768, 773 }, // 98 tc_128719e8
  { 1, 23, 24, 773, 775 }, // 99 tc_dcfee7ae
  { 1, 23, 24, 775, 778 }, // 100 tc_9ce7a5ab
  { 1, 23, 24, 778, 781 }, // 101 tc_3993c58b
  { 1, 19, 20, 781, 785 }, // 102 tc_c0cd91a8
  { 1, 19, 20, 785, 789 }, // 103 tc_a12a5971
  { 1, 19, 20, 789, 792 }, // 104 tc_ae2c2dc2
  { 1, 19, 20, 792, 796 }, // 105 tc_3c10f809
  { 1, 19, 20, 796, 800 }, // 106 tc_69bb508b
  { 1, 19, 20, 800, 803 }, // 107 tc_faab1248
  { 1, 22, 23, 803, 805 }, // 108 tc_c14739d5
  { 1, 23, 24, 805, 807 }, // 109 tc_9e86015f
  { 1, 26, 29, 807, 810 }, // 110 tc_b712833a
  { 1, 29, 33, 810, 813 }, // 111 tc_35e92f8e
  { 1, 33, 35, 813, 816 }, // 112 PSEUDOM
  { 1, 35, 37, 816, 819 }, // 113 tc_b06ab583
  { 1, 37, 40, 819, 822 }, // 114 tc_e3748cdf
  { 1, 40, 44, 822, 825 }, // 115 tc_354299ad
  { 1, 44, 46, 825, 829 }, // 116 tc_2171ebae
  { 1, 19, 20, 829, 833 }, // 117 tc_090485bb
  { 1, 23, 24, 833, 836 }, // 118 tc_0cb867f2
  { 1, 19, 20, 836, 838 }, // 119 tc_ab1b5e74
  { 1, 19, 20, 838, 841 }, // 120 tc_5d806107
  { 1, 19, 20, 841, 844 }, // 121 tc_87601822
  { 1, 19, 20, 844, 849 }, // 122 tc_d95f4e98
  { 1, 22, 23, 849, 853 }, // 123 tc_3d905451
  { 1, 22, 23, 853, 858 }, // 124 tc_9b73d261
  { 1, 22, 23, 858, 863 }, // 125 tc_7675c0e9
  { 1, 23, 24, 863, 867 }, // 126 tc_9da3628f
  { 1, 23, 24, 867, 872 }, // 127 tc_e2480a7f
  { 1, 23, 24, 872, 877 }, // 128 tc_8fab9ac3
  { 1, 22, 23, 877, 880 }, // 129 tc_53ee6546
  { 1, 22, 23, 880, 884 }, // 130 tc_20a8e109
  { 1, 22, 23, 884, 889 }, // 131 tc_251c87b2
  { 1, 23, 24, 889, 892 }, // 132 tc_6c576d46
  { 1, 23, 24, 892, 896 }, // 133 tc_c8f9a6f6
  { 1, 23, 24, 896, 901 }, // 134 tc_9c68db63
  { 1, 23, 24, 901, 904 }, // 135 tc_7d01cbdc
  { 1, 19, 20, 904, 906 }, // 136 tc_88fa2da6
  { 1, 22, 23, 906, 909 }, // 137 tc_c85212ca
  { 1, 22, 23, 909, 914 }, // 138 tc_7bc567a7
  { 1, 22, 23, 914, 917 }, // 139 tc_336e698c
  { 1, 22, 23, 917, 922 }, // 140 tc_7639d4b0
  { 1, 23, 24, 922, 925 }, // 141 tc_2c8fe5ae
  { 1, 23, 24, 925, 930 }, // 142 tc_77781686
  { 1, 23, 24, 930, 933 }, // 143 tc_7986ba30
  { 1, 23, 24, 933, 938 }, // 144 tc_8def9c57
  { 1, 22, 23, 938, 941 }, // 145 tc_fcee8723
  { 1, 22, 23, 941, 945 }, // 146 tc_1e69aa99
  { 1, 22, 23, 945, 949 }, // 147 tc_8f0a6bad
  { 1, 22, 23, 949, 953 }, // 148 tc_45631a8d
  { 1, 22, 23, 953, 957 }, // 149 tc_a4567c39
  { 1, 23, 24, 957, 961 }, // 150 tc_be995eaf
  { 1, 23, 24, 961, 965 }, // 151 tc_210b2456
  { 1, 19, 20, 965, 969 }, // 152 tc_6264c5e0
  { 1, 19, 20, 969, 974 }, // 153 tc_bc5561d8
  { 1, 19, 20, 974, 976 }, // 154 tc_ca280e8b
  { 1, 19, 20, 976, 979 }, // 155 tc_9f518242
  { 1, 19, 20, 979, 983 }, // 156 tc_e17ce9ad
  { 1, 19, 20, 983, 985 }, // 157 tc_78b3c689
  { 1, 22, 23, 985, 988 }, // 158 tc_821c4233
  { 1, 22, 23, 988, 990 }, // 159 tc_d2609065
  { 1, 22, 23, 990, 991 }, // 160 tc_7c2dcd4d
  { 1, 22, 23, 991, 992 }, // 161 tc_f26aa619
  { 1, 22, 23, 992, 994 }, // 162 tc_e8c7a357
  { 1, 22, 23, 0, 0 }, // 163 tc_86442910
  { 1, 23, 24, 0, 0 }, // 164 tc_35fb9d13
  { 1, 23, 24, 0, 0 }, // 165 tc_95c54f8b
  { 1, 23, 24, 994, 995 }, // 166 tc_f027ebe9
  { 1, 22, 23, 995, 997 }, // 167 tc_6c52d277
  { 1, 22, 23, 997, 1000 }, // 168 ST_tc_st_SLOT01
  { 1, 46, 48, 1000, 1003 }, // 169 tc_9777e6bf
  { 1, 48, 50, 1003, 1007 }, // 170 CVI_VA
  { 1, 50, 52, 1007, 1009 }, // 171 tc_6b78cf13
  { 1, 44, 46, 1009, 1012 }, // 172 tc_97c165b9
  { 1, 35, 37, 1012, 1014 }, // 173 tc_71337255
  { 1, 52, 54, 1014, 1016 }, // 174 tc_4105d6b5
  { 1, 29, 33, 1016, 1020 }, // 175 tc_4fd8566e
  { 1, 26, 29, 1020, 1024 }, // 176 tc_5cbf490b
  { 1, 26, 29, 1024, 1029 }, // 177 tc_da979fb3
  { 1, 26, 29, 1029, 1033 }, // 178 tc_eb669007
  { 1, 54, 56, 1033, 1036 }, // 179 tc_77a4c701
  { 1, 54, 56, 1036, 1040 }, // 180 tc_51cd3aab
  { 1, 54, 56, 1040, 1045 }, // 181 tc_38208312
  { 1, 54, 56, 1045, 1049 }, // 182 tc_9c267309
  { 1, 40, 44, 1049, 1053 }, // 183 tc_d642eff3
  { 1, 40, 44, 1053, 1058 }, // 184 tc_6fd9ad30
  { 1, 40, 44, 1058, 1062 }, // 185 tc_7fa82b08
  { 1, 56, 58, 1062, 1065 }, // 186 tc_1b93bdc6
  { 1, 56, 58, 1065, 1069 }, // 187 tc_d5090f3e
  { 1, 56, 58, 1069, 1074 }, // 188 tc_8b6a873f
  { 1, 56, 58, 1074, 1078 }, // 189 tc_db5b9e2f
  { 1, 37, 40, 1078, 1082 }, // 190 tc_85d237e3
  { 1, 37, 40, 1082, 1087 }, // 191 tc_0317c6ca
  { 1, 37, 40, 1087, 1091 }, // 192 tc_aedb9f9e
  { 1, 37, 40, 1091, 1096 }, // 193 tc_99093773
  { 1, 37, 40, 1096, 1100 }, // 194 tc_a4c9df3b
  { 1, 50, 52, 1100, 1103 }, // 195 tc_908a4c8c
  { 1, 35, 37, 1103, 1106 }, // 196 tc_bbaf280e
  { 1, 35, 37, 1106, 1110 }, // 197 tc_a3127e12
  { 1, 35, 37, 1110, 1115 }, // 198 tc_5a9fc4ec
  { 1, 58, 60, 1115, 1118 }, // 199 tc_45453b98
  { 1, 60, 62, 1118, 1121 }, // 200 tc_eda67dcd
  { 1, 60, 62, 1121, 1125 }, // 201 tc_e172d86a
  { 1, 52, 54, 1125, 1129 }, // 202 tc_c4b515c5
  { 1, 50, 52, 1129, 1132 }, // 203 tc_e231aa4f
  { 1, 50, 52, 1132, 1136 }, // 204 tc_9311da3f
  { 1, 58, 60, 1136, 1139 }, // 205 tc_41f4b64e
  { 1, 58, 60, 1139, 1143 }, // 206 tc_c00bf9c9
  { 1, 58, 60, 1143, 1147 }, // 207 tc_7fa8b40f
  { 1, 58, 60, 1147, 1149 }, // 208 tc_d2cb81ea
  { 1, 62, 64, 1149, 1154 }, // 209 tc_5c120602
  { 1, 52, 54, 1154, 1156 }, // 210 tc_e6299d16
  { 1, 52, 54, 1156, 1159 }, // 211 tc_f3fc3f83
  { 1, 62, 64, 1159, 1163 }, // 212 tc_4e2a5159
  { 1, 50, 52, 1163, 1166 }, // 213 tc_69b6dd20
  { 1, 50, 52, 1166, 1170 }, // 214 tc_d725e5b0
  { 1, 60, 62, 1170, 1173 }, // 215 tc_7c3f55c4
  { 1, 60, 62, 1173, 1177 }, // 216 tc_d98f4d63
  { 1, 64, 66, 0, 0 }, // 217 tc_e5053c8f
  { 1, 64, 66, 1177, 1178 }, // 218 tc_cedf314b
  { 1, 62, 64, 1178, 1183 }, // 219 tc_cbf6d1dc
  { 1, 60, 62, 1183, 1187 }, // 220 tc_7e9f581b
  { 1, 60, 62, 1187, 1192 }, // 221 tc_41f99e1c
  { 1, 52, 54, 1192, 1195 }, // 222 tc_bf142ae2
  { 1, 58, 60, 1195, 1198 }, // 223 tc_9b9642a1
  { 1, 44, 46, 1198, 1200 }, // 224 tc_644584f8
  { 1, 44, 46, 1200, 1204 }, // 225 tc_316c637c
  { 1, 62, 64, 1204, 1206 }, // 226 tc_d7bea0ec
  { 1, 62, 64, 1206, 1209 }, // 227 tc_72ad7b54
  { 1, 64, 66, 1209, 1210 }, // 228 tc_b77635b4
  { 1, 64, 66, 1210, 1212 }, // 229 tc_28978789
  { 1, 23, 24, 0, 0 }, // 230 tc_ef2676fd
  { 1, 21, 22, 0, 0 }, // 231 tc_bcf0e36e
  { 1, 23, 24, 1212, 1213 }, // 232 tc_30665cb0
  { 1, 23, 24, 1213, 1214 }, // 233 tc_34e882a4
  { 1, 23, 24, 1214, 1216 }, // 234 tc_ef0ebaaa
  { 1, 24, 25, 1216, 1217 }, // 235 tc_049dfb74
  { 1, 24, 25, 0, 0 }, // 236 tc_d267fa19
  { 1, 23, 24, 1217, 1219 }, // 237 tc_f4608adc
  { 1, 21, 22, 1219, 1220 }, // 238 tc_4997da4a
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 66, 67, 1220, 1222 }, // 1 tc_94e6ffd9
  { 1, 67, 68, 1222, 1225 }, // 2 tc_548f402d
  { 1, 66, 67, 1225, 1228 }, // 3 tc_bd16579e
  { 1, 66, 67, 1228, 1231 }, // 4 tc_47ab9233
  { 1, 66, 67, 1231, 1234 }, // 5 tc_7ca2ea10
  { 1, 66, 67, 1234, 1237 }, // 6 tc_9c18c9a5
  { 1, 67, 68, 1237, 1240 }, // 7 tc_b0f50e3c
  { 1, 67, 68, 1240, 1242 }, // 8 tc_f16d5b17
  { 1, 67, 68, 1242, 1245 }, // 9 PSEUDO
  { 1, 66, 67, 1245, 1247 }, // 10 tc_b86c7e8b
  { 1, 67, 68, 0, 0 }, // 11 tc_e2c31426
  { 1, 67, 68, 1247, 1251 }, // 12 tc_1b6011fb
  { 1, 67, 68, 1251, 1255 }, // 13 tc_28d296df
  { 1, 67, 68, 1255, 1258 }, // 14 tc_511f28f6
  { 1, 67, 68, 1258, 1261 }, // 15 tc_76c4c5ef
  { 1, 68, 69, 1261, 1263 }, // 16 tc_3b4892c6
  { 1, 67, 68, 1263, 1266 }, // 17 tc_b08be45e
  { 1, 68, 69, 1266, 1268 }, // 18 tc_82f0f122
  { 1, 66, 67, 1268, 1271 }, // 19 tc_cd321066
  { 1, 66, 67, 1271, 1274 }, // 20 tc_63cd9d2d
  { 1, 66, 67, 1274, 1277 }, // 21 tc_37326008
  { 1, 66, 67, 1277, 1280 }, // 22 tc_c58f771a
  { 1, 66, 67, 1280, 1283 }, // 23 tc_8c8041e6
  { 1, 66, 67, 1283, 1287 }, // 24 tc_8cb685d9
  { 1, 66, 67, 1287, 1292 }, // 25 tc_a87879e8
  { 1, 66, 67, 1292, 1295 }, // 26 tc_5fa2857c
  { 1, 67, 68, 1295, 1296 }, // 27 tc_9a13af9d
  { 1, 66, 67, 1296, 1299 }, // 28 tc_e2c08bb4
  { 1, 66, 67, 1299, 1303 }, // 29 tc_2aaab1e0
  { 1, 66, 67, 1303, 1308 }, // 30 tc_ae0722f7
  { 1, 66, 67, 1308, 1312 }, // 31 tc_583510c7
  { 1, 66, 67, 1312, 1314 }, // 32 tc_81a23d44
  { 1, 66, 67, 1314, 1317 }, // 33 tc_d63b71d1
  { 1, 67, 68, 1317, 1320 }, // 34 tc_5fe9fcd0
  { 1, 67, 68, 1320, 1323 }, // 35 tc_9df8b0dc
  { 1, 66, 67, 1323, 1325 }, // 36 tc_47f0b7ad
  { 1, 66, 67, 1325, 1329 }, // 37 tc_d1b5a4b6
  { 1, 68, 69, 1329, 1331 }, // 38 tc_1fe8323c
  { 1, 66, 67, 1331, 1335 }, // 39 tc_43068634
  { 1, 66, 67, 1335, 1336 }, // 40 tc_639d93ee
  { 1, 69, 70, 1336, 1338 }, // 41 LD_tc_ld_SLOT01
  { 1, 70, 71, 1338, 1341 }, // 42 DUPLEX
  { 1, 71, 72, 1341, 1342 }, // 43 tc_b08b653e
  { 1, 72, 73, 1342, 1343 }, // 44 tc_ENDLOOP
  { 1, 66, 67, 1343, 1345 }, // 45 tc_e836c161
  { 1, 66, 67, 1345, 1347 }, // 46 tc_485bb57c
  { 1, 66, 67, 1347, 1350 }, // 47 tc_3bea1824
  { 1, 66, 67, 1350, 1354 }, // 48 tc_2d1e6f5c
  { 1, 66, 67, 1354, 1359 }, // 49 tc_2e55aa16
  { 1, 66, 67, 1359, 1362 }, // 50 tc_f1aa2cdb
  { 1, 66, 67, 1362, 1365 }, // 51 tc_f1240c08
  { 1, 66, 67, 1365, 1369 }, // 52 tc_09c86199
  { 1, 66, 67, 1369, 1371 }, // 53 tc_0767081f
  { 1, 71, 72, 1371, 1372 }, // 54 tc_ecfaae86
  { 1, 71, 72, 1372, 1374 }, // 55 tc_84630363
  { 1, 67, 68, 0, 0 }, // 56 tc_aad55963
  { 1, 67, 68, 1374, 1375 }, // 57 tc_a333d2a9
  { 1, 67, 68, 1375, 1377 }, // 58 tc_1b834fe7
  { 1, 67, 68, 1377, 1379 }, // 59 tc_537e2013
  { 1, 67, 68, 1379, 1381 }, // 60 tc_b5bfaa60
  { 1, 71, 72, 1381, 1383 }, // 61 tc_07ac815d
  { 1, 71, 72, 1383, 1385 }, // 62 tc_1f9668cc
  { 1, 71, 72, 1385, 1387 }, // 63 tc_a1fb80e1
  { 1, 68, 69, 1387, 1389 }, // 64 tc_b324366f
  { 1, 68, 69, 1389, 1391 }, // 65 tc_1000eb10
  { 1, 68, 69, 1391, 1393 }, // 66 tc_f055fbb6
  { 1, 71, 72, 1393, 1394 }, // 67 tc_b189ad4c
  { 1, 68, 69, 1394, 1396 }, // 68 tc_feb4974b
  { 1, 68, 69, 1396, 1398 }, // 69 tc_d6a805a8
  { 1, 71, 72, 1398, 1399 }, // 70 tc_cbe45117
  { 1, 70, 71, 1399, 1402 }, // 71 tc_580a779c
  { 1, 67, 68, 1402, 1405 }, // 72 tc_92d1833c
  { 1, 70, 71, 1405, 1408 }, // 73 tc_09faec3b
  { 1, 67, 68, 1408, 1411 }, // 74 tc_d108a090
  { 1, 70, 71, 1411, 1414 }, // 75 tc_3e61d314
  { 1, 66, 67, 1414, 1417 }, // 76 tc_1e062b18
  { 1, 70, 71, 1417, 1419 }, // 77 tc_dbe218dd
  { 1, 67, 68, 1419, 1421 }, // 78 tc_eb07ef6f
  { 1, 69, 70, 1421, 1423 }, // 79 tc_c1dbc916
  { 1, 69, 70, 1423, 1427 }, // 80 tc_14da557c
  { 1, 69, 70, 1427, 1432 }, // 81 tc_ae762521
  { 1, 69, 70, 1432, 1438 }, // 82 tc_d2a33af5
  { 1, 69, 70, 1438, 1441 }, // 83 tc_bf6fa601
  { 1, 69, 70, 1441, 1445 }, // 84 tc_65dc7cc4
  { 1, 69, 70, 1445, 1450 }, // 85 tc_3eab77bd
  { 1, 69, 70, 1450, 1452 }, // 86 tc_70cabf66
  { 1, 70, 71, 1452, 1454 }, // 87 tc_29c14515
  { 1, 69, 70, 1454, 1459 }, // 88 tc_e578178f
  { 1, 70, 71, 1459, 1462 }, // 89 tc_a9c993d9
  { 1, 70, 71, 1462, 1465 }, // 90 tc_da79106e
  { 1, 69, 70, 1465, 1469 }, // 91 tc_261d9b78
  { 1, 69, 70, 1469, 1474 }, // 92 tc_baccf077
  { 1, 69, 70, 1474, 1477 }, // 93 tc_b5f5a094
  { 1, 69, 70, 1477, 1481 }, // 94 tc_7d9a56cd
  { 1, 69, 70, 1481, 1485 }, // 95 tc_5625c6c1
  { 1, 69, 70, 1485, 1488 }, // 96 tc_136c4786
  { 1, 69, 70, 1488, 1493 }, // 97 tc_9dafb7d3
  { 1, 69, 70, 1493, 1498 }, // 98 tc_128719e8
  { 1, 70, 71, 1498, 1500 }, // 99 tc_dcfee7ae
  { 1, 70, 71, 1500, 1503 }, // 100 tc_9ce7a5ab
  { 1, 70, 71, 1503, 1506 }, // 101 tc_3993c58b
  { 1, 66, 67, 1506, 1510 }, // 102 tc_c0cd91a8
  { 1, 66, 67, 1510, 1514 }, // 103 tc_a12a5971
  { 1, 66, 67, 1514, 1517 }, // 104 tc_ae2c2dc2
  { 1, 66, 67, 1517, 1521 }, // 105 tc_3c10f809
  { 1, 66, 67, 1521, 1525 }, // 106 tc_69bb508b
  { 1, 66, 67, 1525, 1528 }, // 107 tc_faab1248
  { 1, 69, 70, 1528, 1530 }, // 108 tc_c14739d5
  { 1, 70, 71, 1530, 1532 }, // 109 tc_9e86015f
  { 1, 73, 76, 1532, 1535 }, // 110 tc_b712833a
  { 1, 76, 80, 1535, 1538 }, // 111 tc_35e92f8e
  { 1, 80, 82, 1538, 1541 }, // 112 PSEUDOM
  { 1, 82, 84, 1541, 1544 }, // 113 tc_b06ab583
  { 1, 84, 87, 1544, 1547 }, // 114 tc_e3748cdf
  { 1, 87, 91, 1547, 1550 }, // 115 tc_354299ad
  { 1, 91, 93, 1550, 1554 }, // 116 tc_2171ebae
  { 1, 66, 67, 1554, 1558 }, // 117 tc_090485bb
  { 1, 70, 71, 1558, 1561 }, // 118 tc_0cb867f2
  { 1, 66, 67, 1561, 1563 }, // 119 tc_ab1b5e74
  { 1, 66, 67, 1563, 1566 }, // 120 tc_5d806107
  { 1, 66, 67, 1566, 1569 }, // 121 tc_87601822
  { 1, 66, 67, 1569, 1574 }, // 122 tc_d95f4e98
  { 1, 69, 70, 1574, 1578 }, // 123 tc_3d905451
  { 1, 69, 70, 1578, 1583 }, // 124 tc_9b73d261
  { 1, 69, 70, 1583, 1588 }, // 125 tc_7675c0e9
  { 1, 70, 71, 1588, 1592 }, // 126 tc_9da3628f
  { 1, 70, 71, 1592, 1597 }, // 127 tc_e2480a7f
  { 1, 70, 71, 1597, 1602 }, // 128 tc_8fab9ac3
  { 1, 69, 70, 1602, 1605 }, // 129 tc_53ee6546
  { 1, 69, 70, 1605, 1609 }, // 130 tc_20a8e109
  { 1, 69, 70, 1609, 1614 }, // 131 tc_251c87b2
  { 1, 70, 71, 1614, 1617 }, // 132 tc_6c576d46
  { 1, 70, 71, 1617, 1621 }, // 133 tc_c8f9a6f6
  { 1, 70, 71, 1621, 1626 }, // 134 tc_9c68db63
  { 1, 70, 71, 1626, 1629 }, // 135 tc_7d01cbdc
  { 1, 66, 67, 1629, 1631 }, // 136 tc_88fa2da6
  { 1, 69, 70, 1631, 1634 }, // 137 tc_c85212ca
  { 1, 69, 70, 1634, 1639 }, // 138 tc_7bc567a7
  { 1, 69, 70, 1639, 1642 }, // 139 tc_336e698c
  { 1, 69, 70, 1642, 1647 }, // 140 tc_7639d4b0
  { 1, 70, 71, 1647, 1650 }, // 141 tc_2c8fe5ae
  { 1, 70, 71, 1650, 1655 }, // 142 tc_77781686
  { 1, 70, 71, 1655, 1658 }, // 143 tc_7986ba30
  { 1, 70, 71, 1658, 1663 }, // 144 tc_8def9c57
  { 1, 69, 70, 1663, 1666 }, // 145 tc_fcee8723
  { 1, 69, 70, 1666, 1670 }, // 146 tc_1e69aa99
  { 1, 69, 70, 1670, 1674 }, // 147 tc_8f0a6bad
  { 1, 69, 70, 1674, 1678 }, // 148 tc_45631a8d
  { 1, 69, 70, 1678, 1682 }, // 149 tc_a4567c39
  { 1, 70, 71, 1682, 1686 }, // 150 tc_be995eaf
  { 1, 70, 71, 1686, 1690 }, // 151 tc_210b2456
  { 1, 66, 67, 1690, 1694 }, // 152 tc_6264c5e0
  { 1, 66, 67, 1694, 1699 }, // 153 tc_bc5561d8
  { 1, 66, 67, 1699, 1701 }, // 154 tc_ca280e8b
  { 1, 66, 67, 1701, 1704 }, // 155 tc_9f518242
  { 1, 66, 67, 1704, 1708 }, // 156 tc_e17ce9ad
  { 1, 66, 67, 1708, 1710 }, // 157 tc_78b3c689
  { 1, 69, 70, 1710, 1713 }, // 158 tc_821c4233
  { 1, 69, 70, 1713, 1715 }, // 159 tc_d2609065
  { 1, 69, 70, 1715, 1716 }, // 160 tc_7c2dcd4d
  { 1, 69, 70, 1716, 1717 }, // 161 tc_f26aa619
  { 1, 69, 70, 1717, 1719 }, // 162 tc_e8c7a357
  { 1, 69, 70, 0, 0 }, // 163 tc_86442910
  { 1, 70, 71, 0, 0 }, // 164 tc_35fb9d13
  { 1, 70, 71, 0, 0 }, // 165 tc_95c54f8b
  { 1, 70, 71, 1719, 1720 }, // 166 tc_f027ebe9
  { 1, 69, 70, 1720, 1722 }, // 167 tc_6c52d277
  { 1, 69, 70, 1722, 1725 }, // 168 ST_tc_st_SLOT01
  { 1, 93, 95, 1725, 1728 }, // 169 tc_9777e6bf
  { 1, 95, 97, 1728, 1732 }, // 170 CVI_VA
  { 1, 97, 99, 1732, 1734 }, // 171 tc_6b78cf13
  { 1, 91, 93, 1734, 1737 }, // 172 tc_97c165b9
  { 1, 82, 84, 1737, 1739 }, // 173 tc_71337255
  { 1, 99, 101, 1739, 1741 }, // 174 tc_4105d6b5
  { 1, 76, 80, 1741, 1745 }, // 175 tc_4fd8566e
  { 1, 73, 76, 1745, 1749 }, // 176 tc_5cbf490b
  { 1, 73, 76, 1749, 1754 }, // 177 tc_da979fb3
  { 1, 73, 76, 1754, 1758 }, // 178 tc_eb669007
  { 1, 101, 103, 1758, 1761 }, // 179 tc_77a4c701
  { 1, 101, 103, 1761, 1765 }, // 180 tc_51cd3aab
  { 1, 101, 103, 1765, 1770 }, // 181 tc_38208312
  { 1, 101, 103, 1770, 1774 }, // 182 tc_9c267309
  { 1, 87, 91, 1774, 1778 }, // 183 tc_d642eff3
  { 1, 87, 91, 1778, 1783 }, // 184 tc_6fd9ad30
  { 1, 87, 91, 1783, 1787 }, // 185 tc_7fa82b08
  { 1, 103, 105, 1787, 1790 }, // 186 tc_1b93bdc6
  { 1, 103, 105, 1790, 1794 }, // 187 tc_d5090f3e
  { 1, 103, 105, 1794, 1799 }, // 188 tc_8b6a873f
  { 1, 103, 105, 1799, 1803 }, // 189 tc_db5b9e2f
  { 1, 84, 87, 1803, 1807 }, // 190 tc_85d237e3
  { 1, 84, 87, 1807, 1812 }, // 191 tc_0317c6ca
  { 1, 84, 87, 1812, 1816 }, // 192 tc_aedb9f9e
  { 1, 84, 87, 1816, 1821 }, // 193 tc_99093773
  { 1, 84, 87, 1821, 1825 }, // 194 tc_a4c9df3b
  { 1, 97, 99, 1825, 1828 }, // 195 tc_908a4c8c
  { 1, 82, 84, 1828, 1831 }, // 196 tc_bbaf280e
  { 1, 82, 84, 1831, 1835 }, // 197 tc_a3127e12
  { 1, 82, 84, 1835, 1840 }, // 198 tc_5a9fc4ec
  { 1, 105, 107, 1840, 1843 }, // 199 tc_45453b98
  { 1, 107, 109, 1843, 1846 }, // 200 tc_eda67dcd
  { 1, 107, 109, 1846, 1850 }, // 201 tc_e172d86a
  { 1, 99, 101, 1850, 1854 }, // 202 tc_c4b515c5
  { 1, 97, 99, 1854, 1857 }, // 203 tc_e231aa4f
  { 1, 97, 99, 1857, 1861 }, // 204 tc_9311da3f
  { 1, 105, 107, 1861, 1864 }, // 205 tc_41f4b64e
  { 1, 105, 107, 1864, 1868 }, // 206 tc_c00bf9c9
  { 1, 105, 107, 1868, 1872 }, // 207 tc_7fa8b40f
  { 1, 105, 107, 1872, 1874 }, // 208 tc_d2cb81ea
  { 1, 109, 111, 1874, 1879 }, // 209 tc_5c120602
  { 1, 99, 101, 1879, 1881 }, // 210 tc_e6299d16
  { 1, 99, 101, 1881, 1884 }, // 211 tc_f3fc3f83
  { 1, 109, 111, 1884, 1888 }, // 212 tc_4e2a5159
  { 1, 97, 99, 1888, 1891 }, // 213 tc_69b6dd20
  { 1, 97, 99, 1891, 1895 }, // 214 tc_d725e5b0
  { 1, 107, 109, 1895, 1898 }, // 215 tc_7c3f55c4
  { 1, 107, 109, 1898, 1902 }, // 216 tc_d98f4d63
  { 1, 111, 113, 0, 0 }, // 217 tc_e5053c8f
  { 1, 111, 113, 1902, 1903 }, // 218 tc_cedf314b
  { 1, 109, 111, 1903, 1908 }, // 219 tc_cbf6d1dc
  { 1, 107, 109, 1908, 1912 }, // 220 tc_7e9f581b
  { 1, 107, 109, 1912, 1917 }, // 221 tc_41f99e1c
  { 1, 99, 101, 1917, 1920 }, // 222 tc_bf142ae2
  { 1, 82, 84, 1920, 1923 }, // 223 tc_9b9642a1
  { 1, 91, 93, 1923, 1925 }, // 224 tc_644584f8
  { 1, 91, 93, 1925, 1929 }, // 225 tc_316c637c
  { 1, 109, 111, 1929, 1931 }, // 226 tc_d7bea0ec
  { 1, 109, 111, 1931, 1934 }, // 227 tc_72ad7b54
  { 1, 111, 113, 1934, 1935 }, // 228 tc_b77635b4
  { 1, 111, 113, 1935, 1937 }, // 229 tc_28978789
  { 1, 70, 71, 0, 0 }, // 230 tc_ef2676fd
  { 1, 68, 69, 0, 0 }, // 231 tc_bcf0e36e
  { 1, 70, 71, 1937, 1938 }, // 232 tc_30665cb0
  { 1, 70, 71, 1938, 1939 }, // 233 tc_34e882a4
  { 1, 70, 71, 1939, 1941 }, // 234 tc_ef0ebaaa
  { 1, 71, 72, 1941, 1942 }, // 235 tc_049dfb74
  { 1, 71, 72, 0, 0 }, // 236 tc_d267fa19
  { 1, 70, 71, 1942, 1944 }, // 237 tc_f4608adc
  { 1, 68, 69, 1944, 1945 }, // 238 tc_4997da4a
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel HexagonModelV4 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 },
  { "hexagonv55", (const void *)&HexagonModelV55 },
  { "hexagonv60", (const void *)&HexagonModelV60 },
  { "hexagonv62", (const void *)&HexagonModelV62 }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV4] && HexagonArchVersion < V4) HexagonArchVersion = V4;
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < V5) HexagonArchVersion = V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < V55) HexagonArchVersion = V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < V60) HexagonArchVersion = V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < V62) HexagonArchVersion = V62;
  if (Bits[Hexagon::ExtensionHVX]) UseHVXOps = true;
  if (Bits[Hexagon::ExtensionHVXDbl]) UseHVXDblOps = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 8), makeArrayRef(HexagonSubTypeKV, 5), 
                        HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

