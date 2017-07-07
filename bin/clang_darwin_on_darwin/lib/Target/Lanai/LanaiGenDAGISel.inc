/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Lanai target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
void SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*33 cases */, 1|128,2/*257*/, TARGET_VAL(ISD::LOAD),// ->262
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'ld' chained node
/*7*/         OPC_RecordChild1, // #1 = $src
/*8*/         OPC_CheckChild1Type, MVT::i32,
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 32, /*->48*/ // 9 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_load
/*18*/          OPC_Scope, 13, /*->33*/ // 2 children in Scope
/*20*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRi:$src #2 #3 #4
/*23*/            OPC_EmitMergeInputChains1_0,
/*24*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RI:i32 ADDRri:i32:$src)
/*33*/          /*Scope*/ 13, /*->47*/
/*34*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*37*/            OPC_EmitMergeInputChains1_0,
/*38*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RR:i32 ADDRrr:i32:$src)
/*47*/          0, /*End of Scope*/
/*48*/        /*Scope*/ 52, /*->101*/
/*49*/          OPC_CheckPredicate, 2, // Predicate_zextload
/*51*/          OPC_Scope, 15, /*->68*/ // 3 children in Scope
/*53*/            OPC_CheckPredicate, 3, // Predicate_zextloadi32
/*55*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*58*/            OPC_EmitMergeInputChains1_0,
/*59*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDWz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LDWz_RR:i32 ADDRrr:i32:$src)
/*68*/          /*Scope*/ 15, /*->84*/
/*69*/            OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*71*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*74*/            OPC_EmitMergeInputChains1_0,
/*75*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LDHz_RR:i32 ADDRrr:i32:$src)
/*84*/          /*Scope*/ 15, /*->100*/
/*85*/            OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*87*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*90*/            OPC_EmitMergeInputChains1_0,
/*91*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LDBz_RR:i32 ADDRrr:i32:$src)
/*100*/         0, /*End of Scope*/
/*101*/       /*Scope*/ 36, /*->138*/
/*102*/         OPC_CheckPredicate, 6, // Predicate_sextload
/*104*/         OPC_Scope, 15, /*->121*/ // 2 children in Scope
/*106*/           OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*108*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*111*/           OPC_EmitMergeInputChains1_0,
/*112*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LDHs_RR:i32 ADDRrr:i32:$src)
/*121*/         /*Scope*/ 15, /*->137*/
/*122*/           OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*124*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*127*/           OPC_EmitMergeInputChains1_0,
/*128*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LDBs_RR:i32 ADDRrr:i32:$src)
/*137*/         0, /*End of Scope*/
/*138*/       /*Scope*/ 17, /*->156*/
/*139*/         OPC_CheckPredicate, 2, // Predicate_zextload
/*141*/         OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*143*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*146*/         OPC_EmitMergeInputChains1_0,
/*147*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LDHz_RI:i32 ADDRspls:i32:$src)
/*156*/       /*Scope*/ 17, /*->174*/
/*157*/         OPC_CheckPredicate, 6, // Predicate_sextload
/*159*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*161*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*164*/         OPC_EmitMergeInputChains1_0,
/*165*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LDHs_RI:i32 ADDRspls:i32:$src)
/*174*/       /*Scope*/ 17, /*->192*/
/*175*/         OPC_CheckPredicate, 2, // Predicate_zextload
/*177*/         OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*179*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*182*/         OPC_EmitMergeInputChains1_0,
/*183*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LDBz_RI:i32 ADDRspls:i32:$src)
/*192*/       /*Scope*/ 17, /*->210*/
/*193*/         OPC_CheckPredicate, 6, // Predicate_sextload
/*195*/         OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*197*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*200*/         OPC_EmitMergeInputChains1_0,
/*201*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LDBs_RI:i32 ADDRspls:i32:$src)
/*210*/       /*Scope*/ 36, /*->247*/
/*211*/         OPC_CheckPredicate, 7, // Predicate_extload
/*213*/         OPC_Scope, 15, /*->230*/ // 2 children in Scope
/*215*/           OPC_CheckPredicate, 5, // Predicate_extloadi8
/*217*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*220*/           OPC_EmitMergeInputChains1_0,
/*221*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LDBz_RI:i32 ADDRspls:i32:$src)
/*230*/         /*Scope*/ 15, /*->246*/
/*231*/           OPC_CheckPredicate, 4, // Predicate_extloadi16
/*233*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*236*/           OPC_EmitMergeInputChains1_0,
/*237*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LDHz_RI:i32 ADDRspls:i32:$src)
/*246*/         0, /*End of Scope*/
/*247*/       /*Scope*/ 13, /*->261*/
/*248*/         OPC_CheckPredicate, 1, // Predicate_load
/*250*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrSls:$src #2
/*253*/         OPC_EmitMergeInputChains1_0,
/*254*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 ADDRsls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDADDR:i32 ADDRsls:i32:$src)
/*261*/       0, /*End of Scope*/
/*262*/     /*SwitchOpcode*/ 0|128,1/*128*/, TARGET_VAL(ISD::STORE),// ->394
/*266*/       OPC_RecordMemRef,
/*267*/       OPC_RecordNode, // #0 = 'st' chained node
/*268*/       OPC_RecordChild1, // #1 = $Rd
/*269*/       OPC_CheckChild1Type, MVT::i32,
/*271*/       OPC_RecordChild2, // #2 = $dst
/*272*/       OPC_CheckChild2Type, MVT::i32,
/*274*/       OPC_CheckPredicate, 8, // Predicate_unindexedstore
/*276*/       OPC_Scope, 32, /*->310*/ // 3 children in Scope
/*278*/         OPC_CheckPredicate, 9, // Predicate_store
/*280*/         OPC_Scope, 13, /*->295*/ // 2 children in Scope
/*282*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*285*/           OPC_EmitMergeInputChains1_0,
/*286*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRrr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RR GPR:i32:$Rd, ADDRrr:i32:$dst)
/*295*/         /*Scope*/ 13, /*->309*/
/*296*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRi:$dst #3 #4 #5
/*299*/           OPC_EmitMergeInputChains1_0,
/*300*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRri:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RI GPR:i32:$Rd, ADDRri:i32:$dst)
/*309*/         0, /*End of Scope*/
/*310*/       /*Scope*/ 68, /*->379*/
/*311*/         OPC_CheckPredicate, 10, // Predicate_truncstore
/*313*/         OPC_Scope, 15, /*->330*/ // 4 children in Scope
/*315*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*317*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*320*/           OPC_EmitMergeInputChains1_0,
/*321*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRrr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RR GPR:i32:$Rd, ADDRrr:i32:$dst)
/*330*/         /*Scope*/ 15, /*->346*/
/*331*/           OPC_CheckPredicate, 12, // Predicate_truncstorei8
/*333*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*336*/           OPC_EmitMergeInputChains1_0,
/*337*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRrr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RR GPR:i32:$Rd, ADDRrr:i32:$dst)
/*346*/         /*Scope*/ 15, /*->362*/
/*347*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*349*/           OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*352*/           OPC_EmitMergeInputChains1_0,
/*353*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRspls:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RI GPR:i32:$Rd, ADDRspls:i32:$dst)
/*362*/         /*Scope*/ 15, /*->378*/
/*363*/           OPC_CheckPredicate, 12, // Predicate_truncstorei8
/*365*/           OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*368*/           OPC_EmitMergeInputChains1_0,
/*369*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRspls:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RI GPR:i32:$Rd, ADDRspls:i32:$dst)
/*378*/         0, /*End of Scope*/
/*379*/       /*Scope*/ 13, /*->393*/
/*380*/         OPC_CheckPredicate, 9, // Predicate_store
/*382*/         OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrSls:$dst #3
/*385*/         OPC_EmitMergeInputChains1_0,
/*386*/         OPC_MorphNodeTo0, TARGET_VAL(Lanai::STADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#Ops*/, 1, 3, 
                // Src: (st GPR:i32:$Rd, ADDRsls:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                // Dst: (STADDR GPR:i32:$Rd, ADDRsls:i32:$dst)
/*393*/       0, /*End of Scope*/
/*394*/     /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->419
/*397*/       OPC_RecordNode, // #0 = 'CallSeqStart' chained node
/*398*/       OPC_RecordChild1, // #1 = $amt1
/*399*/       OPC_MoveChild1,
/*400*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*403*/       OPC_MoveParent,
/*404*/       OPC_RecordChild2, // #2 = $amt2
/*405*/       OPC_MoveChild2,
/*406*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*409*/       OPC_MoveParent,
/*410*/       OPC_EmitMergeInputChains1_0,
/*411*/       OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqStart (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt1, (timm:i32):$amt2)
/*419*/     /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->445
/*422*/       OPC_RecordNode, // #0 = 'CallSeqEnd' chained node
/*423*/       OPC_CaptureGlueInput,
/*424*/       OPC_RecordChild1, // #1 = $amt1
/*425*/       OPC_MoveChild1,
/*426*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*429*/       OPC_MoveParent,
/*430*/       OPC_RecordChild2, // #2 = $amt2
/*431*/       OPC_MoveChild2,
/*432*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*435*/       OPC_MoveParent,
/*436*/       OPC_EmitMergeInputChains1_0,
/*437*/       OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqEnd (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
/*445*/     /*SwitchOpcode*/ 94|128,2/*350*/, TARGET_VAL(ISD::OR),// ->799
/*449*/       OPC_Scope, 30|128,1/*158*/, /*->610*/ // 3 children in Scope
/*452*/         OPC_RecordChild0, // #0 = $hi
/*453*/         OPC_MoveChild1,
/*454*/         OPC_SwitchOpcode /*2 cases */, 69, TARGET_VAL(LanaiISD::LO),// ->527
/*458*/           OPC_RecordChild0, // #1 = $lo
/*459*/           OPC_MoveChild0,
/*460*/           OPC_SwitchOpcode /*5 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->474
/*464*/             OPC_MoveParent,
/*465*/             OPC_MoveParent,
/*466*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tglobaladdr:i32):$lo)
/*474*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->487
/*477*/             OPC_MoveParent,
/*478*/             OPC_MoveParent,
/*479*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (texternalsym:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (texternalsym:i32):$lo)
/*487*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->500
/*490*/             OPC_MoveParent,
/*491*/             OPC_MoveParent,
/*492*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tblockaddress:i32):$lo)
/*500*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->513
/*503*/             OPC_MoveParent,
/*504*/             OPC_MoveParent,
/*505*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tjumptable:i32):$lo)
/*513*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->526
/*516*/             OPC_MoveParent,
/*517*/             OPC_MoveParent,
/*518*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tconstpool:i32):$lo)
/*526*/           0, // EndSwitchOpcode
/*527*/         /*SwitchOpcode*/ 79, TARGET_VAL(LanaiISD::SMALL),// ->609
/*530*/           OPC_RecordChild0, // #1 = $small
/*531*/           OPC_MoveChild0,
/*532*/           OPC_SwitchOpcode /*5 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->548
/*536*/             OPC_MoveParent,
/*537*/             OPC_MoveParent,
/*538*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*541*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tglobaladdr:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tglobaladdr:i32):$small)
/*548*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->563
/*551*/             OPC_MoveParent,
/*552*/             OPC_MoveParent,
/*553*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*556*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (texternalsym:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (texternalsym:i32):$small)
/*563*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->578
/*566*/             OPC_MoveParent,
/*567*/             OPC_MoveParent,
/*568*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*571*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tblockaddress:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tblockaddress:i32):$small)
/*578*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetJumpTable),// ->593
/*581*/             OPC_MoveParent,
/*582*/             OPC_MoveParent,
/*583*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*586*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tjumptable:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tjumptable:i32):$small)
/*593*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->608
/*596*/             OPC_MoveParent,
/*597*/             OPC_MoveParent,
/*598*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*601*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tconstpool:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tconstpool:i32):$small)
/*608*/           0, // EndSwitchOpcode
/*609*/         0, // EndSwitchOpcode
/*610*/       /*Scope*/ 78, /*->689*/
/*611*/         OPC_MoveChild0,
/*612*/         OPC_CheckOpcode, TARGET_VAL(LanaiISD::LO),
/*615*/         OPC_RecordChild0, // #0 = $lo
/*616*/         OPC_MoveChild0,
/*617*/         OPC_SwitchOpcode /*5 cases */, 11, TARGET_VAL(ISD::TargetGlobalAddress),// ->632
/*621*/           OPC_MoveParent,
/*622*/           OPC_MoveParent,
/*623*/           OPC_RecordChild1, // #1 = $hi
/*624*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tglobaladdr:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tglobaladdr:i32):$lo)
/*632*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetExternalSymbol),// ->646
/*635*/           OPC_MoveParent,
/*636*/           OPC_MoveParent,
/*637*/           OPC_RecordChild1, // #1 = $hi
/*638*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (texternalsym:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (texternalsym:i32):$lo)
/*646*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetBlockAddress),// ->660
/*649*/           OPC_MoveParent,
/*650*/           OPC_MoveParent,
/*651*/           OPC_RecordChild1, // #1 = $hi
/*652*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tblockaddress:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tblockaddress:i32):$lo)
/*660*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetJumpTable),// ->674
/*663*/           OPC_MoveParent,
/*664*/           OPC_MoveParent,
/*665*/           OPC_RecordChild1, // #1 = $hi
/*666*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tjumptable:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tjumptable:i32):$lo)
/*674*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetConstantPool),// ->688
/*677*/           OPC_MoveParent,
/*678*/           OPC_MoveParent,
/*679*/           OPC_RecordChild1, // #1 = $hi
/*680*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tconstpool:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tconstpool:i32):$lo)
/*688*/         0, // EndSwitchOpcode
/*689*/       /*Scope*/ 108, /*->798*/
/*690*/         OPC_RecordChild0, // #0 = $Rs1
/*691*/         OPC_RecordChild1, // #1 = $imm16
/*692*/         OPC_Scope, 76, /*->770*/ // 2 children in Scope
/*694*/           OPC_MoveChild1,
/*695*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*698*/           OPC_Scope, 16, /*->716*/ // 4 children in Scope
/*700*/             OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*702*/             OPC_MoveParent,
/*703*/             OPC_EmitConvertToTarget, 1,
/*705*/             OPC_EmitNodeXForm, 0, 2, // LO16
/*708*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*716*/           /*Scope*/ 16, /*->733*/
/*717*/             OPC_CheckPredicate, 14, // Predicate_i32hi16
/*719*/             OPC_MoveParent,
/*720*/             OPC_EmitConvertToTarget, 1,
/*722*/             OPC_EmitNodeXForm, 1, 2, // HI16
/*725*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_HI), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*733*/           /*Scope*/ 17, /*->751*/
/*734*/             OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*736*/             OPC_MoveParent,
/*737*/             OPC_EmitConvertToTarget, 1,
/*739*/             OPC_EmitNodeXForm, 0, 2, // LO16
/*742*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_LO), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*751*/           /*Scope*/ 17, /*->769*/
/*752*/             OPC_CheckPredicate, 14, // Predicate_i32hi16
/*754*/             OPC_MoveParent,
/*755*/             OPC_EmitConvertToTarget, 1,
/*757*/             OPC_EmitNodeXForm, 1, 2, // HI16
/*760*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_HI), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*769*/           0, /*End of Scope*/
/*770*/         /*Scope*/ 26, /*->797*/
/*771*/           OPC_EmitInteger, MVT::i32, 0, 
/*774*/           OPC_Scope, 9, /*->785*/ // 2 children in Scope
/*776*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_R), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                    // Dst: (OR_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*785*/           /*Scope*/ 10, /*->796*/
/*786*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_R), 0,
                        MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                    // Dst: (OR_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*796*/           0, /*End of Scope*/
/*797*/         0, /*End of Scope*/
/*798*/       0, /*End of Scope*/
/*799*/     /*SwitchOpcode*/ 108, TARGET_VAL(ISD::AND),// ->910
/*802*/       OPC_RecordChild0, // #0 = $Rs1
/*803*/       OPC_RecordChild1, // #1 = $imm16
/*804*/       OPC_Scope, 76, /*->882*/ // 2 children in Scope
/*806*/         OPC_MoveChild1,
/*807*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*810*/         OPC_Scope, 16, /*->828*/ // 4 children in Scope
/*812*/           OPC_CheckPredicate, 15, // Predicate_i32lo16and
/*814*/           OPC_MoveParent,
/*815*/           OPC_EmitConvertToTarget, 1,
/*817*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*820*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (AND_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*828*/         /*Scope*/ 16, /*->845*/
/*829*/           OPC_CheckPredicate, 16, // Predicate_i32hi16and
/*831*/           OPC_MoveParent,
/*832*/           OPC_EmitConvertToTarget, 1,
/*834*/           OPC_EmitNodeXForm, 1, 2, // HI16
/*837*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (AND_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*845*/         /*Scope*/ 17, /*->863*/
/*846*/           OPC_CheckPredicate, 15, // Predicate_i32lo16and
/*848*/           OPC_MoveParent,
/*849*/           OPC_EmitConvertToTarget, 1,
/*851*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*854*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (AND_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*863*/         /*Scope*/ 17, /*->881*/
/*864*/           OPC_CheckPredicate, 16, // Predicate_i32hi16and
/*866*/           OPC_MoveParent,
/*867*/           OPC_EmitConvertToTarget, 1,
/*869*/           OPC_EmitNodeXForm, 1, 2, // HI16
/*872*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (AND_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*881*/         0, /*End of Scope*/
/*882*/       /*Scope*/ 26, /*->909*/
/*883*/         OPC_EmitInteger, MVT::i32, 0, 
/*886*/         OPC_Scope, 9, /*->897*/ // 2 children in Scope
/*888*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (AND_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*897*/         /*Scope*/ 10, /*->908*/
/*898*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (AND_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*908*/         0, /*End of Scope*/
/*909*/       0, /*End of Scope*/
/*910*/     /*SwitchOpcode*/ 108, TARGET_VAL(ISD::XOR),// ->1021
/*913*/       OPC_RecordChild0, // #0 = $Rs1
/*914*/       OPC_RecordChild1, // #1 = $imm16
/*915*/       OPC_Scope, 76, /*->993*/ // 2 children in Scope
/*917*/         OPC_MoveChild1,
/*918*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*921*/         OPC_Scope, 16, /*->939*/ // 4 children in Scope
/*923*/           OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*925*/           OPC_MoveParent,
/*926*/           OPC_EmitConvertToTarget, 1,
/*928*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*931*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*939*/         /*Scope*/ 16, /*->956*/
/*940*/           OPC_CheckPredicate, 14, // Predicate_i32hi16
/*942*/           OPC_MoveParent,
/*943*/           OPC_EmitConvertToTarget, 1,
/*945*/           OPC_EmitNodeXForm, 1, 2, // HI16
/*948*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*956*/         /*Scope*/ 17, /*->974*/
/*957*/           OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*959*/           OPC_MoveParent,
/*960*/           OPC_EmitConvertToTarget, 1,
/*962*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*965*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*974*/         /*Scope*/ 17, /*->992*/
/*975*/           OPC_CheckPredicate, 14, // Predicate_i32hi16
/*977*/           OPC_MoveParent,
/*978*/           OPC_EmitConvertToTarget, 1,
/*980*/           OPC_EmitNodeXForm, 1, 2, // HI16
/*983*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*992*/         0, /*End of Scope*/
/*993*/       /*Scope*/ 26, /*->1020*/
/*994*/         OPC_EmitInteger, MVT::i32, 0, 
/*997*/         OPC_Scope, 9, /*->1008*/ // 2 children in Scope
/*999*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (XOR_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1008*/        /*Scope*/ 10, /*->1019*/
/*1009*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (XOR_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1019*/        0, /*End of Scope*/
/*1020*/      0, /*End of Scope*/
/*1021*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADD),// ->1097
/*1024*/      OPC_RecordChild0, // #0 = $Rs1
/*1025*/      OPC_RecordChild1, // #1 = $imm
/*1026*/      OPC_Scope, 55, /*->1083*/ // 2 children in Scope
/*1028*/        OPC_MoveChild1,
/*1029*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1032*/        OPC_Scope, 16, /*->1050*/ // 3 children in Scope
/*1034*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1036*/          OPC_MoveParent,
/*1037*/          OPC_EmitConvertToTarget, 1,
/*1039*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1042*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1050*/        /*Scope*/ 16, /*->1067*/
/*1051*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1053*/          OPC_MoveParent,
/*1054*/          OPC_EmitConvertToTarget, 1,
/*1056*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1059*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1067*/        /*Scope*/ 14, /*->1082*/
/*1068*/          OPC_CheckPredicate, 17, // Predicate_i32neg16
/*1070*/          OPC_MoveParent,
/*1071*/          OPC_EmitNodeXForm, 2, 1, // NEG
/*1074*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1082*/        0, /*End of Scope*/
/*1083*/      /*Scope*/ 12, /*->1096*/
/*1084*/        OPC_EmitInteger, MVT::i32, 0, 
/*1087*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (ADD_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1096*/      0, /*End of Scope*/
/*1097*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUB),// ->1173
/*1100*/      OPC_RecordChild0, // #0 = $Rs1
/*1101*/      OPC_RecordChild1, // #1 = $imm
/*1102*/      OPC_Scope, 55, /*->1159*/ // 2 children in Scope
/*1104*/        OPC_MoveChild1,
/*1105*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1108*/        OPC_Scope, 16, /*->1126*/ // 3 children in Scope
/*1110*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1112*/          OPC_MoveParent,
/*1113*/          OPC_EmitConvertToTarget, 1,
/*1115*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1118*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1126*/        /*Scope*/ 16, /*->1143*/
/*1127*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1129*/          OPC_MoveParent,
/*1130*/          OPC_EmitConvertToTarget, 1,
/*1132*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1135*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1143*/        /*Scope*/ 14, /*->1158*/
/*1144*/          OPC_CheckPredicate, 17, // Predicate_i32neg16
/*1146*/          OPC_MoveParent,
/*1147*/          OPC_EmitNodeXForm, 2, 1, // NEG
/*1150*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1158*/        0, /*End of Scope*/
/*1159*/      /*Scope*/ 12, /*->1172*/
/*1160*/        OPC_EmitInteger, MVT::i32, 0, 
/*1163*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (sub:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SUB_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1172*/      0, /*End of Scope*/
/*1173*/    /*SwitchOpcode*/ 61, TARGET_VAL(ISD::ADDC),// ->1237
/*1176*/      OPC_RecordChild0, // #0 = $Rs1
/*1177*/      OPC_RecordChild1, // #1 = $imm
/*1178*/      OPC_Scope, 42, /*->1222*/ // 2 children in Scope
/*1180*/        OPC_MoveChild1,
/*1181*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1184*/        OPC_Scope, 17, /*->1203*/ // 2 children in Scope
/*1186*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1188*/          OPC_MoveParent,
/*1189*/          OPC_EmitConvertToTarget, 1,
/*1191*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1194*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1203*/        /*Scope*/ 17, /*->1221*/
/*1204*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1206*/          OPC_MoveParent,
/*1207*/          OPC_EmitConvertToTarget, 1,
/*1209*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1212*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1221*/        0, /*End of Scope*/
/*1222*/      /*Scope*/ 13, /*->1236*/
/*1223*/        OPC_EmitInteger, MVT::i32, 0, 
/*1226*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (addc:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (ADD_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1236*/      0, /*End of Scope*/
/*1237*/    /*SwitchOpcode*/ 61, TARGET_VAL(ISD::SUBC),// ->1301
/*1240*/      OPC_RecordChild0, // #0 = $Rs1
/*1241*/      OPC_RecordChild1, // #1 = $imm
/*1242*/      OPC_Scope, 42, /*->1286*/ // 2 children in Scope
/*1244*/        OPC_MoveChild1,
/*1245*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1248*/        OPC_Scope, 17, /*->1267*/ // 2 children in Scope
/*1250*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1252*/          OPC_MoveParent,
/*1253*/          OPC_EmitConvertToTarget, 1,
/*1255*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1258*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1267*/        /*Scope*/ 17, /*->1285*/
/*1268*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1270*/          OPC_MoveParent,
/*1271*/          OPC_EmitConvertToTarget, 1,
/*1273*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1276*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1285*/        0, /*End of Scope*/
/*1286*/      /*Scope*/ 13, /*->1300*/
/*1287*/        OPC_EmitInteger, MVT::i32, 0, 
/*1290*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (subc:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SUB_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1300*/      0, /*End of Scope*/
/*1301*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADDE),// ->1377
/*1304*/      OPC_CaptureGlueInput,
/*1305*/      OPC_RecordChild0, // #0 = $Rs1
/*1306*/      OPC_RecordChild1, // #1 = $imm
/*1307*/      OPC_Scope, 40, /*->1349*/ // 2 children in Scope
/*1309*/        OPC_MoveChild1,
/*1310*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1313*/        OPC_Scope, 16, /*->1331*/ // 2 children in Scope
/*1315*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1317*/          OPC_MoveParent,
/*1318*/          OPC_EmitConvertToTarget, 1,
/*1320*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1323*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1331*/        /*Scope*/ 16, /*->1348*/
/*1332*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1334*/          OPC_MoveParent,
/*1335*/          OPC_EmitConvertToTarget, 1,
/*1337*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1340*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1348*/        0, /*End of Scope*/
/*1349*/      /*Scope*/ 26, /*->1376*/
/*1350*/        OPC_EmitInteger, MVT::i32, 0, 
/*1353*/        OPC_Scope, 9, /*->1364*/ // 2 children in Scope
/*1355*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (ADDC_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1364*/        /*Scope*/ 10, /*->1375*/
/*1365*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADDC_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (ADDC_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1375*/        0, /*End of Scope*/
/*1376*/      0, /*End of Scope*/
/*1377*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUBE),// ->1453
/*1380*/      OPC_CaptureGlueInput,
/*1381*/      OPC_RecordChild0, // #0 = $Rs1
/*1382*/      OPC_RecordChild1, // #1 = $imm
/*1383*/      OPC_Scope, 40, /*->1425*/ // 2 children in Scope
/*1385*/        OPC_MoveChild1,
/*1386*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1389*/        OPC_Scope, 16, /*->1407*/ // 2 children in Scope
/*1391*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1393*/          OPC_MoveParent,
/*1394*/          OPC_EmitConvertToTarget, 1,
/*1396*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1399*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1407*/        /*Scope*/ 16, /*->1424*/
/*1408*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1410*/          OPC_MoveParent,
/*1411*/          OPC_EmitConvertToTarget, 1,
/*1413*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1416*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1424*/        0, /*End of Scope*/
/*1425*/      /*Scope*/ 26, /*->1452*/
/*1426*/        OPC_EmitInteger, MVT::i32, 0, 
/*1429*/        OPC_Scope, 9, /*->1440*/ // 2 children in Scope
/*1431*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (SUBB_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1440*/        /*Scope*/ 10, /*->1451*/
/*1441*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (SUBB_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1451*/        0, /*End of Scope*/
/*1452*/      0, /*End of Scope*/
/*1453*/    /*SwitchOpcode*/ 65, TARGET_VAL(LanaiISD::SUBBF),// ->1521
/*1456*/      OPC_CaptureGlueInput,
/*1457*/      OPC_RecordChild0, // #0 = $Rs1
/*1458*/      OPC_Scope, 43, /*->1503*/ // 2 children in Scope
/*1460*/        OPC_RecordChild1, // #1 = $imm
/*1461*/        OPC_MoveChild1,
/*1462*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1465*/        OPC_Scope, 17, /*->1484*/ // 2 children in Scope
/*1467*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1469*/          OPC_MoveParent,
/*1470*/          OPC_EmitConvertToTarget, 1,
/*1472*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1475*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1484*/        /*Scope*/ 17, /*->1502*/
/*1485*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1487*/          OPC_MoveParent,
/*1488*/          OPC_EmitConvertToTarget, 1,
/*1490*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1493*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1502*/        0, /*End of Scope*/
/*1503*/      /*Scope*/ 16, /*->1520*/
/*1504*/        OPC_CheckChild0Type, MVT::i32,
/*1506*/        OPC_RecordChild1, // #1 = $Rs2
/*1507*/        OPC_EmitInteger, MVT::i32, 0, 
/*1510*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (LanaiSubbF GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SUBB_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1520*/      0, /*End of Scope*/
/*1521*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SHL),// ->1559
/*1524*/      OPC_RecordChild0, // #0 = $Rs1
/*1525*/      OPC_RecordChild1, // #1 = $imm16
/*1526*/      OPC_Scope, 17, /*->1545*/ // 2 children in Scope
/*1528*/        OPC_MoveChild1,
/*1529*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1532*/        OPC_CheckPredicate, 18, // Predicate_immShift
/*1534*/        OPC_MoveParent,
/*1535*/        OPC_EmitConvertToTarget, 1,
/*1537*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_immShift>>:$imm16) - Complexity = 7
                // Dst: (SL_I:i32 GPR:i32:$Rs1, (imm:i32):$imm16)
/*1545*/      /*Scope*/ 12, /*->1558*/
/*1546*/        OPC_EmitInteger, MVT::i32, 0, 
/*1549*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SHL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (shl:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SHL_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1558*/      0, /*End of Scope*/
/*1559*/    /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRL),// ->1613
/*1562*/      OPC_RecordChild0, // #0 = $Rs1
/*1563*/      OPC_RecordChild1, // #1 = $imm
/*1564*/      OPC_Scope, 18, /*->1584*/ // 2 children in Scope
/*1566*/        OPC_MoveChild1,
/*1567*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1570*/        OPC_CheckPredicate, 18, // Predicate_immShift
/*1572*/        OPC_MoveParent,
/*1573*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*1576*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SL_I:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1584*/      /*Scope*/ 27, /*->1612*/
/*1585*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1588*/        OPC_EmitInteger, MVT::i32, 0, 
/*1591*/        OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1600*/        OPC_EmitInteger, MVT::i32, 0, 
/*1603*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (srl:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SRL_R:i32 GPR:i32:$Rs1, (SUB_R:i32 R0:i32, GPR:i32:$Rs2))
/*1612*/      0, /*End of Scope*/
/*1613*/    /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRA),// ->1667
/*1616*/      OPC_RecordChild0, // #0 = $Rs1
/*1617*/      OPC_RecordChild1, // #1 = $imm
/*1618*/      OPC_Scope, 18, /*->1638*/ // 2 children in Scope
/*1620*/        OPC_MoveChild1,
/*1621*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1624*/        OPC_CheckPredicate, 18, // Predicate_immShift
/*1626*/        OPC_MoveParent,
/*1627*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*1630*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SA_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SA_I:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1638*/      /*Scope*/ 27, /*->1666*/
/*1639*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1642*/        OPC_EmitInteger, MVT::i32, 0, 
/*1645*/        OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1654*/        OPC_EmitInteger, MVT::i32, 0, 
/*1657*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRA_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (sra:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SRA_R:i32 GPR:i32:$Rs1, (SUB_R:i32 R0:i32, GPR:i32:$Rs2))
/*1666*/      0, /*End of Scope*/
/*1667*/    /*SwitchOpcode*/ 57, TARGET_VAL(LanaiISD::SET_FLAG),// ->1727
/*1670*/      OPC_RecordChild0, // #0 = $Rs1
/*1671*/      OPC_Scope, 41, /*->1714*/ // 2 children in Scope
/*1673*/        OPC_RecordChild1, // #1 = $imm16
/*1674*/        OPC_MoveChild1,
/*1675*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1678*/        OPC_Scope, 16, /*->1696*/ // 2 children in Scope
/*1680*/          OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*1682*/          OPC_MoveParent,
/*1683*/          OPC_EmitConvertToTarget, 1,
/*1685*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1688*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_LO), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*1696*/        /*Scope*/ 16, /*->1713*/
/*1697*/          OPC_CheckPredicate, 14, // Predicate_i32hi16
/*1699*/          OPC_MoveParent,
/*1700*/          OPC_EmitConvertToTarget, 1,
/*1702*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1705*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_HI), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*1713*/        0, /*End of Scope*/
/*1714*/      /*Scope*/ 11, /*->1726*/
/*1715*/        OPC_CheckChild0Type, MVT::i32,
/*1717*/        OPC_RecordChild1, // #1 = $Rs2
/*1718*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RR), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (LanaiSetFlag GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SFSUB_F_RR:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1726*/      0, /*End of Scope*/
/*1727*/    /*SwitchOpcode*/ 24, TARGET_VAL(LanaiISD::BR_CC),// ->1754
/*1730*/      OPC_RecordNode, // #0 = 'LanaiBrCC' chained node
/*1731*/      OPC_CaptureGlueInput,
/*1732*/      OPC_RecordChild1, // #1 = $addr
/*1733*/      OPC_MoveChild1,
/*1734*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1737*/      OPC_MoveParent,
/*1738*/      OPC_RecordChild2, // #2 = $DDDI
/*1739*/      OPC_MoveChild2,
/*1740*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1743*/      OPC_MoveParent,
/*1744*/      OPC_EmitMergeInputChains1_0,
/*1745*/      OPC_EmitConvertToTarget, 2,
/*1747*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::BRCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (LanaiBrCC (bb:Other):$addr, (imm:i32):$DDDI) - Complexity = 6
              // Dst: (BRCC (bb:Other):$addr, (imm:i32):$DDDI)
/*1754*/    /*SwitchOpcode*/ 16, TARGET_VAL(LanaiISD::SETCC),// ->1773
/*1757*/      OPC_CaptureGlueInput,
/*1758*/      OPC_RecordChild0, // #0 = $DDDI
/*1759*/      OPC_MoveChild0,
/*1760*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1763*/      OPC_MoveParent,
/*1764*/      OPC_EmitConvertToTarget, 0,
/*1766*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SCC), 0|OPFL_GlueInput,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (LanaiSetCC:i32 (imm:i32):$DDDI) - Complexity = 6
              // Dst: (SCC:i32 (imm:i32):$DDDI)
/*1773*/    /*SwitchOpcode*/ 22, TARGET_VAL(LanaiISD::SELECT_CC),// ->1798
/*1776*/      OPC_CaptureGlueInput,
/*1777*/      OPC_RecordChild0, // #0 = $Rs1
/*1778*/      OPC_RecordChild1, // #1 = $Rs2
/*1779*/      OPC_RecordChild2, // #2 = $DDDI
/*1780*/      OPC_MoveChild2,
/*1781*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1784*/      OPC_MoveParent,
/*1785*/      OPC_CheckType, MVT::i32,
/*1787*/      OPC_EmitConvertToTarget, 2,
/*1789*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SELECT), 0|OPFL_GlueInput,
                  MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (LanaiSelectCC:i32 GPR:i32:$Rs1, GPR:i32:$Rs2, (imm:i32):$DDDI) - Complexity = 6
              // Dst: (SELECT:i32 GPR:i32:$Rs1, GPR:i32:$Rs2, (imm:i32):$DDDI)
/*1798*/    /*SwitchOpcode*/ 42, TARGET_VAL(LanaiISD::CALL),// ->1843
/*1801*/      OPC_RecordNode, // #0 = 'Call' chained node
/*1802*/      OPC_CaptureGlueInput,
/*1803*/      OPC_RecordChild1, // #1 = $dst
/*1804*/      OPC_Scope, 27, /*->1833*/ // 2 children in Scope
/*1806*/        OPC_MoveChild1,
/*1807*/        OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->1820
/*1811*/          OPC_MoveParent,
/*1812*/          OPC_EmitMergeInputChains1_0,
/*1813*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL:i32 (tglobaladdr:i32):$dst)
/*1820*/        /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->1832
/*1823*/          OPC_MoveParent,
/*1824*/          OPC_EmitMergeInputChains1_0,
/*1825*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALL:i32 (texternalsym:i32):$dst)
/*1832*/        0, // EndSwitchOpcode
/*1833*/      /*Scope*/ 8, /*->1842*/
/*1834*/        OPC_EmitMergeInputChains1_0,
/*1835*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (Call GPR:i32:$Rs1) - Complexity = 3
                // Dst: (CALLR:i32 GPR:i32:$Rs1)
/*1842*/      0, /*End of Scope*/
/*1843*/    /*SwitchOpcode*/ 59, TARGET_VAL(LanaiISD::HI),// ->1905
/*1846*/      OPC_RecordChild0, // #0 = $dst
/*1847*/      OPC_MoveChild0,
/*1848*/      OPC_SwitchOpcode /*5 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->1860
/*1852*/        OPC_MoveParent,
/*1853*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tglobaladdr:i32):$dst)
/*1860*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->1871
/*1863*/        OPC_MoveParent,
/*1864*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (texternalsym:i32):$dst)
/*1871*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetBlockAddress),// ->1882
/*1874*/        OPC_MoveParent,
/*1875*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tblockaddress:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tblockaddress:i32):$dst)
/*1882*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetJumpTable),// ->1893
/*1885*/        OPC_MoveParent,
/*1886*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tjumptable:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tjumptable:i32):$dst)
/*1893*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetConstantPool),// ->1904
/*1896*/        OPC_MoveParent,
/*1897*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tconstpool:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tconstpool:i32):$dst)
/*1904*/      0, // EndSwitchOpcode
/*1905*/    /*SwitchOpcode*/ 79, TARGET_VAL(LanaiISD::LO),// ->1987
/*1908*/      OPC_RecordChild0, // #0 = $dst
/*1909*/      OPC_MoveChild0,
/*1910*/      OPC_SwitchOpcode /*5 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->1926
/*1914*/        OPC_MoveParent,
/*1915*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1918*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tglobaladdr:i32):$dst)
/*1926*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->1941
/*1929*/        OPC_MoveParent,
/*1930*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1933*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (texternalsym:i32):$dst)
/*1941*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->1956
/*1944*/        OPC_MoveParent,
/*1945*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1948*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tblockaddress:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tblockaddress:i32):$dst)
/*1956*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetJumpTable),// ->1971
/*1959*/        OPC_MoveParent,
/*1960*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1963*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tjumptable:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tjumptable:i32):$dst)
/*1971*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->1986
/*1974*/        OPC_MoveParent,
/*1975*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1978*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tconstpool:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tconstpool:i32):$dst)
/*1986*/      0, // EndSwitchOpcode
/*1987*/    /*SwitchOpcode*/ 59, TARGET_VAL(LanaiISD::SMALL),// ->2049
/*1990*/      OPC_RecordChild0, // #0 = $dst
/*1991*/      OPC_MoveChild0,
/*1992*/      OPC_SwitchOpcode /*5 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->2004
/*1996*/        OPC_MoveParent,
/*1997*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tglobaladdr:i32):$dst)
/*2004*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->2015
/*2007*/        OPC_MoveParent,
/*2008*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (texternalsym:i32):$dst)
/*2015*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetBlockAddress),// ->2026
/*2018*/        OPC_MoveParent,
/*2019*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tblockaddress:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tblockaddress:i32):$dst)
/*2026*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetJumpTable),// ->2037
/*2029*/        OPC_MoveParent,
/*2030*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tjumptable:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tjumptable:i32):$dst)
/*2037*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetConstantPool),// ->2048
/*2040*/        OPC_MoveParent,
/*2041*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tconstpool:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tconstpool:i32):$dst)
/*2048*/      0, // EndSwitchOpcode
/*2049*/    /*SwitchOpcode*/ 113, TARGET_VAL(ISD::Constant),// ->2165
/*2052*/      OPC_RecordNode, // #0 = $imm
/*2053*/      OPC_Scope, 18, /*->2073*/ // 6 children in Scope
/*2055*/        OPC_CheckPredicate, 15, // Predicate_i32lo16and
/*2057*/        OPC_EmitRegister, MVT::i32, Lanai::R1,
/*2060*/        OPC_EmitConvertToTarget, 0,
/*2062*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*2065*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:i32)<<P:Predicate_i32lo16and>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (AND_I_LO:i32 R1:i32, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16and>>:$imm))
/*2073*/      /*Scope*/ 18, /*->2092*/
/*2074*/        OPC_CheckPredicate, 16, // Predicate_i32hi16and
/*2076*/        OPC_EmitRegister, MVT::i32, Lanai::R1,
/*2079*/        OPC_EmitConvertToTarget, 0,
/*2081*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*2084*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:i32)<<P:Predicate_i32hi16and>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (AND_I_HI:i32 R1:i32, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16and>>:$imm))
/*2092*/      /*Scope*/ 14, /*->2107*/
/*2093*/        OPC_CheckPredicate, 14, // Predicate_i32hi16
/*2095*/        OPC_EmitConvertToTarget, 0,
/*2097*/        OPC_EmitNodeXForm, 1, 1, // HI16
/*2100*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16 - Complexity = 4
                // Dst: (MOVHI:i32 (HI16:i32 (imm:i32):$imm16))
/*2107*/      /*Scope*/ 14, /*->2122*/
/*2108*/        OPC_CheckPredicate, 19, // Predicate_i32lo21
/*2110*/        OPC_EmitConvertToTarget, 0,
/*2112*/        OPC_EmitNodeXForm, 3, 1, // LO21
/*2115*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_i32lo21>><<X:LO21>>:$imm - Complexity = 4
                // Dst: (SLI:i32 (LO21:i32 (imm:i32):$imm))
/*2122*/      /*Scope*/ 15, /*->2138*/
/*2123*/        OPC_CheckPredicate, 13, // Predicate_i32lo16z
/*2125*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*2128*/        OPC_EmitConvertToTarget, 0,
/*2130*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (OR_I_LO:i32 R0:i32, (imm:i32):$imm)
/*2138*/      /*Scope*/ 25, /*->2164*/
/*2139*/        OPC_EmitConvertToTarget, 0,
/*2141*/        OPC_EmitNodeXForm, 1, 1, // HI16
/*2144*/        OPC_EmitNode1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*2151*/        OPC_EmitConvertToTarget, 0,
/*2153*/        OPC_EmitNodeXForm, 0, 4, // LO16
/*2156*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OR_I_LO:i32 (MOVHI:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*2164*/      0, /*End of Scope*/
/*2165*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->2182
/*2168*/      OPC_RecordNode, // #0 = 'br' chained node
/*2169*/      OPC_RecordChild1, // #1 = $addr
/*2170*/      OPC_MoveChild1,
/*2171*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2174*/      OPC_MoveParent,
/*2175*/      OPC_EmitMergeInputChains1_0,
/*2176*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::BT), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$addr) - Complexity = 3
              // Dst: (BT (bb:Other):$addr)
/*2182*/    /*SwitchOpcode*/ 11, TARGET_VAL(ISD::BRIND),// ->2196
/*2185*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2186*/      OPC_RecordChild1, // #1 = $Rs2
/*2187*/      OPC_CheckChild1Type, MVT::i32,
/*2189*/      OPC_EmitMergeInputChains1_0,
/*2190*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::JR), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (brind GPR:i32:$Rs2) - Complexity = 3
              // Dst: (JR GPR:i32:$Rs2)
/*2196*/    /*SwitchOpcode*/ 8, TARGET_VAL(LanaiISD::RET_FLAG),// ->2207
/*2199*/      OPC_RecordNode, // #0 = 'RetFlag' chained node
/*2200*/      OPC_CaptureGlueInput,
/*2201*/      OPC_EmitMergeInputChains1_0,
/*2202*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (RetFlag) - Complexity = 3
              // Dst: (RET)
/*2207*/    /*SwitchOpcode*/ 9, TARGET_VAL(LanaiISD::ADJDYNALLOC),// ->2219
/*2210*/      OPC_RecordChild0, // #0 = $src
/*2211*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADJDYNALLOC), 0,
                  MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (LanaiAdjDynAlloc:i32 GPR:i32:$src) - Complexity = 3
              // Dst: (ADJDYNALLOC:i32:i32 GPR:i32:$src)
/*2219*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTPOP),// ->2230
/*2222*/      OPC_RecordChild0, // #0 = $Rs1
/*2223*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::POPC), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 GPR:i32:$Rs1) - Complexity = 3
              // Dst: (POPC:i32 GPR:i32:$Rs1)
/*2230*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTLZ),// ->2241
/*2233*/      OPC_RecordChild0, // #0 = $Rs1
/*2234*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LEADZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPR:i32:$Rs1) - Complexity = 3
              // Dst: (LEADZ:i32 GPR:i32:$Rs1)
/*2241*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTTZ),// ->2252
/*2244*/      OPC_RecordChild0, // #0 = $Rs1
/*2245*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::TRAILZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (cttz:i32 GPR:i32:$Rs1) - Complexity = 3
              // Dst: (TRAILZ:i32 GPR:i32:$Rs1)
/*2252*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 2254 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 41
  // #OPC_RecordNode                     = 10
  // #OPC_RecordChild                    = 62
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 32
  // #OPC_MoveParent                     = 89
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 67
  // #OPC_CheckOpcode                    = 24
  // #OPC_SwitchOpcode                   = 9
  // #OPC_CheckType                      = 2
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 6
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 0
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 21
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 15
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 10
  // #OPC_EmitConvertToTarget            = 39
  // #OPC_EmitMergeInputChains           = 30
  // #OPC_EmitCopyToReg                  = 5
  // #OPC_EmitNode                       = 3
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 124

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { 
    // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 3: { 
    // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 4: { 
    // Predicate_zextloadi16
    // Predicate_sextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { 
    // Predicate_zextloadi8
    // Predicate_sextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { 
    // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { 
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 9: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 10: { 
    // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 11: { 
    // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { 
    // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { 
    // Predicate_i32lo16z
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has only rightmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFFUL) == N->getZExtValue());
  }
  case 14: { 
    // Predicate_i32hi16
    auto *N = cast<ConstantSDNode>(Node);

    // i32hi16 predicate - true if the 32-bit immediate has only leftmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFF0000UL) == N->getZExtValue());
  }
  case 15: { 
    // Predicate_i32lo16and
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has the rightmost 16
    // bits set and the leftmost 16 bits 1's.
    return (N->getZExtValue() >= 0xFFFF0000UL);
  }
  case 16: { 
    // Predicate_i32hi16and
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has the leftmost 16
    // bits set and the rightmost 16 bits 1's.
    return ((N->getZExtValue() & 0xFFFFUL) == 0xFFFFUL);
  }
  case 17: { 
    // Predicate_i32neg16
    auto *N = cast<ConstantSDNode>(Node);

    // i32neg16 predicate - true if the 32-bit immediate is negative and can
    // be represented by a 16 bit integer.
    int Imm = N->getSExtValue();
    return (Imm < 0) && (isInt<16>(Imm));
  }
  case 18: { 
    // Predicate_immShift
    auto *N = cast<ConstantSDNode>(Node);

    int Imm = N->getSExtValue();
    return Imm >= -31 && Imm <= 31;
  }
  case 19: { 
    // Predicate_i32lo21
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo21 predicate - true if the 32-bit immediate has only rightmost 21
    // bits set.
    return ((N->getZExtValue() & 0x1FFFFFUL) == N->getZExtValue());
  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                         SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) override {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+3);
  return selectAddrRi(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
  return selectAddrRr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
  return selectAddrSpls(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+1);
  return selectAddrSls(N, Result[NextRes+0].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0xffff,
                                   SDLoc(N), MVT::i32);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() >> 16, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  // NEG
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(-N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 3: {  // LO21
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0x1fffff,
                                   SDLoc(N), MVT::i32);

  }
  }
}

