/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the BPF target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*24 cases */, 21|128,1/*149*/, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->154
/*5*/         OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*6*/         OPC_Scope, 28, /*->36*/ // 4 children in Scope
/*8*/           OPC_CheckChild1Integer, 43|128,5/*683*/, 
/*11*/          OPC_RecordChild2, // #1 = $pseudo
/*12*/          OPC_MoveChild2,
/*13*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16*/          OPC_MoveParent,
/*17*/          OPC_RecordChild3, // #2 = $imm
/*18*/          OPC_MoveChild3,
/*19*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*22*/          OPC_MoveParent,
/*23*/          OPC_EmitMergeInputChains1_0,
/*24*/          OPC_EmitConvertToTarget, 1,
/*26*/          OPC_EmitConvertToTarget, 2,
/*28*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_pseudo), 0|OPFL_Chain,
                    MVT::i64, 2/*#Ops*/, 3, 4, 
                // Src: (intrinsic_w_chain:i64 683:iPTR, (imm:i64):$pseudo, (imm:i64):$imm) - Complexity = 14
                // Dst: (LD_pseudo:i64 (imm:i64):$pseudo, (imm:i64):$imm)
/*36*/        /*Scope*/ 38, /*->75*/
/*37*/          OPC_CheckChild1Integer, 40|128,5/*680*/, 
/*40*/          OPC_RecordChild2, // #1 = $skb
/*41*/          OPC_CheckChild2Type, MVT::i64,
/*43*/          OPC_RecordChild3, // #2 = $imm
/*44*/          OPC_Scope, 18, /*->64*/ // 2 children in Scope
/*46*/            OPC_MoveChild3,
/*47*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*50*/            OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*52*/            OPC_MoveParent,
/*53*/            OPC_EmitMergeInputChains1_0,
/*54*/            OPC_EmitConvertToTarget, 2,
/*56*/            OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:i64 680:iPTR, GPR:i64:$skb, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_B:i64 GPR:i64:$skb, (imm:i64):$imm)
/*64*/          /*Scope*/ 9, /*->74*/
/*65*/            OPC_EmitMergeInputChains1_0,
/*66*/            OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:i64 680:iPTR, GPR:i64:$skb, GPR:i64:$val) - Complexity = 8
                  // Dst: (LD_IND_B:i64 GPR:i64:$skb, GPR:i64:$val)
/*74*/          0, /*End of Scope*/
/*75*/        /*Scope*/ 38, /*->114*/
/*76*/          OPC_CheckChild1Integer, 41|128,5/*681*/, 
/*79*/          OPC_RecordChild2, // #1 = $skb
/*80*/          OPC_CheckChild2Type, MVT::i64,
/*82*/          OPC_RecordChild3, // #2 = $imm
/*83*/          OPC_Scope, 18, /*->103*/ // 2 children in Scope
/*85*/            OPC_MoveChild3,
/*86*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*89*/            OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*91*/            OPC_MoveParent,
/*92*/            OPC_EmitMergeInputChains1_0,
/*93*/            OPC_EmitConvertToTarget, 2,
/*95*/            OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:i64 681:iPTR, GPR:i64:$skb, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_H:i64 GPR:i64:$skb, (imm:i64):$imm)
/*103*/         /*Scope*/ 9, /*->113*/
/*104*/           OPC_EmitMergeInputChains1_0,
/*105*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:i64 681:iPTR, GPR:i64:$skb, GPR:i64:$val) - Complexity = 8
                  // Dst: (LD_IND_H:i64 GPR:i64:$skb, GPR:i64:$val)
/*113*/         0, /*End of Scope*/
/*114*/       /*Scope*/ 38, /*->153*/
/*115*/         OPC_CheckChild1Integer, 42|128,5/*682*/, 
/*118*/         OPC_RecordChild2, // #1 = $skb
/*119*/         OPC_CheckChild2Type, MVT::i64,
/*121*/         OPC_RecordChild3, // #2 = $imm
/*122*/         OPC_Scope, 18, /*->142*/ // 2 children in Scope
/*124*/           OPC_MoveChild3,
/*125*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*128*/           OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*130*/           OPC_MoveParent,
/*131*/           OPC_EmitMergeInputChains1_0,
/*132*/           OPC_EmitConvertToTarget, 2,
/*134*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:i64 682:iPTR, GPR:i64:$skb, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_W:i64 GPR:i64:$skb, (imm:i64):$imm)
/*142*/         /*Scope*/ 9, /*->152*/
/*143*/           OPC_EmitMergeInputChains1_0,
/*144*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:i64 682:iPTR, GPR:i64:$skb, GPR:i64:$val) - Complexity = 8
                  // Dst: (LD_IND_W:i64 GPR:i64:$skb, GPR:i64:$val)
/*152*/         0, /*End of Scope*/
/*153*/       0, /*End of Scope*/
/*154*/     /*SwitchOpcode*/ 77, TARGET_VAL(ISD::STORE),// ->234
/*157*/       OPC_RecordMemRef,
/*158*/       OPC_RecordNode, // #0 = 'st' chained node
/*159*/       OPC_RecordChild1, // #1 = $src
/*160*/       OPC_CheckChild1Type, MVT::i64,
/*162*/       OPC_RecordChild2, // #2 = $addr
/*163*/       OPC_CheckChild2Type, MVT::i64,
/*165*/       OPC_CheckPredicate, 1, // Predicate_unindexedstore
/*167*/       OPC_Scope, 49, /*->218*/ // 2 children in Scope
/*169*/         OPC_CheckPredicate, 2, // Predicate_truncstore
/*171*/         OPC_Scope, 14, /*->187*/ // 3 children in Scope
/*173*/           OPC_CheckPredicate, 3, // Predicate_truncstorei32
/*175*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*178*/           OPC_EmitMergeInputChains1_0,
/*179*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:i64:$src, ADDRri:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                  // Dst: (STW i64:i64:$src, ADDRri:i64:$addr)
/*187*/         /*Scope*/ 14, /*->202*/
/*188*/           OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*190*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*193*/           OPC_EmitMergeInputChains1_0,
/*194*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::STH), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:i64:$src, ADDRri:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                  // Dst: (STH i64:i64:$src, ADDRri:i64:$addr)
/*202*/         /*Scope*/ 14, /*->217*/
/*203*/           OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*205*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*208*/           OPC_EmitMergeInputChains1_0,
/*209*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::STB), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:i64:$src, ADDRri:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                  // Dst: (STB i64:i64:$src, ADDRri:i64:$addr)
/*217*/         0, /*End of Scope*/
/*218*/       /*Scope*/ 14, /*->233*/
/*219*/         OPC_CheckPredicate, 6, // Predicate_store
/*221*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*224*/         OPC_EmitMergeInputChains1_0,
/*225*/         OPC_MorphNodeTo0, TARGET_VAL(BPF::STD), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 3, 4, 
                // Src: (st i64:i64:$src, ADDRri:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STD i64:i64:$src, ADDRri:i64:$addr)
/*233*/       0, /*End of Scope*/
/*234*/     /*SwitchOpcode*/ 126, TARGET_VAL(ISD::LOAD),// ->363
/*237*/       OPC_RecordMemRef,
/*238*/       OPC_RecordNode, // #0 = 'ld' chained node
/*239*/       OPC_RecordChild1, // #1 = $addr
/*240*/       OPC_CheckChild1Type, MVT::i64,
/*242*/       OPC_CheckPredicate, 7, // Predicate_unindexedload
/*244*/       OPC_CheckType, MVT::i64,
/*246*/       OPC_Scope, 49, /*->297*/ // 3 children in Scope
/*248*/         OPC_CheckPredicate, 8, // Predicate_zextload
/*250*/         OPC_Scope, 14, /*->266*/ // 3 children in Scope
/*252*/           OPC_CheckPredicate, 9, // Predicate_zextloadi32
/*254*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*257*/           OPC_EmitMergeInputChains1_0,
/*258*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDW:i64 ADDRri:i64:$addr)
/*266*/         /*Scope*/ 14, /*->281*/
/*267*/           OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*269*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*272*/           OPC_EmitMergeInputChains1_0,
/*273*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDH:i64 ADDRri:i64:$addr)
/*281*/         /*Scope*/ 14, /*->296*/
/*282*/           OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*284*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*287*/           OPC_EmitMergeInputChains1_0,
/*288*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDB:i64 ADDRri:i64:$addr)
/*296*/         0, /*End of Scope*/
/*297*/       /*Scope*/ 14, /*->312*/
/*298*/         OPC_CheckPredicate, 12, // Predicate_load
/*300*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*303*/         OPC_EmitMergeInputChains1_0,
/*304*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::LDD), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDD:i64 ADDRri:i64:$addr)
/*312*/       /*Scope*/ 49, /*->362*/
/*313*/         OPC_CheckPredicate, 13, // Predicate_extload
/*315*/         OPC_Scope, 14, /*->331*/ // 3 children in Scope
/*317*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*319*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*322*/           OPC_EmitMergeInputChains1_0,
/*323*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDB:i64 ADDRri:i64:$src)
/*331*/         /*Scope*/ 14, /*->346*/
/*332*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*334*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*337*/           OPC_EmitMergeInputChains1_0,
/*338*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDH:i64 ADDRri:i64:$src)
/*346*/         /*Scope*/ 14, /*->361*/
/*347*/           OPC_CheckPredicate, 9, // Predicate_extloadi32
/*349*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*352*/           OPC_EmitMergeInputChains1_0,
/*353*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDW:i64 ADDRri:i64:$src)
/*361*/         0, /*End of Scope*/
/*362*/       0, /*End of Scope*/
/*363*/     /*SwitchOpcode*/ 40, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->406
/*366*/       OPC_RecordMemRef,
/*367*/       OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/*368*/       OPC_RecordChild1, // #1 = $addr
/*369*/       OPC_CheckChild1Type, MVT::i64,
/*371*/       OPC_RecordChild2, // #2 = $val
/*372*/       OPC_Scope, 15, /*->389*/ // 2 children in Scope
/*374*/         OPC_CheckPredicate, 14, // Predicate_atomic_load_add_32
/*376*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*379*/         OPC_EmitMergeInputChains1_0,
/*380*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::XADD32), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i64 ADDRri:i64:$addr, GPR:i64:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (XADD32:i64 ADDRri:i64:$addr, GPR:i64:$val)
/*389*/       /*Scope*/ 15, /*->405*/
/*390*/         OPC_CheckPredicate, 15, // Predicate_atomic_load_add_64
/*392*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*395*/         OPC_EmitMergeInputChains1_0,
/*396*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::XADD64), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i64 ADDRri:i64:$addr, GPR:i64:$val)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
                // Dst: (XADD64:i64 ADDRri:i64:$addr, GPR:i64:$val)
/*405*/       0, /*End of Scope*/
/*406*/     /*SwitchOpcode*/ 15|128,2/*271*/, TARGET_VAL(BPFISD::BR_CC),// ->681
/*410*/       OPC_RecordNode, // #0 = 'BPFbrcc' chained node
/*411*/       OPC_CaptureGlueInput,
/*412*/       OPC_RecordChild1, // #1 = $dst
/*413*/       OPC_Scope, 12|128,1/*140*/, /*->556*/ // 2 children in Scope
/*416*/         OPC_RecordChild2, // #2 = $imm
/*417*/         OPC_MoveChild2,
/*418*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*421*/         OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*423*/         OPC_MoveParent,
/*424*/         OPC_MoveChild3,
/*425*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*428*/         OPC_Scope, 20, /*->450*/ // 6 children in Scope
/*430*/           OPC_CheckPredicate, 16, // Predicate_BPF_CC_EQ
/*432*/           OPC_MoveParent,
/*433*/           OPC_RecordChild4, // #3 = $BrDst
/*434*/           OPC_MoveChild4,
/*435*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*438*/           OPC_MoveParent,
/*439*/           OPC_EmitMergeInputChains1_0,
/*440*/           OPC_EmitConvertToTarget, 2,
/*442*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm, (imm:i64)<<P:Predicate_BPF_CC_EQ>>, (bb:Other):$BrDst) - Complexity = 11
                  // Dst: (JEQ_ri i64:i64:$dst, (imm:i64):$imm, (bb:Other):$BrDst)
/*450*/         /*Scope*/ 20, /*->471*/
/*451*/           OPC_CheckPredicate, 17, // Predicate_BPF_CC_GTU
/*453*/           OPC_MoveParent,
/*454*/           OPC_RecordChild4, // #3 = $BrDst
/*455*/           OPC_MoveChild4,
/*456*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*459*/           OPC_MoveParent,
/*460*/           OPC_EmitMergeInputChains1_0,
/*461*/           OPC_EmitConvertToTarget, 2,
/*463*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm, (imm:i64)<<P:Predicate_BPF_CC_GTU>>, (bb:Other):$BrDst) - Complexity = 11
                  // Dst: (JUGT_ri i64:i64:$dst, (imm:i64):$imm, (bb:Other):$BrDst)
/*471*/         /*Scope*/ 20, /*->492*/
/*472*/           OPC_CheckPredicate, 18, // Predicate_BPF_CC_GEU
/*474*/           OPC_MoveParent,
/*475*/           OPC_RecordChild4, // #3 = $BrDst
/*476*/           OPC_MoveChild4,
/*477*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*480*/           OPC_MoveParent,
/*481*/           OPC_EmitMergeInputChains1_0,
/*482*/           OPC_EmitConvertToTarget, 2,
/*484*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm, (imm:i64)<<P:Predicate_BPF_CC_GEU>>, (bb:Other):$BrDst) - Complexity = 11
                  // Dst: (JUGE_ri i64:i64:$dst, (imm:i64):$imm, (bb:Other):$BrDst)
/*492*/         /*Scope*/ 20, /*->513*/
/*493*/           OPC_CheckPredicate, 19, // Predicate_BPF_CC_NE
/*495*/           OPC_MoveParent,
/*496*/           OPC_RecordChild4, // #3 = $BrDst
/*497*/           OPC_MoveChild4,
/*498*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*501*/           OPC_MoveParent,
/*502*/           OPC_EmitMergeInputChains1_0,
/*503*/           OPC_EmitConvertToTarget, 2,
/*505*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm, (imm:i64)<<P:Predicate_BPF_CC_NE>>, (bb:Other):$BrDst) - Complexity = 11
                  // Dst: (JNE_ri i64:i64:$dst, (imm:i64):$imm, (bb:Other):$BrDst)
/*513*/         /*Scope*/ 20, /*->534*/
/*514*/           OPC_CheckPredicate, 20, // Predicate_BPF_CC_GT
/*516*/           OPC_MoveParent,
/*517*/           OPC_RecordChild4, // #3 = $BrDst
/*518*/           OPC_MoveChild4,
/*519*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*522*/           OPC_MoveParent,
/*523*/           OPC_EmitMergeInputChains1_0,
/*524*/           OPC_EmitConvertToTarget, 2,
/*526*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm, (imm:i64)<<P:Predicate_BPF_CC_GT>>, (bb:Other):$BrDst) - Complexity = 11
                  // Dst: (JSGT_ri i64:i64:$dst, (imm:i64):$imm, (bb:Other):$BrDst)
/*534*/         /*Scope*/ 20, /*->555*/
/*535*/           OPC_CheckPredicate, 21, // Predicate_BPF_CC_GE
/*537*/           OPC_MoveParent,
/*538*/           OPC_RecordChild4, // #3 = $BrDst
/*539*/           OPC_MoveChild4,
/*540*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*543*/           OPC_MoveParent,
/*544*/           OPC_EmitMergeInputChains1_0,
/*545*/           OPC_EmitConvertToTarget, 2,
/*547*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm, (imm:i64)<<P:Predicate_BPF_CC_GE>>, (bb:Other):$BrDst) - Complexity = 11
                  // Dst: (JSGE_ri i64:i64:$dst, (imm:i64):$imm, (bb:Other):$BrDst)
/*555*/         0, /*End of Scope*/
/*556*/       /*Scope*/ 123, /*->680*/
/*557*/         OPC_CheckChild1Type, MVT::i64,
/*559*/         OPC_RecordChild2, // #2 = $src
/*560*/         OPC_MoveChild3,
/*561*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*564*/         OPC_Scope, 18, /*->584*/ // 6 children in Scope
/*566*/           OPC_CheckPredicate, 16, // Predicate_BPF_CC_EQ
/*568*/           OPC_MoveParent,
/*569*/           OPC_RecordChild4, // #3 = $BrDst
/*570*/           OPC_MoveChild4,
/*571*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*574*/           OPC_MoveParent,
/*575*/           OPC_EmitMergeInputChains1_0,
/*576*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, i64:i64:$src, (imm:i64)<<P:Predicate_BPF_CC_EQ>>, (bb:Other):$BrDst) - Complexity = 7
                  // Dst: (JEQ_rr i64:i64:$dst, i64:i64:$src, (bb:Other):$BrDst)
/*584*/         /*Scope*/ 18, /*->603*/
/*585*/           OPC_CheckPredicate, 17, // Predicate_BPF_CC_GTU
/*587*/           OPC_MoveParent,
/*588*/           OPC_RecordChild4, // #3 = $BrDst
/*589*/           OPC_MoveChild4,
/*590*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*593*/           OPC_MoveParent,
/*594*/           OPC_EmitMergeInputChains1_0,
/*595*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, i64:i64:$src, (imm:i64)<<P:Predicate_BPF_CC_GTU>>, (bb:Other):$BrDst) - Complexity = 7
                  // Dst: (JUGT_rr i64:i64:$dst, i64:i64:$src, (bb:Other):$BrDst)
/*603*/         /*Scope*/ 18, /*->622*/
/*604*/           OPC_CheckPredicate, 18, // Predicate_BPF_CC_GEU
/*606*/           OPC_MoveParent,
/*607*/           OPC_RecordChild4, // #3 = $BrDst
/*608*/           OPC_MoveChild4,
/*609*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*612*/           OPC_MoveParent,
/*613*/           OPC_EmitMergeInputChains1_0,
/*614*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, i64:i64:$src, (imm:i64)<<P:Predicate_BPF_CC_GEU>>, (bb:Other):$BrDst) - Complexity = 7
                  // Dst: (JUGE_rr i64:i64:$dst, i64:i64:$src, (bb:Other):$BrDst)
/*622*/         /*Scope*/ 18, /*->641*/
/*623*/           OPC_CheckPredicate, 19, // Predicate_BPF_CC_NE
/*625*/           OPC_MoveParent,
/*626*/           OPC_RecordChild4, // #3 = $BrDst
/*627*/           OPC_MoveChild4,
/*628*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*631*/           OPC_MoveParent,
/*632*/           OPC_EmitMergeInputChains1_0,
/*633*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, i64:i64:$src, (imm:i64)<<P:Predicate_BPF_CC_NE>>, (bb:Other):$BrDst) - Complexity = 7
                  // Dst: (JNE_rr i64:i64:$dst, i64:i64:$src, (bb:Other):$BrDst)
/*641*/         /*Scope*/ 18, /*->660*/
/*642*/           OPC_CheckPredicate, 20, // Predicate_BPF_CC_GT
/*644*/           OPC_MoveParent,
/*645*/           OPC_RecordChild4, // #3 = $BrDst
/*646*/           OPC_MoveChild4,
/*647*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*650*/           OPC_MoveParent,
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, i64:i64:$src, (imm:i64)<<P:Predicate_BPF_CC_GT>>, (bb:Other):$BrDst) - Complexity = 7
                  // Dst: (JSGT_rr i64:i64:$dst, i64:i64:$src, (bb:Other):$BrDst)
/*660*/         /*Scope*/ 18, /*->679*/
/*661*/           OPC_CheckPredicate, 21, // Predicate_BPF_CC_GE
/*663*/           OPC_MoveParent,
/*664*/           OPC_RecordChild4, // #3 = $BrDst
/*665*/           OPC_MoveChild4,
/*666*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*669*/           OPC_MoveParent,
/*670*/           OPC_EmitMergeInputChains1_0,
/*671*/           OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:i64:$dst, i64:i64:$src, (imm:i64)<<P:Predicate_BPF_CC_GE>>, (bb:Other):$BrDst) - Complexity = 7
                  // Dst: (JSGE_rr i64:i64:$dst, i64:i64:$src, (bb:Other):$BrDst)
/*679*/         0, /*End of Scope*/
/*680*/       0, /*End of Scope*/
/*681*/     /*SwitchOpcode*/ 63, TARGET_VAL(ISD::SRL),// ->747
/*684*/       OPC_Scope, 28, /*->714*/ // 2 children in Scope
/*686*/         OPC_MoveChild0,
/*687*/         OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*690*/         OPC_RecordChild0, // #0 = $src
/*691*/         OPC_MoveParent,
/*692*/         OPC_Scope, 9, /*->703*/ // 2 children in Scope
/*694*/           OPC_CheckChild1Integer, 48, 
/*696*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::BSWAP16), 0,
                      MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (srl:i64 (bswap:i64 GPR:i64:$src), 48:i64) - Complexity = 11
                  // Dst: (BSWAP16:i64 GPR:i64:$src)
/*703*/         /*Scope*/ 9, /*->713*/
/*704*/           OPC_CheckChild1Integer, 32, 
/*706*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::BSWAP32), 0,
                      MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (srl:i64 (bswap:i64 GPR:i64:$src), 32:i64) - Complexity = 11
                  // Dst: (BSWAP32:i64 GPR:i64:$src)
/*713*/         0, /*End of Scope*/
/*714*/       /*Scope*/ 31, /*->746*/
/*715*/         OPC_RecordChild0, // #0 = $src2
/*716*/         OPC_RecordChild1, // #1 = $imm
/*717*/         OPC_Scope, 17, /*->736*/ // 2 children in Scope
/*719*/           OPC_MoveChild1,
/*720*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*723*/           OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*725*/           OPC_MoveParent,
/*726*/           OPC_EmitConvertToTarget, 1,
/*728*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SRL_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*736*/         /*Scope*/ 8, /*->745*/
/*737*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                  // Dst: (SRL_rr:i64 i64:i64:$src2, i64:i64:$src)
/*745*/         0, /*End of Scope*/
/*746*/       0, /*End of Scope*/
/*747*/     /*SwitchOpcode*/ 49, TARGET_VAL(ISD::ADD),// ->799
/*750*/       OPC_Scope, 14, /*->766*/ // 2 children in Scope
/*752*/         OPC_RecordNode, // #0 = $addr
/*753*/         OPC_CheckType, MVT::i64,
/*755*/         OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*758*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:i64:$addr - Complexity = 9
                // Dst: (FI_ri:i64 FIri:i64:$addr)
/*766*/       /*Scope*/ 31, /*->798*/
/*767*/         OPC_RecordChild0, // #0 = $src2
/*768*/         OPC_RecordChild1, // #1 = $imm
/*769*/         OPC_Scope, 17, /*->788*/ // 2 children in Scope
/*771*/           OPC_MoveChild1,
/*772*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*775*/           OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*777*/           OPC_MoveParent,
/*778*/           OPC_EmitConvertToTarget, 1,
/*780*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (ADD_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*788*/         /*Scope*/ 8, /*->797*/
/*789*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                  // Dst: (ADD_rr:i64 i64:i64:$src2, i64:i64:$src)
/*797*/         0, /*End of Scope*/
/*798*/       0, /*End of Scope*/
/*799*/     /*SwitchOpcode*/ 49, TARGET_VAL(ISD::OR),// ->851
/*802*/       OPC_Scope, 14, /*->818*/ // 2 children in Scope
/*804*/         OPC_RecordNode, // #0 = $addr
/*805*/         OPC_CheckType, MVT::i64,
/*807*/         OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*810*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:i64:$addr - Complexity = 9
                // Dst: (FI_ri:i64 FIri:i64:$addr)
/*818*/       /*Scope*/ 31, /*->850*/
/*819*/         OPC_RecordChild0, // #0 = $src2
/*820*/         OPC_RecordChild1, // #1 = $imm
/*821*/         OPC_Scope, 17, /*->840*/ // 2 children in Scope
/*823*/           OPC_MoveChild1,
/*824*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*827*/           OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*829*/           OPC_MoveParent,
/*830*/           OPC_EmitConvertToTarget, 1,
/*832*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (OR_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*840*/         /*Scope*/ 8, /*->849*/
/*841*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                  // Dst: (OR_rr:i64 i64:i64:$src2, i64:i64:$src)
/*849*/         0, /*End of Scope*/
/*850*/       0, /*End of Scope*/
/*851*/     /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->877
/*854*/       OPC_RecordNode, // #0 = 'BPFcallseq_end' chained node
/*855*/       OPC_CaptureGlueInput,
/*856*/       OPC_RecordChild1, // #1 = $amt1
/*857*/       OPC_MoveChild1,
/*858*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*861*/       OPC_MoveParent,
/*862*/       OPC_RecordChild2, // #2 = $amt2
/*863*/       OPC_MoveChild2,
/*864*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*867*/       OPC_MoveParent,
/*868*/       OPC_EmitMergeInputChains1_0,
/*869*/       OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_end (timm:iPTR):$amt1, (timm:iPTR):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:i64 (timm:i64):$amt1, (timm:i64):$amt2)
/*877*/     /*SwitchOpcode*/ 64, TARGET_VAL(ISD::AND),// ->944
/*880*/       OPC_Scope, 29, /*->911*/ // 2 children in Scope
/*882*/         OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*888*/         OPC_RecordChild0, // #0 = $src
/*889*/         OPC_EmitInteger, MVT::i64, 32, 
/*892*/         OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*900*/         OPC_EmitInteger, MVT::i64, 32, 
/*903*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (and:i64 GPR:i64:$src, 4294967295:i64) - Complexity = 8
                // Dst: (SRL_ri:i64 (SLL_ri:i64 GPR:i64:$src, 32:i64), 32:i64)
/*911*/       /*Scope*/ 31, /*->943*/
/*912*/         OPC_RecordChild0, // #0 = $src2
/*913*/         OPC_RecordChild1, // #1 = $imm
/*914*/         OPC_Scope, 17, /*->933*/ // 2 children in Scope
/*916*/           OPC_MoveChild1,
/*917*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*920*/           OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*922*/           OPC_MoveParent,
/*923*/           OPC_EmitConvertToTarget, 1,
/*925*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (AND_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*933*/         /*Scope*/ 8, /*->942*/
/*934*/           OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                  // Dst: (AND_rr:i64 i64:i64:$src2, i64:i64:$src)
/*942*/         0, /*End of Scope*/
/*943*/       0, /*End of Scope*/
/*944*/     /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SUB),// ->978
/*947*/       OPC_RecordChild0, // #0 = $src2
/*948*/       OPC_RecordChild1, // #1 = $imm
/*949*/       OPC_Scope, 17, /*->968*/ // 2 children in Scope
/*951*/         OPC_MoveChild1,
/*952*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*955*/         OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*957*/         OPC_MoveParent,
/*958*/         OPC_EmitConvertToTarget, 1,
/*960*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (SUB_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*968*/       /*Scope*/ 8, /*->977*/
/*969*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                // Dst: (SUB_rr:i64 i64:i64:$src2, i64:i64:$src)
/*977*/       0, /*End of Scope*/
/*978*/     /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SHL),// ->1012
/*981*/       OPC_RecordChild0, // #0 = $src2
/*982*/       OPC_RecordChild1, // #1 = $imm
/*983*/       OPC_Scope, 17, /*->1002*/ // 2 children in Scope
/*985*/         OPC_MoveChild1,
/*986*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*989*/         OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*991*/         OPC_MoveParent,
/*992*/         OPC_EmitConvertToTarget, 1,
/*994*/         OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (SLL_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*1002*/      /*Scope*/ 8, /*->1011*/
/*1003*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                // Dst: (SLL_rr:i64 i64:i64:$src2, i64:i64:$src)
/*1011*/      0, /*End of Scope*/
/*1012*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::XOR),// ->1046
/*1015*/      OPC_RecordChild0, // #0 = $src2
/*1016*/      OPC_RecordChild1, // #1 = $imm
/*1017*/      OPC_Scope, 17, /*->1036*/ // 2 children in Scope
/*1019*/        OPC_MoveChild1,
/*1020*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1023*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*1025*/        OPC_MoveParent,
/*1026*/        OPC_EmitConvertToTarget, 1,
/*1028*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (xor:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (XOR_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*1036*/      /*Scope*/ 8, /*->1045*/
/*1037*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                // Dst: (XOR_rr:i64 i64:i64:$src2, i64:i64:$src)
/*1045*/      0, /*End of Scope*/
/*1046*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SRA),// ->1080
/*1049*/      OPC_RecordChild0, // #0 = $src2
/*1050*/      OPC_RecordChild1, // #1 = $imm
/*1051*/      OPC_Scope, 17, /*->1070*/ // 2 children in Scope
/*1053*/        OPC_MoveChild1,
/*1054*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1057*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*1059*/        OPC_MoveParent,
/*1060*/        OPC_EmitConvertToTarget, 1,
/*1062*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (SRA_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*1070*/      /*Scope*/ 8, /*->1079*/
/*1071*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                // Dst: (SRA_rr:i64 i64:i64:$src2, i64:i64:$src)
/*1079*/      0, /*End of Scope*/
/*1080*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::MUL),// ->1114
/*1083*/      OPC_RecordChild0, // #0 = $src2
/*1084*/      OPC_RecordChild1, // #1 = $imm
/*1085*/      OPC_Scope, 17, /*->1104*/ // 2 children in Scope
/*1087*/        OPC_MoveChild1,
/*1088*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1091*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*1093*/        OPC_MoveParent,
/*1094*/        OPC_EmitConvertToTarget, 1,
/*1096*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (MUL_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*1104*/      /*Scope*/ 8, /*->1113*/
/*1105*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                // Dst: (MUL_rr:i64 i64:i64:$src2, i64:i64:$src)
/*1113*/      0, /*End of Scope*/
/*1114*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::UDIV),// ->1148
/*1117*/      OPC_RecordChild0, // #0 = $src2
/*1118*/      OPC_RecordChild1, // #1 = $imm
/*1119*/      OPC_Scope, 17, /*->1138*/ // 2 children in Scope
/*1121*/        OPC_MoveChild1,
/*1122*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1125*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*1127*/        OPC_MoveParent,
/*1128*/        OPC_EmitConvertToTarget, 1,
/*1130*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (udiv:i64 GPR:i64:$src2, (imm:i64)<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                // Dst: (DIV_ri:i64 GPR:i64:$src2, (imm:i64):$imm)
/*1138*/      /*Scope*/ 8, /*->1147*/
/*1139*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:i64 i64:i64:$src2, i64:i64:$src) - Complexity = 3
                // Dst: (DIV_rr:i64 i64:i64:$src2, i64:i64:$src)
/*1147*/      0, /*End of Scope*/
/*1148*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::CALLSEQ_START),// ->1166
/*1151*/      OPC_RecordNode, // #0 = 'BPFcallseq_start' chained node
/*1152*/      OPC_RecordChild1, // #1 = $amt
/*1153*/      OPC_MoveChild1,
/*1154*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1157*/      OPC_MoveParent,
/*1158*/      OPC_EmitMergeInputChains1_0,
/*1159*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i64, 1/*#Ops*/, 1, 
              // Src: (BPFcallseq_start (timm:iPTR):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN:i64 (timm:i64):$amt)
/*1166*/    /*SwitchOpcode*/ 15, TARGET_VAL(BPFISD::Wrapper),// ->1184
/*1169*/      OPC_RecordChild0, // #0 = $in
/*1170*/      OPC_MoveChild0,
/*1171*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*1174*/      OPC_MoveParent,
/*1175*/      OPC_CheckType, MVT::i64,
/*1177*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                  MVT::i64, 1/*#Ops*/, 0, 
              // Src: (BPFWrapper:i64 (tglobaladdr:i64):$in) - Complexity = 6
              // Dst: (LD_imm64:i64 (tglobaladdr:i64):$in)
/*1184*/    /*SwitchOpcode*/ 32, TARGET_VAL(BPFISD::CALL),// ->1219
/*1187*/      OPC_RecordNode, // #0 = 'BPFcall' chained node
/*1188*/      OPC_CaptureGlueInput,
/*1189*/      OPC_RecordChild1, // #1 = $dst
/*1190*/      OPC_MoveChild1,
/*1191*/      OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->1204
/*1195*/        OPC_MoveParent,
/*1196*/        OPC_EmitMergeInputChains1_0,
/*1197*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (BPFcall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (JAL:i64 (tglobaladdr:i64):$dst)
/*1204*/      /*SwitchOpcode*/ 11, TARGET_VAL(ISD::Constant),// ->1218
/*1207*/        OPC_MoveParent,
/*1208*/        OPC_EmitMergeInputChains1_0,
/*1209*/        OPC_EmitConvertToTarget, 1,
/*1211*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 2, 
                // Src: (BPFcall (imm:iPTR):$dst) - Complexity = 6
                // Dst: (JAL:i64 (imm:i64):$dst)
/*1218*/      0, // EndSwitchOpcode
/*1219*/    /*SwitchOpcode*/ 28, TARGET_VAL(BPFISD::SELECT_CC),// ->1250
/*1222*/      OPC_CaptureGlueInput,
/*1223*/      OPC_RecordChild0, // #0 = $lhs
/*1224*/      OPC_CheckChild0Type, MVT::i64,
/*1226*/      OPC_RecordChild1, // #1 = $rhs
/*1227*/      OPC_RecordChild2, // #2 = $imm
/*1228*/      OPC_MoveChild2,
/*1229*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1232*/      OPC_MoveParent,
/*1233*/      OPC_RecordChild3, // #3 = $src
/*1234*/      OPC_RecordChild4, // #4 = $src2
/*1235*/      OPC_CheckType, MVT::i64,
/*1237*/      OPC_EmitConvertToTarget, 2,
/*1239*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::Select), 0|OPFL_GlueInput,
                  MVT::i64, 5/*#Ops*/, 0, 1, 5, 3, 4, 
              // Src: (BPFselectcc:i64 i64:i64:$lhs, i64:i64:$rhs, (imm:i64):$imm, i64:i64:$src, i64:i64:$src2) - Complexity = 6
              // Dst: (Select:i64 i64:i64:$lhs, i64:i64:$rhs, (imm:i64):$imm, i64:i64:$src, i64:i64:$src2)
/*1250*/    /*SwitchOpcode*/ 25, TARGET_VAL(ISD::Constant),// ->1278
/*1253*/      OPC_RecordNode, // #0 = $imm
/*1254*/      OPC_Scope, 11, /*->1267*/ // 2 children in Scope
/*1256*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*1258*/        OPC_EmitConvertToTarget, 0,
/*1260*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri), 0,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_i64immSExt32>>:$imm - Complexity = 4
                // Dst: (MOV_ri:i64 (imm:i64):$imm)
/*1267*/      /*Scope*/ 9, /*->1277*/
/*1268*/        OPC_EmitConvertToTarget, 0,
/*1270*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64):$imm - Complexity = 3
                // Dst: (LD_imm64:i64 (imm:i64):$imm)
/*1277*/      0, /*End of Scope*/
/*1278*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->1295
/*1281*/      OPC_RecordNode, // #0 = 'br' chained node
/*1282*/      OPC_RecordChild1, // #1 = $BrDst
/*1283*/      OPC_MoveChild1,
/*1284*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1287*/      OPC_MoveParent,
/*1288*/      OPC_EmitMergeInputChains1_0,
/*1289*/      OPC_MorphNodeTo0, TARGET_VAL(BPF::JMP), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$BrDst) - Complexity = 3
              // Dst: (JMP (bb:Other):$BrDst)
/*1295*/    /*SwitchOpcode*/ 8, TARGET_VAL(BPFISD::RET_FLAG),// ->1306
/*1298*/      OPC_RecordNode, // #0 = 'BPFretflag' chained node
/*1299*/      OPC_CaptureGlueInput,
/*1300*/      OPC_EmitMergeInputChains1_0,
/*1301*/      OPC_MorphNodeTo0, TARGET_VAL(BPF::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (BPFretflag) - Complexity = 3
              // Dst: (RET)
/*1306*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::BSWAP),// ->1317
/*1309*/      OPC_RecordChild0, // #0 = $src
/*1310*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::BSWAP64), 0,
                  MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bswap:i64 GPR:i64:$src) - Complexity = 3
              // Dst: (BSWAP64:i64 GPR:i64:$src)
/*1317*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 1319 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 29
  // #OPC_RecordNode                     = 13
  // #OPC_RecordChild                    = 62
  // #OPC_RecordMemRef                   = 3
  // #OPC_CaptureGlueInput               = 5
  // #OPC_MoveChild                      = 38
  // #OPC_MoveParent                     = 49
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 45
  // #OPC_CheckOpcode                    = 37
  // #OPC_SwitchOpcode                   = 2
  // #OPC_CheckType                      = 5
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 9
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 6
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 15
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 2
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 25
  // #OPC_EmitMergeInputChains           = 38
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 1
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 68

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
  return nullptr;
}
bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_i64immSExt32
    auto *N = cast<ConstantSDNode>(Node);
return isInt<32>(N->getSExtValue()); 
  }
  case 1: { 
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 2: { 
    // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { 
    // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 4: { 
    // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { 
    // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 8: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 9: { 
    // Predicate_zextloadi32
    // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 10: { 
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { 
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { 
    // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 13: { 
    // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 14: { 
    // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 15: { 
    // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 16: { 
    // Predicate_BPF_CC_EQ
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETEQ);
  }
  case 17: { 
    // Predicate_BPF_CC_GTU
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETUGT);
  }
  case 18: { 
    // Predicate_BPF_CC_GEU
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETUGE);
  }
  case 19: { 
    // Predicate_BPF_CC_NE
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETNE);
  }
  case 20: { 
    // Predicate_BPF_CC_GT
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETGT);
  }
  case 21: { 
    // Predicate_BPF_CC_GE
    auto *N = cast<ConstantSDNode>(Node);
return (N->getZExtValue() == ISD::SETGE);
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
    Result.resize(NextRes+2);
    return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectFIAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

