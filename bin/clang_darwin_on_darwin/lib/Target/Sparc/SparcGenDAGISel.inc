/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Sparc target                              *|
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
/*0*/       OPC_SwitchOpcode /*70 cases */, 39|128,4/*551*/, TARGET_VAL(ISD::STORE),// ->556
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'st' chained node
/*7*/         OPC_Scope, 90, /*->99*/ // 2 children in Scope
/*9*/           OPC_CheckChild1Integer, 0, 
/*11*/          OPC_Scope, 41, /*->54*/ // 2 children in Scope
/*13*/            OPC_CheckChild1Type, MVT::i32,
/*15*/            OPC_RecordChild2, // #1 = $dst
/*16*/            OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*18*/            OPC_CheckPredicate, 1, // Predicate_store
/*20*/            OPC_Scope, 15, /*->37*/ // 2 children in Scope
/*22*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*25*/              OPC_EmitMergeInputChains1_0,
/*26*/              OPC_EmitRegister, MVT::i32, SP::G0,
/*29*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i32, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STrr ADDRrr:iPTR:$dst, G0:i32)
/*37*/            /*Scope*/ 15, /*->53*/
/*38*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*41*/              OPC_EmitMergeInputChains1_0,
/*42*/              OPC_EmitRegister, MVT::i32, SP::G0,
/*45*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i32, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STri ADDRri:iPTR:$dst, G0:i32)
/*53*/            0, /*End of Scope*/
/*54*/          /*Scope*/ 43, /*->98*/
/*55*/            OPC_CheckChild1Type, MVT::i64,
/*57*/            OPC_RecordChild2, // #1 = $dst
/*58*/            OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*60*/            OPC_CheckPredicate, 1, // Predicate_store
/*62*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*64*/            OPC_Scope, 15, /*->81*/ // 2 children in Scope
/*66*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*69*/              OPC_EmitMergeInputChains1_0,
/*70*/              OPC_EmitRegister, MVT::i64, SP::G0,
/*73*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i64, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXrr ADDRrr:iPTR:$dst, G0:i64)
/*81*/            /*Scope*/ 15, /*->97*/
/*82*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*85*/              OPC_EmitMergeInputChains1_0,
/*86*/              OPC_EmitRegister, MVT::i64, SP::G0,
/*89*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i64, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXri ADDRri:iPTR:$dst, G0:i64)
/*97*/            0, /*End of Scope*/
/*98*/          0, /*End of Scope*/
/*99*/        /*Scope*/ 70|128,3/*454*/, /*->555*/
/*101*/         OPC_RecordChild1, // #1 = $rd
/*102*/         OPC_Scope, 3|128,1/*131*/, /*->236*/ // 6 children in Scope
/*105*/           OPC_CheckChild1Type, MVT::i32,
/*107*/           OPC_RecordChild2, // #2 = $addr
/*108*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*110*/           OPC_Scope, 66, /*->178*/ // 2 children in Scope
/*112*/             OPC_CheckPredicate, 2, // Predicate_truncstore
/*114*/             OPC_Scope, 30, /*->146*/ // 2 children in Scope
/*116*/               OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*118*/               OPC_Scope, 12, /*->132*/ // 2 children in Scope
/*120*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*123*/                 OPC_EmitMergeInputChains1_0,
/*124*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*132*/               /*Scope*/ 12, /*->145*/
/*133*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*136*/                 OPC_EmitMergeInputChains1_0,
/*137*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$rd)
/*145*/               0, /*End of Scope*/
/*146*/             /*Scope*/ 30, /*->177*/
/*147*/               OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*149*/               OPC_Scope, 12, /*->163*/ // 2 children in Scope
/*151*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*154*/                 OPC_EmitMergeInputChains1_0,
/*155*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*163*/               /*Scope*/ 12, /*->176*/
/*164*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*167*/                 OPC_EmitMergeInputChains1_0,
/*168*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$rd)
/*176*/               0, /*End of Scope*/
/*177*/             0, /*End of Scope*/
/*178*/           /*Scope*/ 56, /*->235*/
/*179*/             OPC_CheckPredicate, 1, // Predicate_store
/*181*/             OPC_Scope, 12, /*->195*/ // 4 children in Scope
/*183*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*186*/               OPC_EmitMergeInputChains1_0,
/*187*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*195*/             /*Scope*/ 12, /*->208*/
/*196*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*199*/               OPC_EmitMergeInputChains1_0,
/*200*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$rd)
/*208*/             /*Scope*/ 12, /*->221*/
/*209*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*212*/               OPC_EmitMergeInputChains1_0,
/*213*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STCrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STCrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*221*/             /*Scope*/ 12, /*->234*/
/*222*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*225*/               OPC_EmitMergeInputChains1_0,
/*226*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STCri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STCri ADDRri:iPTR:$addr, i32:i32:$rd)
/*234*/             0, /*End of Scope*/
/*235*/           0, /*End of Scope*/
/*236*/         /*Scope*/ 61, /*->298*/
/*237*/           OPC_CheckChild1Type, MVT::v2i32,
/*239*/           OPC_RecordChild2, // #2 = $addr
/*240*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*242*/           OPC_CheckPredicate, 1, // Predicate_store
/*244*/           OPC_Scope, 12, /*->258*/ // 4 children in Scope
/*246*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*249*/             OPC_EmitMergeInputChains1_0,
/*250*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDrr ADDRrr:iPTR:$addr, v2i32:v2i32:$rd)
/*258*/           /*Scope*/ 12, /*->271*/
/*259*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*262*/             OPC_EmitMergeInputChains1_0,
/*263*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDri ADDRri:iPTR:$addr, v2i32:v2i32:$rd)
/*271*/           /*Scope*/ 12, /*->284*/
/*272*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*275*/             OPC_EmitMergeInputChains1_0,
/*276*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDCrr ADDRrr:iPTR:$addr, v2i32:v2i32:$rd)
/*284*/           /*Scope*/ 12, /*->297*/
/*285*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*288*/             OPC_EmitMergeInputChains1_0,
/*289*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDCri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDCri ADDRri:iPTR:$addr, v2i32:v2i32:$rd)
/*297*/           0, /*End of Scope*/
/*298*/         /*Scope*/ 35, /*->334*/
/*299*/           OPC_CheckChild1Type, MVT::f32,
/*301*/           OPC_RecordChild2, // #2 = $addr
/*302*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*304*/           OPC_CheckPredicate, 1, // Predicate_store
/*306*/           OPC_Scope, 12, /*->320*/ // 2 children in Scope
/*308*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*311*/             OPC_EmitMergeInputChains1_0,
/*312*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:f32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$rd)
/*320*/           /*Scope*/ 12, /*->333*/
/*321*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*324*/             OPC_EmitMergeInputChains1_0,
/*325*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:f32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$rd)
/*333*/           0, /*End of Scope*/
/*334*/         /*Scope*/ 35, /*->370*/
/*335*/           OPC_CheckChild1Type, MVT::f64,
/*337*/           OPC_RecordChild2, // #2 = $addr
/*338*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*340*/           OPC_CheckPredicate, 1, // Predicate_store
/*342*/           OPC_Scope, 12, /*->356*/ // 2 children in Scope
/*344*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*347*/             OPC_EmitMergeInputChains1_0,
/*348*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:f64:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$rd)
/*356*/           /*Scope*/ 12, /*->369*/
/*357*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*360*/             OPC_EmitMergeInputChains1_0,
/*361*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:f64:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$rd)
/*369*/           0, /*End of Scope*/
/*370*/         /*Scope*/ 37, /*->408*/
/*371*/           OPC_CheckChild1Type, MVT::f128,
/*373*/           OPC_RecordChild2, // #2 = $addr
/*374*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*376*/           OPC_CheckPredicate, 1, // Predicate_store
/*378*/           OPC_CheckPatternPredicate, 1, // (Subtarget->hasHardQuad()) && (Subtarget->isV9())
/*380*/           OPC_Scope, 12, /*->394*/ // 2 children in Scope
/*382*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*385*/             OPC_EmitMergeInputChains1_0,
/*386*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:f128:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFrr ADDRrr:iPTR:$addr, f128:f128:$rd)
/*394*/           /*Scope*/ 12, /*->407*/
/*395*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*398*/             OPC_EmitMergeInputChains1_0,
/*399*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:f128:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFri ADDRri:iPTR:$addr, f128:f128:$rd)
/*407*/           0, /*End of Scope*/
/*408*/         /*Scope*/ 16|128,1/*144*/, /*->554*/
/*410*/           OPC_CheckChild1Type, MVT::i64,
/*412*/           OPC_RecordChild2, // #2 = $addr
/*413*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*415*/           OPC_Scope, 32, /*->449*/ // 2 children in Scope
/*417*/             OPC_CheckPredicate, 1, // Predicate_store
/*419*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*421*/             OPC_Scope, 12, /*->435*/ // 2 children in Scope
/*423*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*426*/               OPC_EmitMergeInputChains1_0,
/*427*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$rd)
/*435*/             /*Scope*/ 12, /*->448*/
/*436*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*439*/               OPC_EmitMergeInputChains1_0,
/*440*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$rd)
/*448*/             0, /*End of Scope*/
/*449*/           /*Scope*/ 103, /*->553*/
/*450*/             OPC_CheckPredicate, 2, // Predicate_truncstore
/*452*/             OPC_Scope, 32, /*->486*/ // 3 children in Scope
/*454*/               OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*456*/               OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*458*/               OPC_Scope, 12, /*->472*/ // 2 children in Scope
/*460*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*463*/                 OPC_EmitMergeInputChains1_0,
/*464*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*472*/               /*Scope*/ 12, /*->485*/
/*473*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*476*/                 OPC_EmitMergeInputChains1_0,
/*477*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*485*/               0, /*End of Scope*/
/*486*/             /*Scope*/ 32, /*->519*/
/*487*/               OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*489*/               OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*491*/               OPC_Scope, 12, /*->505*/ // 2 children in Scope
/*493*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*496*/                 OPC_EmitMergeInputChains1_0,
/*497*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*505*/               /*Scope*/ 12, /*->518*/
/*506*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*509*/                 OPC_EmitMergeInputChains1_0,
/*510*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*518*/               0, /*End of Scope*/
/*519*/             /*Scope*/ 32, /*->552*/
/*520*/               OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*522*/               OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*524*/               OPC_Scope, 12, /*->538*/ // 2 children in Scope
/*526*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*529*/                 OPC_EmitMergeInputChains1_0,
/*530*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*538*/               /*Scope*/ 12, /*->551*/
/*539*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*542*/                 OPC_EmitMergeInputChains1_0,
/*543*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*551*/               0, /*End of Scope*/
/*552*/             0, /*End of Scope*/
/*553*/           0, /*End of Scope*/
/*554*/         0, /*End of Scope*/
/*555*/       0, /*End of Scope*/
/*556*/     /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::TLS_LD),// ->598
/*559*/       OPC_RecordChild0, // #0 = $addr
/*560*/       OPC_RecordChild1, // #1 = $sym
/*561*/       OPC_MoveChild1,
/*562*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*565*/       OPC_MoveParent,
/*566*/       OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->581
/*569*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*572*/         OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_LDrr), 0,
                    MVT::i32, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:i32 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym) - Complexity = 15
                // Dst: (TLS_LDrr:i32 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym)
/*581*/       /*SwitchType*/ 14, MVT::i64,// ->597
/*583*/         OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*585*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*588*/         OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_LDXrr), 0,
                    MVT::i64, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:i64 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym) - Complexity = 15
                // Dst: (TLS_LDXrr:i64 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym)
/*597*/       0, // EndSwitchType
/*598*/     /*SwitchOpcode*/ 17|128,3/*401*/, TARGET_VAL(ISD::ADD),// ->1003
/*602*/       OPC_Scope, 125, /*->729*/ // 4 children in Scope
/*604*/         OPC_MoveChild0,
/*605*/         OPC_SwitchOpcode /*2 cases */, 58, TARGET_VAL(SPISD::Hi),// ->667
/*609*/           OPC_RecordChild0, // #0 = $in1
/*610*/           OPC_MoveChild0,
/*611*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*614*/           OPC_MoveParent,
/*615*/           OPC_MoveParent,
/*616*/           OPC_MoveChild1,
/*617*/           OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*620*/           OPC_RecordChild0, // #1 = $in2
/*621*/           OPC_MoveChild0,
/*622*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*625*/           OPC_MoveParent,
/*626*/           OPC_MoveParent,
/*627*/           OPC_Scope, 17, /*->646*/ // 2 children in Scope
/*629*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*631*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*638*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (add:iPTR (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1), (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2)) - Complexity = 15
                    // Dst: (ADDri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*646*/           /*Scope*/ 19, /*->666*/
/*647*/             OPC_CheckType, MVT::i64,
/*649*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*651*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*658*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (add:i64 (SPhi:i64 (tglobaltlsaddr:i64):$in1), (SPlo:i64 (tglobaltlsaddr:i64):$in2)) - Complexity = 15
                    // Dst: (ADDXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*666*/           0, /*End of Scope*/
/*667*/         /*SwitchOpcode*/ 58, TARGET_VAL(SPISD::Lo),// ->728
/*670*/           OPC_RecordChild0, // #0 = $in2
/*671*/           OPC_MoveChild0,
/*672*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*675*/           OPC_MoveParent,
/*676*/           OPC_MoveParent,
/*677*/           OPC_MoveChild1,
/*678*/           OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*681*/           OPC_RecordChild0, // #1 = $in1
/*682*/           OPC_MoveChild0,
/*683*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*686*/           OPC_MoveParent,
/*687*/           OPC_MoveParent,
/*688*/           OPC_Scope, 17, /*->707*/ // 2 children in Scope
/*690*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*692*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*699*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2), (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1)) - Complexity = 15
                    // Dst: (ADDri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*707*/           /*Scope*/ 19, /*->727*/
/*708*/             OPC_CheckType, MVT::i64,
/*710*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*712*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*719*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (add:i64 (SPlo:i64 (tglobaltlsaddr:i64):$in2), (SPhi:i64 (tglobaltlsaddr:i64):$in1)) - Complexity = 15
                    // Dst: (ADDXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*727*/           0, /*End of Scope*/
/*728*/         0, // EndSwitchOpcode
/*729*/       /*Scope*/ 102, /*->832*/
/*730*/         OPC_RecordChild0, // #0 = $r
/*731*/         OPC_MoveChild1,
/*732*/         OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*735*/         OPC_RecordChild0, // #1 = $in
/*736*/         OPC_MoveChild0,
/*737*/         OPC_SwitchOpcode /*3 cases */, 28, TARGET_VAL(ISD::TargetGlobalAddress),// ->769
/*741*/           OPC_MoveParent,
/*742*/           OPC_MoveParent,
/*743*/           OPC_Scope, 10, /*->755*/ // 2 children in Scope
/*745*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*747*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
/*755*/           /*Scope*/ 12, /*->768*/
/*756*/             OPC_CheckType, MVT::i64,
/*758*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*760*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tglobaladdr:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tglobaladdr:i64):$in)
/*768*/           0, /*End of Scope*/
/*769*/         /*SwitchOpcode*/ 28, TARGET_VAL(ISD::TargetConstantPool),// ->800
/*772*/           OPC_MoveParent,
/*773*/           OPC_MoveParent,
/*774*/           OPC_Scope, 10, /*->786*/ // 2 children in Scope
/*776*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*778*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
/*786*/           /*Scope*/ 12, /*->799*/
/*787*/             OPC_CheckType, MVT::i64,
/*789*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*791*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tconstpool:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tconstpool:i64):$in)
/*799*/           0, /*End of Scope*/
/*800*/         /*SwitchOpcode*/ 28, TARGET_VAL(ISD::TargetBlockAddress),// ->831
/*803*/           OPC_MoveParent,
/*804*/           OPC_MoveParent,
/*805*/           OPC_Scope, 10, /*->817*/ // 2 children in Scope
/*807*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*809*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tblockaddress:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
/*817*/           /*Scope*/ 12, /*->830*/
/*818*/             OPC_CheckType, MVT::i64,
/*820*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*822*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tblockaddress:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tblockaddress:i64):$in)
/*830*/           0, /*End of Scope*/
/*831*/         0, // EndSwitchOpcode
/*832*/       /*Scope*/ 104, /*->937*/
/*833*/         OPC_MoveChild0,
/*834*/         OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*837*/         OPC_RecordChild0, // #0 = $in
/*838*/         OPC_MoveChild0,
/*839*/         OPC_SwitchOpcode /*3 cases */, 29, TARGET_VAL(ISD::TargetGlobalAddress),// ->872
/*843*/           OPC_MoveParent,
/*844*/           OPC_MoveParent,
/*845*/           OPC_RecordChild1, // #1 = $r
/*846*/           OPC_Scope, 10, /*->858*/ // 2 children in Scope
/*848*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*850*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
/*858*/           /*Scope*/ 12, /*->871*/
/*859*/             OPC_CheckType, MVT::i64,
/*861*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*863*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tglobaladdr:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tglobaladdr:i64):$in)
/*871*/           0, /*End of Scope*/
/*872*/         /*SwitchOpcode*/ 29, TARGET_VAL(ISD::TargetConstantPool),// ->904
/*875*/           OPC_MoveParent,
/*876*/           OPC_MoveParent,
/*877*/           OPC_RecordChild1, // #1 = $r
/*878*/           OPC_Scope, 10, /*->890*/ // 2 children in Scope
/*880*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*882*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
/*890*/           /*Scope*/ 12, /*->903*/
/*891*/             OPC_CheckType, MVT::i64,
/*893*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*895*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tconstpool:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tconstpool:i64):$in)
/*903*/           0, /*End of Scope*/
/*904*/         /*SwitchOpcode*/ 29, TARGET_VAL(ISD::TargetBlockAddress),// ->936
/*907*/           OPC_MoveParent,
/*908*/           OPC_MoveParent,
/*909*/           OPC_RecordChild1, // #1 = $r
/*910*/           OPC_Scope, 10, /*->922*/ // 2 children in Scope
/*912*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*914*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tblockaddress:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
/*922*/           /*Scope*/ 12, /*->935*/
/*923*/             OPC_CheckType, MVT::i64,
/*925*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*927*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tblockaddress:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tblockaddress:i64):$in)
/*935*/           0, /*End of Scope*/
/*936*/         0, // EndSwitchOpcode
/*937*/       /*Scope*/ 64, /*->1002*/
/*938*/         OPC_RecordChild0, // #0 = $rs1
/*939*/         OPC_RecordChild1, // #1 = $simm13
/*940*/         OPC_Scope, 35, /*->977*/ // 3 children in Scope
/*942*/           OPC_MoveChild1,
/*943*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*946*/           OPC_CheckPredicate, 6, // Predicate_simm13
/*948*/           OPC_MoveParent,
/*949*/           OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->962
/*952*/             OPC_EmitConvertToTarget, 1,
/*954*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*962*/           /*SwitchType*/ 12, MVT::i64,// ->976
/*964*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*966*/             OPC_EmitConvertToTarget, 1,
/*968*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*976*/           0, // EndSwitchType
/*977*/         /*Scope*/ 10, /*->988*/
/*978*/           OPC_CheckType, MVT::i32,
/*980*/           OPC_MorphNodeTo1, TARGET_VAL(SP::ADDrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ADDrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*988*/         /*Scope*/ 12, /*->1001*/
/*989*/           OPC_CheckType, MVT::i64,
/*991*/           OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*993*/           OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ADDXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*1001*/        0, /*End of Scope*/
/*1002*/      0, /*End of Scope*/
/*1003*/    /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::XOR),// ->1362
/*1007*/      OPC_Scope, 65|128,1/*193*/, /*->1203*/ // 4 children in Scope
/*1010*/        OPC_MoveChild0,
/*1011*/        OPC_SwitchOpcode /*3 cases */, 58, TARGET_VAL(SPISD::Hi),// ->1073
/*1015*/          OPC_RecordChild0, // #0 = $in1
/*1016*/          OPC_MoveChild0,
/*1017*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1020*/          OPC_MoveParent,
/*1021*/          OPC_MoveParent,
/*1022*/          OPC_MoveChild1,
/*1023*/          OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*1026*/          OPC_RecordChild0, // #1 = $in2
/*1027*/          OPC_MoveChild0,
/*1028*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1031*/          OPC_MoveParent,
/*1032*/          OPC_MoveParent,
/*1033*/          OPC_Scope, 17, /*->1052*/ // 2 children in Scope
/*1035*/            OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*1037*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*1044*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:iPTR (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1), (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2)) - Complexity = 15
                    // Dst: (XORri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*1052*/          /*Scope*/ 19, /*->1072*/
/*1053*/            OPC_CheckType, MVT::i64,
/*1055*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1057*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*1064*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:i64 (SPhi:i64 (tglobaltlsaddr:i64):$in1), (SPlo:i64 (tglobaltlsaddr:i64):$in2)) - Complexity = 15
                    // Dst: (XORXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*1072*/          0, /*End of Scope*/
/*1073*/        /*SwitchOpcode*/ 58, TARGET_VAL(SPISD::Lo),// ->1134
/*1076*/          OPC_RecordChild0, // #0 = $in2
/*1077*/          OPC_MoveChild0,
/*1078*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1081*/          OPC_MoveParent,
/*1082*/          OPC_MoveParent,
/*1083*/          OPC_MoveChild1,
/*1084*/          OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*1087*/          OPC_RecordChild0, // #1 = $in1
/*1088*/          OPC_MoveChild0,
/*1089*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1092*/          OPC_MoveParent,
/*1093*/          OPC_MoveParent,
/*1094*/          OPC_Scope, 17, /*->1113*/ // 2 children in Scope
/*1096*/            OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*1098*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*1105*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:iPTR (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2), (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1)) - Complexity = 15
                    // Dst: (XORri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*1113*/          /*Scope*/ 19, /*->1133*/
/*1114*/            OPC_CheckType, MVT::i64,
/*1116*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1118*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*1125*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:i64 (SPlo:i64 (tglobaltlsaddr:i64):$in2), (SPhi:i64 (tglobaltlsaddr:i64):$in1)) - Complexity = 15
                    // Dst: (XORXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*1133*/          0, /*End of Scope*/
/*1134*/        /*SwitchOpcode*/ 65, TARGET_VAL(ISD::XOR),// ->1202
/*1137*/          OPC_RecordChild0, // #0 = $rs1
/*1138*/          OPC_Scope, 37, /*->1177*/ // 2 children in Scope
/*1140*/            OPC_RecordChild1, // #1 = $rs2
/*1141*/            OPC_MoveParent,
/*1142*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1153*/            OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->1164
/*1156*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:i32 (xor:i32 i32:i32:$rs1, i32:i32:$rs2), -1:i32) - Complexity = 11
                      // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1164*/            /*SwitchType*/ 10, MVT::i64,// ->1176
/*1166*/              OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1168*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                          MVT::i64, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:i64 (xor:i64 i64:i64:$b, i64:i64:$c), -1:i64) - Complexity = 11
                      // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1176*/            0, // EndSwitchType
/*1177*/          /*Scope*/ 23, /*->1201*/
/*1178*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1189*/            OPC_MoveParent,
/*1190*/            OPC_RecordChild1, // #1 = $rs2
/*1191*/            OPC_CheckType, MVT::i32,
/*1193*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rs1, -1:i32), i32:i32:$rs2) - Complexity = 11
                    // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1201*/          0, /*End of Scope*/
/*1202*/        0, // EndSwitchOpcode
/*1203*/      /*Scope*/ 28, /*->1232*/
/*1204*/        OPC_RecordChild0, // #0 = $rs2
/*1205*/        OPC_MoveChild1,
/*1206*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1209*/        OPC_RecordChild0, // #1 = $rs1
/*1210*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1221*/        OPC_MoveParent,
/*1222*/        OPC_CheckType, MVT::i32,
/*1224*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (xor:i32 i32:i32:$rs2, (xor:i32 i32:i32:$rs1, -1:i32)) - Complexity = 11
                // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1232*/      /*Scope*/ 30, /*->1263*/
/*1233*/        OPC_MoveChild0,
/*1234*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1237*/        OPC_RecordChild0, // #0 = $b
/*1238*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1249*/        OPC_MoveParent,
/*1250*/        OPC_RecordChild1, // #1 = $c
/*1251*/        OPC_CheckType, MVT::i64,
/*1253*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1255*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$c) - Complexity = 11
                // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1263*/      /*Scope*/ 97, /*->1361*/
/*1264*/        OPC_RecordChild0, // #0 = $c
/*1265*/        OPC_Scope, 29, /*->1296*/ // 2 children in Scope
/*1267*/          OPC_MoveChild1,
/*1268*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1271*/          OPC_RecordChild0, // #1 = $b
/*1272*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1283*/          OPC_MoveParent,
/*1284*/          OPC_CheckType, MVT::i64,
/*1286*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1288*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 i64:i64:$c, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                  // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1296*/        /*Scope*/ 63, /*->1360*/
/*1297*/          OPC_RecordChild1, // #1 = $simm13
/*1298*/          OPC_Scope, 35, /*->1335*/ // 3 children in Scope
/*1300*/            OPC_MoveChild1,
/*1301*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1304*/            OPC_CheckPredicate, 6, // Predicate_simm13
/*1306*/            OPC_MoveParent,
/*1307*/            OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->1320
/*1310*/              OPC_EmitConvertToTarget, 1,
/*1312*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*1320*/            /*SwitchType*/ 12, MVT::i64,// ->1334
/*1322*/              OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1324*/              OPC_EmitConvertToTarget, 1,
/*1326*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                          MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*1334*/            0, // EndSwitchType
/*1335*/          /*Scope*/ 10, /*->1346*/
/*1336*/            OPC_CheckType, MVT::i32,
/*1338*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                    // Dst: (XORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1346*/          /*Scope*/ 12, /*->1359*/
/*1347*/            OPC_CheckType, MVT::i64,
/*1349*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1351*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXrr), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                    // Dst: (XORXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*1359*/          0, /*End of Scope*/
/*1360*/        0, /*End of Scope*/
/*1361*/      0, /*End of Scope*/
/*1362*/    /*SwitchOpcode*/ 39|128,7/*935*/, TARGET_VAL(ISD::LOAD),// ->2301
/*1366*/      OPC_RecordMemRef,
/*1367*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1368*/      OPC_RecordChild1, // #1 = $addr
/*1369*/      OPC_CheckPredicate, 7, // Predicate_unindexedload
/*1371*/      OPC_Scope, 68, /*->1441*/ // 18 children in Scope
/*1373*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*1375*/        OPC_CheckType, MVT::i32,
/*1377*/        OPC_Scope, 30, /*->1409*/ // 2 children in Scope
/*1379*/          OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1381*/          OPC_Scope, 12, /*->1395*/ // 2 children in Scope
/*1383*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1386*/            OPC_EmitMergeInputChains1_0,
/*1387*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*1395*/          /*Scope*/ 12, /*->1408*/
/*1396*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1399*/            OPC_EmitMergeInputChains1_0,
/*1400*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*1408*/          0, /*End of Scope*/
/*1409*/        /*Scope*/ 30, /*->1440*/
/*1410*/          OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*1412*/          OPC_Scope, 12, /*->1426*/ // 2 children in Scope
/*1414*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1417*/            OPC_EmitMergeInputChains1_0,
/*1418*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*1426*/          /*Scope*/ 12, /*->1439*/
/*1427*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1430*/            OPC_EmitMergeInputChains1_0,
/*1431*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*1439*/          0, /*End of Scope*/
/*1440*/        0, /*End of Scope*/
/*1441*/      /*Scope*/ 68, /*->1510*/
/*1442*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1444*/        OPC_CheckType, MVT::i32,
/*1446*/        OPC_Scope, 30, /*->1478*/ // 2 children in Scope
/*1448*/          OPC_CheckPredicate, 9, // Predicate_zextloadi8
/*1450*/          OPC_Scope, 12, /*->1464*/ // 2 children in Scope
/*1452*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1455*/            OPC_EmitMergeInputChains1_0,
/*1456*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*1464*/          /*Scope*/ 12, /*->1477*/
/*1465*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1468*/            OPC_EmitMergeInputChains1_0,
/*1469*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*1477*/          0, /*End of Scope*/
/*1478*/        /*Scope*/ 30, /*->1509*/
/*1479*/          OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*1481*/          OPC_Scope, 12, /*->1495*/ // 2 children in Scope
/*1483*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1486*/            OPC_EmitMergeInputChains1_0,
/*1487*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*1495*/          /*Scope*/ 12, /*->1508*/
/*1496*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1499*/            OPC_EmitMergeInputChains1_0,
/*1500*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*1508*/          0, /*End of Scope*/
/*1509*/        0, /*End of Scope*/
/*1510*/      /*Scope*/ 58, /*->1569*/
/*1511*/        OPC_CheckPredicate, 12, // Predicate_load
/*1513*/        OPC_CheckType, MVT::i32,
/*1515*/        OPC_Scope, 12, /*->1529*/ // 4 children in Scope
/*1517*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1520*/          OPC_EmitMergeInputChains1_0,
/*1521*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*1529*/        /*Scope*/ 12, /*->1542*/
/*1530*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1533*/          OPC_EmitMergeInputChains1_0,
/*1534*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*1542*/        /*Scope*/ 12, /*->1555*/
/*1543*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1546*/          OPC_EmitMergeInputChains1_0,
/*1547*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDCrr:i32 ADDRrr:iPTR:$addr)
/*1555*/        /*Scope*/ 12, /*->1568*/
/*1556*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1559*/          OPC_EmitMergeInputChains1_0,
/*1560*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDCri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDCri:i32 ADDRri:iPTR:$addr)
/*1568*/        0, /*End of Scope*/
/*1569*/      /*Scope*/ 99, /*->1669*/
/*1570*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1572*/        OPC_CheckType, MVT::i32,
/*1574*/        OPC_Scope, 30, /*->1606*/ // 3 children in Scope
/*1576*/          OPC_CheckPredicate, 14, // Predicate_extloadi1
/*1578*/          OPC_Scope, 12, /*->1592*/ // 2 children in Scope
/*1580*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1583*/            OPC_EmitMergeInputChains1_0,
/*1584*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1592*/          /*Scope*/ 12, /*->1605*/
/*1593*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1596*/            OPC_EmitMergeInputChains1_0,
/*1597*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1605*/          0, /*End of Scope*/
/*1606*/        /*Scope*/ 30, /*->1637*/
/*1607*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1609*/          OPC_Scope, 12, /*->1623*/ // 2 children in Scope
/*1611*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1614*/            OPC_EmitMergeInputChains1_0,
/*1615*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1623*/          /*Scope*/ 12, /*->1636*/
/*1624*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1627*/            OPC_EmitMergeInputChains1_0,
/*1628*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1636*/          0, /*End of Scope*/
/*1637*/        /*Scope*/ 30, /*->1668*/
/*1638*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1640*/          OPC_Scope, 12, /*->1654*/ // 2 children in Scope
/*1642*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1645*/            OPC_EmitMergeInputChains1_0,
/*1646*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*1654*/          /*Scope*/ 12, /*->1667*/
/*1655*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1658*/            OPC_EmitMergeInputChains1_0,
/*1659*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*1667*/          0, /*End of Scope*/
/*1668*/        0, /*End of Scope*/
/*1669*/      /*Scope*/ 34, /*->1704*/
/*1670*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1672*/        OPC_CheckPredicate, 14, // Predicate_zextloadi1
/*1674*/        OPC_CheckType, MVT::i32,
/*1676*/        OPC_Scope, 12, /*->1690*/ // 2 children in Scope
/*1678*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1681*/          OPC_EmitMergeInputChains1_0,
/*1682*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1690*/        /*Scope*/ 12, /*->1703*/
/*1691*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1694*/          OPC_EmitMergeInputChains1_0,
/*1695*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1703*/        0, /*End of Scope*/
/*1704*/      /*Scope*/ 34, /*->1739*/
/*1705*/        OPC_CheckPredicate, 12, // Predicate_load
/*1707*/        OPC_CheckType, MVT::i64,
/*1709*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1711*/        OPC_Scope, 12, /*->1725*/ // 2 children in Scope
/*1713*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1716*/          OPC_EmitMergeInputChains1_0,
/*1717*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*1725*/        /*Scope*/ 12, /*->1738*/
/*1726*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1729*/          OPC_EmitMergeInputChains1_0,
/*1730*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*1738*/        0, /*End of Scope*/
/*1739*/      /*Scope*/ 36, /*->1776*/
/*1740*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1742*/        OPC_CheckPredicate, 14, // Predicate_zextloadi1
/*1744*/        OPC_CheckType, MVT::i64,
/*1746*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1748*/        OPC_Scope, 12, /*->1762*/ // 2 children in Scope
/*1750*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1753*/          OPC_EmitMergeInputChains1_0,
/*1754*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1762*/        /*Scope*/ 12, /*->1775*/
/*1763*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1766*/          OPC_EmitMergeInputChains1_0,
/*1767*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1775*/        0, /*End of Scope*/
/*1776*/      /*Scope*/ 36, /*->1813*/
/*1777*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1779*/        OPC_CheckPredicate, 14, // Predicate_extloadi1
/*1781*/        OPC_CheckType, MVT::i64,
/*1783*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1785*/        OPC_Scope, 12, /*->1799*/ // 2 children in Scope
/*1787*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1790*/          OPC_EmitMergeInputChains1_0,
/*1791*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1799*/        /*Scope*/ 12, /*->1812*/
/*1800*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1803*/          OPC_EmitMergeInputChains1_0,
/*1804*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1812*/        0, /*End of Scope*/
/*1813*/      /*Scope*/ 36, /*->1850*/
/*1814*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1816*/        OPC_CheckPredicate, 9, // Predicate_zextloadi8
/*1818*/        OPC_CheckType, MVT::i64,
/*1820*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1822*/        OPC_Scope, 12, /*->1836*/ // 2 children in Scope
/*1824*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1827*/          OPC_EmitMergeInputChains1_0,
/*1828*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1836*/        /*Scope*/ 12, /*->1849*/
/*1837*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1840*/          OPC_EmitMergeInputChains1_0,
/*1841*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1849*/        0, /*End of Scope*/
/*1850*/      /*Scope*/ 36, /*->1887*/
/*1851*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1853*/        OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1855*/        OPC_CheckType, MVT::i64,
/*1857*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1859*/        OPC_Scope, 12, /*->1873*/ // 2 children in Scope
/*1861*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1873*/        /*Scope*/ 12, /*->1886*/
/*1874*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1877*/          OPC_EmitMergeInputChains1_0,
/*1878*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1886*/        0, /*End of Scope*/
/*1887*/      /*Scope*/ 36, /*->1924*/
/*1888*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*1890*/        OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1892*/        OPC_CheckType, MVT::i64,
/*1894*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1896*/        OPC_Scope, 12, /*->1910*/ // 2 children in Scope
/*1898*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1901*/          OPC_EmitMergeInputChains1_0,
/*1902*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*1910*/        /*Scope*/ 12, /*->1923*/
/*1911*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1914*/          OPC_EmitMergeInputChains1_0,
/*1915*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*1923*/        0, /*End of Scope*/
/*1924*/      /*Scope*/ 36, /*->1961*/
/*1925*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1927*/        OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*1929*/        OPC_CheckType, MVT::i64,
/*1931*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1933*/        OPC_Scope, 12, /*->1947*/ // 2 children in Scope
/*1935*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1938*/          OPC_EmitMergeInputChains1_0,
/*1939*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1947*/        /*Scope*/ 12, /*->1960*/
/*1948*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1951*/          OPC_EmitMergeInputChains1_0,
/*1952*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1960*/        0, /*End of Scope*/
/*1961*/      /*Scope*/ 36, /*->1998*/
/*1962*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1964*/        OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1966*/        OPC_CheckType, MVT::i64,
/*1968*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1970*/        OPC_Scope, 12, /*->1984*/ // 2 children in Scope
/*1972*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1975*/          OPC_EmitMergeInputChains1_0,
/*1976*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1984*/        /*Scope*/ 12, /*->1997*/
/*1985*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1988*/          OPC_EmitMergeInputChains1_0,
/*1989*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1997*/        0, /*End of Scope*/
/*1998*/      /*Scope*/ 36, /*->2035*/
/*1999*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*2001*/        OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*2003*/        OPC_CheckType, MVT::i64,
/*2005*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2007*/        OPC_Scope, 12, /*->2021*/ // 2 children in Scope
/*2009*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2012*/          OPC_EmitMergeInputChains1_0,
/*2013*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*2021*/        /*Scope*/ 12, /*->2034*/
/*2022*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2025*/          OPC_EmitMergeInputChains1_0,
/*2026*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*2034*/        0, /*End of Scope*/
/*2035*/      /*Scope*/ 36, /*->2072*/
/*2036*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*2038*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*2040*/        OPC_CheckType, MVT::i64,
/*2042*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2044*/        OPC_Scope, 12, /*->2058*/ // 2 children in Scope
/*2046*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2049*/          OPC_EmitMergeInputChains1_0,
/*2050*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*2058*/        /*Scope*/ 12, /*->2071*/
/*2059*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2062*/          OPC_EmitMergeInputChains1_0,
/*2063*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*2071*/        0, /*End of Scope*/
/*2072*/      /*Scope*/ 36, /*->2109*/
/*2073*/        OPC_CheckPredicate, 13, // Predicate_extload
/*2075*/        OPC_CheckPredicate, 15, // Predicate_extloadi32
/*2077*/        OPC_CheckType, MVT::i64,
/*2079*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2081*/        OPC_Scope, 12, /*->2095*/ // 2 children in Scope
/*2083*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2086*/          OPC_EmitMergeInputChains1_0,
/*2087*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*2095*/        /*Scope*/ 12, /*->2108*/
/*2096*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2099*/          OPC_EmitMergeInputChains1_0,
/*2100*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*2108*/        0, /*End of Scope*/
/*2109*/      /*Scope*/ 36, /*->2146*/
/*2110*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*2112*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*2114*/        OPC_CheckType, MVT::i64,
/*2116*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2118*/        OPC_Scope, 12, /*->2132*/ // 2 children in Scope
/*2120*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2123*/          OPC_EmitMergeInputChains1_0,
/*2124*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*2132*/        /*Scope*/ 12, /*->2145*/
/*2133*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2136*/          OPC_EmitMergeInputChains1_0,
/*2137*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*2145*/        0, /*End of Scope*/
/*2146*/      /*Scope*/ 24|128,1/*152*/, /*->2300*/
/*2148*/        OPC_CheckPredicate, 12, // Predicate_load
/*2150*/        OPC_SwitchType /*4 cases */, 28, MVT::f32,// ->2181
/*2153*/          OPC_Scope, 12, /*->2167*/ // 2 children in Scope
/*2155*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2158*/            OPC_EmitMergeInputChains1_0,
/*2159*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*2167*/          /*Scope*/ 12, /*->2180*/
/*2168*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2171*/            OPC_EmitMergeInputChains1_0,
/*2172*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*2180*/          0, /*End of Scope*/
/*2181*/        /*SwitchType*/ 28, MVT::f64,// ->2211
/*2183*/          OPC_Scope, 12, /*->2197*/ // 2 children in Scope
/*2185*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2188*/            OPC_EmitMergeInputChains1_0,
/*2189*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*2197*/          /*Scope*/ 12, /*->2210*/
/*2198*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2201*/            OPC_EmitMergeInputChains1_0,
/*2202*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*2210*/          0, /*End of Scope*/
/*2211*/        /*SwitchType*/ 30, MVT::f128,// ->2243
/*2213*/          OPC_CheckPatternPredicate, 1, // (Subtarget->hasHardQuad()) && (Subtarget->isV9())
/*2215*/          OPC_Scope, 12, /*->2229*/ // 2 children in Scope
/*2217*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2220*/            OPC_EmitMergeInputChains1_0,
/*2221*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f128 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFrr:f128 ADDRrr:iPTR:$addr)
/*2229*/          /*Scope*/ 12, /*->2242*/
/*2230*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2233*/            OPC_EmitMergeInputChains1_0,
/*2234*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f128 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFri:f128 ADDRri:iPTR:$addr)
/*2242*/          0, /*End of Scope*/
/*2243*/        /*SwitchType*/ 54, MVT::v2i32,// ->2299
/*2245*/          OPC_Scope, 12, /*->2259*/ // 4 children in Scope
/*2247*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2250*/            OPC_EmitMergeInputChains1_0,
/*2251*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDrr:v2i32 ADDRrr:iPTR:$addr)
/*2259*/          /*Scope*/ 12, /*->2272*/
/*2260*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2263*/            OPC_EmitMergeInputChains1_0,
/*2264*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDri:v2i32 ADDRri:iPTR:$addr)
/*2272*/          /*Scope*/ 12, /*->2285*/
/*2273*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2276*/            OPC_EmitMergeInputChains1_0,
/*2277*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDCrr:v2i32 ADDRrr:iPTR:$addr)
/*2285*/          /*Scope*/ 12, /*->2298*/
/*2286*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2289*/            OPC_EmitMergeInputChains1_0,
/*2290*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDCri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDCri:v2i32 ADDRri:iPTR:$addr)
/*2298*/          0, /*End of Scope*/
/*2299*/        0, // EndSwitchType
/*2300*/      0, /*End of Scope*/
/*2301*/    /*SwitchOpcode*/ 38, TARGET_VAL(ISD::ATOMIC_SWAP),// ->2342
/*2304*/      OPC_RecordMemRef,
/*2305*/      OPC_RecordNode, // #0 = 'atomic_swap' chained node
/*2306*/      OPC_RecordChild1, // #1 = $addr
/*2307*/      OPC_RecordChild2, // #2 = $val
/*2308*/      OPC_CheckPredicate, 16, // Predicate_atomic_swap_32
/*2310*/      OPC_CheckType, MVT::i32,
/*2312*/      OPC_Scope, 13, /*->2327*/ // 2 children in Scope
/*2314*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #3 #4
/*2317*/        OPC_EmitMergeInputChains1_0,
/*2318*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SWAPrr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 ADDRrr:iPTR:$addr, i32:i32:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (SWAPrr:i32 ADDRrr:iPTR:$addr, i32:i32:$val)
/*2327*/      /*Scope*/ 13, /*->2341*/
/*2328*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #3 #4
/*2331*/        OPC_EmitMergeInputChains1_0,
/*2332*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SWAPri), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 ADDRri:iPTR:$addr, i32:i32:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (SWAPri:i32 ADDRri:iPTR:$addr, i32:i32:$val)
/*2341*/      0, /*End of Scope*/
/*2342*/    /*SwitchOpcode*/ 8|128,1/*136*/, TARGET_VAL(ISD::ATOMIC_LOAD),// ->2482
/*2346*/      OPC_RecordMemRef,
/*2347*/      OPC_RecordNode, // #0 = 'atomic_load' chained node
/*2348*/      OPC_RecordChild1, // #1 = $src
/*2349*/      OPC_SwitchType /*2 cases */, 95, MVT::i32,// ->2447
/*2352*/        OPC_Scope, 30, /*->2384*/ // 3 children in Scope
/*2354*/          OPC_CheckPredicate, 17, // Predicate_atomic_load_8
/*2356*/          OPC_Scope, 12, /*->2370*/ // 2 children in Scope
/*2358*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2361*/            OPC_EmitMergeInputChains1_0,
/*2362*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*2370*/          /*Scope*/ 12, /*->2383*/
/*2371*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2374*/            OPC_EmitMergeInputChains1_0,
/*2375*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*2383*/          0, /*End of Scope*/
/*2384*/        /*Scope*/ 30, /*->2415*/
/*2385*/          OPC_CheckPredicate, 18, // Predicate_atomic_load_16
/*2387*/          OPC_Scope, 12, /*->2401*/ // 2 children in Scope
/*2389*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2392*/            OPC_EmitMergeInputChains1_0,
/*2393*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*2401*/          /*Scope*/ 12, /*->2414*/
/*2402*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2405*/            OPC_EmitMergeInputChains1_0,
/*2406*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*2414*/          0, /*End of Scope*/
/*2415*/        /*Scope*/ 30, /*->2446*/
/*2416*/          OPC_CheckPredicate, 19, // Predicate_atomic_load_32
/*2418*/          OPC_Scope, 12, /*->2432*/ // 2 children in Scope
/*2420*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2423*/            OPC_EmitMergeInputChains1_0,
/*2424*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_32>> - Complexity = 13
                    // Dst: (LDrr:i32 ADDRrr:iPTR:$src)
/*2432*/          /*Scope*/ 12, /*->2445*/
/*2433*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2436*/            OPC_EmitMergeInputChains1_0,
/*2437*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_32>> - Complexity = 13
                    // Dst: (LDri:i32 ADDRri:iPTR:$src)
/*2445*/          0, /*End of Scope*/
/*2446*/        0, /*End of Scope*/
/*2447*/      /*SwitchType*/ 32, MVT::i64,// ->2481
/*2449*/        OPC_CheckPredicate, 20, // Predicate_atomic_load_64
/*2451*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2453*/        OPC_Scope, 12, /*->2467*/ // 2 children in Scope
/*2455*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2458*/          OPC_EmitMergeInputChains1_0,
/*2459*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i64 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_64>> - Complexity = 13
                  // Dst: (LDXrr:i64 ADDRrr:iPTR:$src)
/*2467*/        /*Scope*/ 12, /*->2480*/
/*2468*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2471*/          OPC_EmitMergeInputChains1_0,
/*2472*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i64 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_64>> - Complexity = 13
                  // Dst: (LDXri:i64 ADDRri:iPTR:$src)
/*2480*/        0, /*End of Scope*/
/*2481*/      0, // EndSwitchType
/*2482*/    /*SwitchOpcode*/ 11|128,1/*139*/, TARGET_VAL(ISD::ATOMIC_STORE),// ->2625
/*2486*/      OPC_RecordMemRef,
/*2487*/      OPC_RecordNode, // #0 = 'atomic_store' chained node
/*2488*/      OPC_RecordChild1, // #1 = $dst
/*2489*/      OPC_RecordChild2, // #2 = $val
/*2490*/      OPC_Scope, 97, /*->2589*/ // 2 children in Scope
/*2492*/        OPC_CheckChild2Type, MVT::i32,
/*2494*/        OPC_Scope, 30, /*->2526*/ // 3 children in Scope
/*2496*/          OPC_CheckPredicate, 21, // Predicate_atomic_store_8
/*2498*/          OPC_Scope, 12, /*->2512*/ // 2 children in Scope
/*2500*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2503*/            OPC_EmitMergeInputChains1_0,
/*2504*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2512*/          /*Scope*/ 12, /*->2525*/
/*2513*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2516*/            OPC_EmitMergeInputChains1_0,
/*2517*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_8>> - Complexity = 13
                    // Dst: (STBri ADDRri:iPTR:$dst, ?:i32:$val)
/*2525*/          0, /*End of Scope*/
/*2526*/        /*Scope*/ 30, /*->2557*/
/*2527*/          OPC_CheckPredicate, 22, // Predicate_atomic_store_16
/*2529*/          OPC_Scope, 12, /*->2543*/ // 2 children in Scope
/*2531*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2534*/            OPC_EmitMergeInputChains1_0,
/*2535*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2543*/          /*Scope*/ 12, /*->2556*/
/*2544*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2547*/            OPC_EmitMergeInputChains1_0,
/*2548*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_16>> - Complexity = 13
                    // Dst: (STHri ADDRri:iPTR:$dst, ?:i32:$val)
/*2556*/          0, /*End of Scope*/
/*2557*/        /*Scope*/ 30, /*->2588*/
/*2558*/          OPC_CheckPredicate, 16, // Predicate_atomic_store_32
/*2560*/          OPC_Scope, 12, /*->2574*/ // 2 children in Scope
/*2562*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2565*/            OPC_EmitMergeInputChains1_0,
/*2566*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_32>> - Complexity = 13
                    // Dst: (STrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2574*/          /*Scope*/ 12, /*->2587*/
/*2575*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2578*/            OPC_EmitMergeInputChains1_0,
/*2579*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_32>> - Complexity = 13
                    // Dst: (STri ADDRri:iPTR:$dst, ?:i32:$val)
/*2587*/          0, /*End of Scope*/
/*2588*/        0, /*End of Scope*/
/*2589*/      /*Scope*/ 34, /*->2624*/
/*2590*/        OPC_CheckChild2Type, MVT::i64,
/*2592*/        OPC_CheckPredicate, 23, // Predicate_atomic_store_64
/*2594*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2596*/        OPC_Scope, 12, /*->2610*/ // 2 children in Scope
/*2598*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2601*/          OPC_EmitMergeInputChains1_0,
/*2602*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRrr:iPTR:$dst, i64:i64:$val)<<P:Predicate_atomic_store_64>> - Complexity = 13
                  // Dst: (STXrr ADDRrr:iPTR:$dst, ?:i64:$val)
/*2610*/        /*Scope*/ 12, /*->2623*/
/*2611*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2614*/          OPC_EmitMergeInputChains1_0,
/*2615*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRri:iPTR:$dst, i64:i64:$val)<<P:Predicate_atomic_store_64>> - Complexity = 13
                  // Dst: (STXri ADDRri:iPTR:$dst, ?:i64:$val)
/*2623*/        0, /*End of Scope*/
/*2624*/      0, /*End of Scope*/
/*2625*/    /*SwitchOpcode*/ 28, TARGET_VAL(ISD::BRIND),// ->2656
/*2628*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2629*/      OPC_RecordChild1, // #1 = $ptr
/*2630*/      OPC_Scope, 11, /*->2643*/ // 2 children in Scope
/*2632*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*2635*/        OPC_EmitMergeInputChains1_0,
/*2636*/        OPC_MorphNodeTo0, TARGET_VAL(SP::BINDrr), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRrr:iPTR:$ptr) - Complexity = 12
                // Dst: (BINDrr ADDRrr:iPTR:$ptr)
/*2643*/      /*Scope*/ 11, /*->2655*/
/*2644*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*2647*/        OPC_EmitMergeInputChains1_0,
/*2648*/        OPC_MorphNodeTo0, TARGET_VAL(SP::BINDri), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRri:iPTR:$ptr) - Complexity = 12
                // Dst: (BINDri ADDRri:iPTR:$ptr)
/*2655*/      0, /*End of Scope*/
/*2656*/    /*SwitchOpcode*/ 55, TARGET_VAL(SPISD::CALL),// ->2714
/*2659*/      OPC_RecordNode, // #0 = 'call' chained node
/*2660*/      OPC_CaptureGlueInput,
/*2661*/      OPC_RecordChild1, // #1 = $ptr
/*2662*/      OPC_Scope, 11, /*->2675*/ // 3 children in Scope
/*2664*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*2667*/        OPC_EmitMergeInputChains1_0,
/*2668*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CALLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    2/*#Ops*/, 2, 3, 
                // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
                // Dst: (CALLrr ADDRrr:i32:$ptr)
/*2675*/      /*Scope*/ 11, /*->2687*/
/*2676*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*2679*/        OPC_EmitMergeInputChains1_0,
/*2680*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CALLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    2/*#Ops*/, 2, 3, 
                // Src: (call ADDRri:i32:$ptr) - Complexity = 12
                // Dst: (CALLri ADDRri:i32:$ptr)
/*2687*/      /*Scope*/ 25, /*->2713*/
/*2688*/        OPC_MoveChild1,
/*2689*/        OPC_SwitchOpcode /*2 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->2701
/*2693*/          OPC_MoveParent,
/*2694*/          OPC_EmitMergeInputChains1_0,
/*2695*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#Ops*/, 1, 
                  // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL (tglobaladdr:i32):$dst)
/*2701*/        /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->2712
/*2704*/          OPC_MoveParent,
/*2705*/          OPC_EmitMergeInputChains1_0,
/*2706*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#Ops*/, 1, 
                  // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALL (texternalsym:i32):$dst)
/*2712*/        0, // EndSwitchOpcode
/*2713*/      0, /*End of Scope*/
/*2714*/    /*SwitchOpcode*/ 34, TARGET_VAL(SPISD::EH_SJLJ_SETJMP),// ->2751
/*2717*/      OPC_RecordNode, // #0 = 'SPsjlj_setjmp' chained node
/*2718*/      OPC_RecordChild1, // #1 = $buf
/*2719*/      OPC_CheckType, MVT::i32,
/*2721*/      OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*2723*/      OPC_Scope, 12, /*->2737*/ // 2 children in Scope
/*2725*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$buf #2 #3
/*2728*/        OPC_EmitMergeInputChains1_0,
/*2729*/        OPC_MorphNodeTo1, TARGET_VAL(SP::EH_SJLJ_SETJMP32ri), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_setjmp:i32 ADDRri:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_SETJMP32ri:i32 ADDRri:iPTR:$buf)
/*2737*/      /*Scope*/ 12, /*->2750*/
/*2738*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$buf #2 #3
/*2741*/        OPC_EmitMergeInputChains1_0,
/*2742*/        OPC_MorphNodeTo1, TARGET_VAL(SP::EH_SJLJ_SETJMP32rr), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_setjmp:i32 ADDRrr:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_SETJMP32rr:i32 ADDRrr:iPTR:$buf)
/*2750*/      0, /*End of Scope*/
/*2751*/    /*SwitchOpcode*/ 30, TARGET_VAL(SPISD::EH_SJLJ_LONGJMP),// ->2784
/*2754*/      OPC_RecordNode, // #0 = 'SPsjlj_longjmp' chained node
/*2755*/      OPC_RecordChild1, // #1 = $buf
/*2756*/      OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*2758*/      OPC_Scope, 11, /*->2771*/ // 2 children in Scope
/*2760*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$buf #2 #3
/*2763*/        OPC_EmitMergeInputChains1_0,
/*2764*/        OPC_MorphNodeTo0, TARGET_VAL(SP::EH_SJLJ_LONGJMP32ri), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_longjmp ADDRri:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_LONGJMP32ri ADDRri:iPTR:$buf)
/*2771*/      /*Scope*/ 11, /*->2783*/
/*2772*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$buf #2 #3
/*2775*/        OPC_EmitMergeInputChains1_0,
/*2776*/        OPC_MorphNodeTo0, TARGET_VAL(SP::EH_SJLJ_LONGJMP32rr), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_longjmp ADDRrr:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_LONGJMP32rr ADDRrr:iPTR:$buf)
/*2783*/      0, /*End of Scope*/
/*2784*/    /*SwitchOpcode*/ 48|128,1/*176*/, TARGET_VAL(ISD::AND),// ->2964
/*2788*/      OPC_Scope, 42, /*->2832*/ // 4 children in Scope
/*2790*/        OPC_RecordChild0, // #0 = $rs1
/*2791*/        OPC_MoveChild1,
/*2792*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2795*/        OPC_RecordChild0, // #1 = $rs2
/*2796*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2807*/        OPC_MoveParent,
/*2808*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2819
/*2811*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rs1, (xor:i32 i32:i32:$rs2, -1:i32)) - Complexity = 11
                  // Dst: (ANDNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2819*/        /*SwitchType*/ 10, MVT::i64,// ->2831
/*2821*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2823*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$b, (xor:i64 i64:i64:$c, -1:i64)) - Complexity = 11
                  // Dst: (ANDXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2831*/        0, // EndSwitchType
/*2832*/      /*Scope*/ 42, /*->2875*/
/*2833*/        OPC_MoveChild0,
/*2834*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2837*/        OPC_RecordChild0, // #0 = $rs2
/*2838*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2849*/        OPC_MoveParent,
/*2850*/        OPC_RecordChild1, // #1 = $rs1
/*2851*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2862
/*2854*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rs2, -1:i32), i32:i32:$rs1) - Complexity = 11
                  // Dst: (ANDNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2862*/        /*SwitchType*/ 10, MVT::i64,// ->2874
/*2864*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2866*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$c, -1:i64), i64:i64:$b) - Complexity = 11
                  // Dst: (ANDXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2874*/        0, // EndSwitchType
/*2875*/      /*Scope*/ 22, /*->2898*/
/*2876*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*2882*/        OPC_RecordChild0, // #0 = $val
/*2883*/        OPC_CheckType, MVT::i64,
/*2885*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2887*/        OPC_EmitInteger, MVT::i32, 0, 
/*2890*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
                // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*2898*/      /*Scope*/ 64, /*->2963*/
/*2899*/        OPC_RecordChild0, // #0 = $rs1
/*2900*/        OPC_RecordChild1, // #1 = $simm13
/*2901*/        OPC_Scope, 35, /*->2938*/ // 3 children in Scope
/*2903*/          OPC_MoveChild1,
/*2904*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2907*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*2909*/          OPC_MoveParent,
/*2910*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->2923
/*2913*/            OPC_EmitConvertToTarget, 1,
/*2915*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ANDri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ANDri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*2923*/          /*SwitchType*/ 12, MVT::i64,// ->2937
/*2925*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2927*/            OPC_EmitConvertToTarget, 1,
/*2929*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ANDXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*2937*/          0, // EndSwitchType
/*2938*/        /*Scope*/ 10, /*->2949*/
/*2939*/          OPC_CheckType, MVT::i32,
/*2941*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ANDrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2949*/        /*Scope*/ 12, /*->2962*/
/*2950*/          OPC_CheckType, MVT::i64,
/*2952*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2954*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ANDXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*2962*/        0, /*End of Scope*/
/*2963*/      0, /*End of Scope*/
/*2964*/    /*SwitchOpcode*/ 25|128,1/*153*/, TARGET_VAL(ISD::OR),// ->3121
/*2968*/      OPC_Scope, 42, /*->3012*/ // 3 children in Scope
/*2970*/        OPC_RecordChild0, // #0 = $rs1
/*2971*/        OPC_MoveChild1,
/*2972*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2975*/        OPC_RecordChild0, // #1 = $rs2
/*2976*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2987*/        OPC_MoveParent,
/*2988*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2999
/*2991*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$rs1, (xor:i32 i32:i32:$rs2, -1:i32)) - Complexity = 11
                  // Dst: (ORNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2999*/        /*SwitchType*/ 10, MVT::i64,// ->3011
/*3001*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3003*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$b, (xor:i64 i64:i64:$c, -1:i64)) - Complexity = 11
                  // Dst: (ORXNrr:i64 i64:i64:$b, i64:i64:$c)
/*3011*/        0, // EndSwitchType
/*3012*/      /*Scope*/ 42, /*->3055*/
/*3013*/        OPC_MoveChild0,
/*3014*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3017*/        OPC_RecordChild0, // #0 = $rs2
/*3018*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3029*/        OPC_MoveParent,
/*3030*/        OPC_RecordChild1, // #1 = $rs1
/*3031*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3042
/*3034*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (xor:i32 i32:i32:$rs2, -1:i32), i32:i32:$rs1) - Complexity = 11
                  // Dst: (ORNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3042*/        /*SwitchType*/ 10, MVT::i64,// ->3054
/*3044*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3046*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i64 (xor:i64 i64:i64:$c, -1:i64), i64:i64:$b) - Complexity = 11
                  // Dst: (ORXNrr:i64 i64:i64:$b, i64:i64:$c)
/*3054*/        0, // EndSwitchType
/*3055*/      /*Scope*/ 64, /*->3120*/
/*3056*/        OPC_RecordChild0, // #0 = $rs1
/*3057*/        OPC_RecordChild1, // #1 = $simm13
/*3058*/        OPC_Scope, 35, /*->3095*/ // 3 children in Scope
/*3060*/          OPC_MoveChild1,
/*3061*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3064*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3066*/          OPC_MoveParent,
/*3067*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->3080
/*3070*/            OPC_EmitConvertToTarget, 1,
/*3072*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ORri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3080*/          /*SwitchType*/ 12, MVT::i64,// ->3094
/*3082*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3084*/            OPC_EmitConvertToTarget, 1,
/*3086*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ORXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*3094*/          0, // EndSwitchType
/*3095*/        /*Scope*/ 10, /*->3106*/
/*3096*/          OPC_CheckType, MVT::i32,
/*3098*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3106*/        /*Scope*/ 12, /*->3119*/
/*3107*/          OPC_CheckType, MVT::i64,
/*3109*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3111*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ORXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3119*/        0, /*End of Scope*/
/*3120*/      0, /*End of Scope*/
/*3121*/    /*SwitchOpcode*/ 74|128,1/*202*/, TARGET_VAL(SPISD::SELECT_ICC),// ->3327
/*3125*/      OPC_CaptureGlueInput,
/*3126*/      OPC_RecordChild0, // #0 = $simm11
/*3127*/      OPC_Scope, 51, /*->3180*/ // 2 children in Scope
/*3129*/        OPC_MoveChild0,
/*3130*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3133*/        OPC_CheckPredicate, 24, // Predicate_simm11
/*3135*/        OPC_MoveParent,
/*3136*/        OPC_RecordChild1, // #1 = $f
/*3137*/        OPC_RecordChild2, // #2 = $cond
/*3138*/        OPC_MoveChild2,
/*3139*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3142*/        OPC_MoveParent,
/*3143*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3161
/*3146*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3148*/          OPC_EmitConvertToTarget, 0,
/*3150*/          OPC_EmitConvertToTarget, 2,
/*3152*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVICCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3161*/        /*SwitchType*/ 16, MVT::i64,// ->3179
/*3163*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3165*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3168*/          OPC_EmitConvertToTarget, 2,
/*3170*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVICCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3179*/        0, // EndSwitchType
/*3180*/      /*Scope*/ 16|128,1/*144*/, /*->3326*/
/*3182*/        OPC_RecordChild1, // #1 = $f
/*3183*/        OPC_RecordChild2, // #2 = $cond
/*3184*/        OPC_MoveChild2,
/*3185*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3188*/        OPC_MoveParent,
/*3189*/        OPC_SwitchType /*5 cases */, 28, MVT::i32,// ->3220
/*3192*/          OPC_Scope, 13, /*->3207*/ // 2 children in Scope
/*3194*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3196*/            OPC_EmitConvertToTarget, 2,
/*3198*/            OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (MOVICCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3207*/          /*Scope*/ 11, /*->3219*/
/*3208*/            OPC_EmitConvertToTarget, 2,
/*3210*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*3219*/          0, /*End of Scope*/
/*3220*/        /*SwitchType*/ 13, MVT::i64,// ->3235
/*3222*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3224*/          OPC_EmitConvertToTarget, 2,
/*3226*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVICCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3235*/        /*SwitchType*/ 28, MVT::f32,// ->3265
/*3237*/          OPC_Scope, 13, /*->3252*/ // 2 children in Scope
/*3239*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3241*/            OPC_EmitConvertToTarget, 2,
/*3243*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVS_ICC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3252*/          /*Scope*/ 11, /*->3264*/
/*3253*/            OPC_EmitConvertToTarget, 2,
/*3255*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*3264*/          0, /*End of Scope*/
/*3265*/        /*SwitchType*/ 28, MVT::f64,// ->3295
/*3267*/          OPC_Scope, 13, /*->3282*/ // 2 children in Scope
/*3269*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3271*/            OPC_EmitConvertToTarget, 2,
/*3273*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVD_ICC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3282*/          /*Scope*/ 11, /*->3294*/
/*3283*/            OPC_EmitConvertToTarget, 2,
/*3285*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*3294*/          0, /*End of Scope*/
/*3295*/        /*SwitchType*/ 28, MVT::f128,// ->3325
/*3297*/          OPC_Scope, 13, /*->3312*/ // 2 children in Scope
/*3299*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3301*/            OPC_EmitConvertToTarget, 2,
/*3303*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_ICC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVQ_ICC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3312*/          /*Scope*/ 11, /*->3324*/
/*3313*/            OPC_EmitConvertToTarget, 2,
/*3315*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_QFP_ICC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_ICC:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond)
/*3324*/          0, /*End of Scope*/
/*3325*/        0, // EndSwitchType
/*3326*/      0, /*End of Scope*/
/*3327*/    /*SwitchOpcode*/ 74|128,1/*202*/, TARGET_VAL(SPISD::SELECT_FCC),// ->3533
/*3331*/      OPC_CaptureGlueInput,
/*3332*/      OPC_RecordChild0, // #0 = $simm11
/*3333*/      OPC_Scope, 51, /*->3386*/ // 2 children in Scope
/*3335*/        OPC_MoveChild0,
/*3336*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3339*/        OPC_CheckPredicate, 24, // Predicate_simm11
/*3341*/        OPC_MoveParent,
/*3342*/        OPC_RecordChild1, // #1 = $f
/*3343*/        OPC_RecordChild2, // #2 = $cond
/*3344*/        OPC_MoveChild2,
/*3345*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3348*/        OPC_MoveParent,
/*3349*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3367
/*3352*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3354*/          OPC_EmitConvertToTarget, 0,
/*3356*/          OPC_EmitConvertToTarget, 2,
/*3358*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3367*/        /*SwitchType*/ 16, MVT::i64,// ->3385
/*3369*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3371*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3374*/          OPC_EmitConvertToTarget, 2,
/*3376*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3385*/        0, // EndSwitchType
/*3386*/      /*Scope*/ 16|128,1/*144*/, /*->3532*/
/*3388*/        OPC_RecordChild1, // #1 = $f
/*3389*/        OPC_RecordChild2, // #2 = $cond
/*3390*/        OPC_MoveChild2,
/*3391*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3394*/        OPC_MoveParent,
/*3395*/        OPC_SwitchType /*5 cases */, 28, MVT::i32,// ->3426
/*3398*/          OPC_Scope, 13, /*->3413*/ // 2 children in Scope
/*3400*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3402*/            OPC_EmitConvertToTarget, 2,
/*3404*/            OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (MOVFCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3413*/          /*Scope*/ 11, /*->3425*/
/*3414*/            OPC_EmitConvertToTarget, 2,
/*3416*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*3425*/          0, /*End of Scope*/
/*3426*/        /*SwitchType*/ 13, MVT::i64,// ->3441
/*3428*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3430*/          OPC_EmitConvertToTarget, 2,
/*3432*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVFCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3441*/        /*SwitchType*/ 28, MVT::f32,// ->3471
/*3443*/          OPC_Scope, 13, /*->3458*/ // 2 children in Scope
/*3445*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3447*/            OPC_EmitConvertToTarget, 2,
/*3449*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVS_FCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3458*/          /*Scope*/ 11, /*->3470*/
/*3459*/            OPC_EmitConvertToTarget, 2,
/*3461*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*3470*/          0, /*End of Scope*/
/*3471*/        /*SwitchType*/ 28, MVT::f64,// ->3501
/*3473*/          OPC_Scope, 13, /*->3488*/ // 2 children in Scope
/*3475*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3477*/            OPC_EmitConvertToTarget, 2,
/*3479*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVD_FCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3488*/          /*Scope*/ 11, /*->3500*/
/*3489*/            OPC_EmitConvertToTarget, 2,
/*3491*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*3500*/          0, /*End of Scope*/
/*3501*/        /*SwitchType*/ 28, MVT::f128,// ->3531
/*3503*/          OPC_Scope, 13, /*->3518*/ // 2 children in Scope
/*3505*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3507*/            OPC_EmitConvertToTarget, 2,
/*3509*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_FCC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVQ_FCC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3518*/          /*Scope*/ 11, /*->3530*/
/*3519*/            OPC_EmitConvertToTarget, 2,
/*3521*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_QFP_FCC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_FCC:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond)
/*3530*/          0, /*End of Scope*/
/*3531*/        0, // EndSwitchType
/*3532*/      0, /*End of Scope*/
/*3533*/    /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(SPISD::SELECT_XCC),// ->3678
/*3537*/      OPC_CaptureGlueInput,
/*3538*/      OPC_RecordChild0, // #0 = $simm11
/*3539*/      OPC_Scope, 51, /*->3592*/ // 2 children in Scope
/*3541*/        OPC_MoveChild0,
/*3542*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3545*/        OPC_CheckPredicate, 24, // Predicate_simm11
/*3547*/        OPC_MoveParent,
/*3548*/        OPC_RecordChild1, // #1 = $f
/*3549*/        OPC_RecordChild2, // #2 = $cond
/*3550*/        OPC_MoveChild2,
/*3551*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3554*/        OPC_MoveParent,
/*3555*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3573
/*3558*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3560*/          OPC_EmitConvertToTarget, 0,
/*3562*/          OPC_EmitConvertToTarget, 2,
/*3564*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3573*/        /*SwitchType*/ 16, MVT::i64,// ->3591
/*3575*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3577*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3580*/          OPC_EmitConvertToTarget, 2,
/*3582*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3591*/        0, // EndSwitchType
/*3592*/      /*Scope*/ 84, /*->3677*/
/*3593*/        OPC_RecordChild1, // #1 = $f
/*3594*/        OPC_RecordChild2, // #2 = $cond
/*3595*/        OPC_MoveChild2,
/*3596*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3599*/        OPC_MoveParent,
/*3600*/        OPC_SwitchType /*5 cases */, 13, MVT::i32,// ->3616
/*3603*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3605*/          OPC_EmitConvertToTarget, 2,
/*3607*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3616*/        /*SwitchType*/ 13, MVT::i64,// ->3631
/*3618*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3620*/          OPC_EmitConvertToTarget, 2,
/*3622*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3631*/        /*SwitchType*/ 13, MVT::f32,// ->3646
/*3633*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3635*/          OPC_EmitConvertToTarget, 2,
/*3637*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                      MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVS_XCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3646*/        /*SwitchType*/ 13, MVT::f64,// ->3661
/*3648*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3650*/          OPC_EmitConvertToTarget, 2,
/*3652*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                      MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVD_XCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3661*/        /*SwitchType*/ 13, MVT::f128,// ->3676
/*3663*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3665*/          OPC_EmitConvertToTarget, 2,
/*3667*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_XCC), 0|OPFL_GlueInput,
                      MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVQ_XCC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3676*/        0, // EndSwitchType
/*3677*/      0, /*End of Scope*/
/*3678*/    /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_END),// ->3703
/*3681*/      OPC_RecordNode, // #0 = 'callseq_end' chained node
/*3682*/      OPC_CaptureGlueInput,
/*3683*/      OPC_RecordChild1, // #1 = $amt1
/*3684*/      OPC_MoveChild1,
/*3685*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3688*/      OPC_MoveParent,
/*3689*/      OPC_RecordChild2, // #2 = $amt2
/*3690*/      OPC_MoveChild2,
/*3691*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3694*/      OPC_MoveParent,
/*3695*/      OPC_EmitMergeInputChains1_0,
/*3696*/      OPC_MorphNodeTo0, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
/*3703*/    /*SwitchOpcode*/ 33, TARGET_VAL(ISD::FrameIndex),// ->3739
/*3706*/      OPC_RecordNode, // #0 = $addr
/*3707*/      OPC_CheckType, MVT::iPTR,
/*3709*/      OPC_Scope, 13, /*->3724*/ // 2 children in Scope
/*3711*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*3713*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*3716*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LEA_ADDri), 0,
                    MVT::iPTR, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:iPTR:$addr - Complexity = 9
                // Dst: (LEA_ADDri:iPTR ADDRri:iPTR:$addr)
/*3724*/      /*Scope*/ 13, /*->3738*/
/*3725*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3727*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*3730*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LEAX_ADDri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:iPTR:$addr - Complexity = 9
                // Dst: (LEAX_ADDri:i64 ADDRri:iPTR:$addr)
/*3738*/      0, /*End of Scope*/
/*3739*/    /*SwitchOpcode*/ 22, TARGET_VAL(SPISD::TLS_CALL),// ->3764
/*3742*/      OPC_RecordNode, // #0 = 'tlscall' chained node
/*3743*/      OPC_CaptureGlueInput,
/*3744*/      OPC_RecordChild1, // #1 = $disp
/*3745*/      OPC_MoveChild1,
/*3746*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetExternalSymbol),
/*3749*/      OPC_MoveParent,
/*3750*/      OPC_RecordChild2, // #2 = $sym
/*3751*/      OPC_MoveChild2,
/*3752*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*3755*/      OPC_MoveParent,
/*3756*/      OPC_EmitMergeInputChains1_0,
/*3757*/      OPC_MorphNodeTo0, TARGET_VAL(SP::TLS_CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic2,
                  2/*#Ops*/, 1, 2, 
              // Src: (tlscall (texternalsym:i32):$disp, (tglobaltlsaddr:iPTR):$sym) - Complexity = 9
              // Dst: (TLS_CALL (texternalsym:i32):$disp, (tglobaltlsaddr:iPTR):$sym)
/*3764*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::ATOMIC_FENCE),// ->3802
/*3767*/      OPC_RecordNode, // #0 = 'atomic_fence' chained node
/*3768*/      OPC_MoveChild1,
/*3769*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3772*/      OPC_MoveParent,
/*3773*/      OPC_MoveChild2,
/*3774*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3777*/      OPC_MoveParent,
/*3778*/      OPC_Scope, 8, /*->3788*/ // 2 children in Scope
/*3780*/        OPC_CheckPatternPredicate, 4, // (!Subtarget->isV9())
/*3782*/        OPC_EmitMergeInputChains1_0,
/*3783*/        OPC_MorphNodeTo0, TARGET_VAL(SP::STBAR), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
                // Dst: (STBAR)
/*3788*/      /*Scope*/ 12, /*->3801*/
/*3789*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3791*/        OPC_EmitMergeInputChains1_0,
/*3792*/        OPC_EmitInteger, MVT::i32, 15, 
/*3795*/        OPC_MorphNodeTo0, TARGET_VAL(SP::MEMBARi), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
                // Dst: (MEMBARi 15:i32)
/*3801*/      0, /*End of Scope*/
/*3802*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->3836
/*3805*/      OPC_RecordChild0, // #0 = $Rn
/*3806*/      OPC_Scope, 13, /*->3821*/ // 2 children in Scope
/*3808*/        OPC_CheckChild1Integer, 0, 
/*3810*/        OPC_EmitInteger, MVT::i32, SP::sub_even,
/*3813*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (extractelt:i32 IntPair:v2i32:$Rn, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 IntPair:v2i32:$Rn, sub_even:i32)
/*3821*/      /*Scope*/ 13, /*->3835*/
/*3822*/        OPC_CheckChild1Integer, 1, 
/*3824*/        OPC_EmitInteger, MVT::i32, SP::sub_odd,
/*3827*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (extractelt:i32 IntPair:v2i32:$Rn, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 IntPair:v2i32:$Rn, sub_odd:i32)
/*3835*/      0, /*End of Scope*/
/*3836*/    /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SHL),// ->3911
/*3839*/      OPC_RecordChild0, // #0 = $rs1
/*3840*/      OPC_RecordChild1, // #1 = $simm13
/*3841*/      OPC_Scope, 40, /*->3883*/ // 2 children in Scope
/*3843*/        OPC_MoveChild1,
/*3844*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3847*/        OPC_CheckType, MVT::i32,
/*3849*/        OPC_Scope, 15, /*->3866*/ // 2 children in Scope
/*3851*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3853*/          OPC_MoveParent,
/*3854*/          OPC_CheckType, MVT::i32,
/*3856*/          OPC_EmitConvertToTarget, 1,
/*3858*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SLLri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3866*/        /*Scope*/ 15, /*->3882*/
/*3867*/          OPC_MoveParent,
/*3868*/          OPC_CheckType, MVT::i64,
/*3870*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3872*/          OPC_EmitConvertToTarget, 1,
/*3874*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SLLXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3882*/        0, /*End of Scope*/
/*3883*/      /*Scope*/ 26, /*->3910*/
/*3884*/        OPC_CheckChild1Type, MVT::i32,
/*3886*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3897
/*3889*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SLLrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3897*/        /*SwitchType*/ 10, MVT::i64,// ->3909
/*3899*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3901*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SLLXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*3909*/        0, // EndSwitchType
/*3910*/      0, /*End of Scope*/
/*3911*/    /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SRL),// ->3986
/*3914*/      OPC_RecordChild0, // #0 = $rs1
/*3915*/      OPC_RecordChild1, // #1 = $simm13
/*3916*/      OPC_Scope, 40, /*->3958*/ // 2 children in Scope
/*3918*/        OPC_MoveChild1,
/*3919*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3922*/        OPC_CheckType, MVT::i32,
/*3924*/        OPC_Scope, 15, /*->3941*/ // 2 children in Scope
/*3926*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3928*/          OPC_MoveParent,
/*3929*/          OPC_CheckType, MVT::i32,
/*3931*/          OPC_EmitConvertToTarget, 1,
/*3933*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRLri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3941*/        /*Scope*/ 15, /*->3957*/
/*3942*/          OPC_MoveParent,
/*3943*/          OPC_CheckType, MVT::i64,
/*3945*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3947*/          OPC_EmitConvertToTarget, 1,
/*3949*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SRLXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3957*/        0, /*End of Scope*/
/*3958*/      /*Scope*/ 26, /*->3985*/
/*3959*/        OPC_CheckChild1Type, MVT::i32,
/*3961*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3972
/*3964*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRLrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3972*/        /*SwitchType*/ 10, MVT::i64,// ->3984
/*3974*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3976*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRLXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*3984*/        0, // EndSwitchType
/*3985*/      0, /*End of Scope*/
/*3986*/    /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SRA),// ->4061
/*3989*/      OPC_RecordChild0, // #0 = $rs1
/*3990*/      OPC_RecordChild1, // #1 = $simm13
/*3991*/      OPC_Scope, 40, /*->4033*/ // 2 children in Scope
/*3993*/        OPC_MoveChild1,
/*3994*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3997*/        OPC_CheckType, MVT::i32,
/*3999*/        OPC_Scope, 15, /*->4016*/ // 2 children in Scope
/*4001*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4003*/          OPC_MoveParent,
/*4004*/          OPC_CheckType, MVT::i32,
/*4006*/          OPC_EmitConvertToTarget, 1,
/*4008*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRAri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4016*/        /*Scope*/ 15, /*->4032*/
/*4017*/          OPC_MoveParent,
/*4018*/          OPC_CheckType, MVT::i64,
/*4020*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4022*/          OPC_EmitConvertToTarget, 1,
/*4024*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRAXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SRAXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*4032*/        0, /*End of Scope*/
/*4033*/      /*Scope*/ 26, /*->4060*/
/*4034*/        OPC_CheckChild1Type, MVT::i32,
/*4036*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->4047
/*4039*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRArr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRArr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4047*/        /*SwitchType*/ 10, MVT::i64,// ->4059
/*4049*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4051*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRAXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRAXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*4059*/        0, // EndSwitchType
/*4060*/      0, /*End of Scope*/
/*4061*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::ADDC),// ->4099
/*4064*/      OPC_RecordChild0, // #0 = $rs1
/*4065*/      OPC_RecordChild1, // #1 = $simm13
/*4066*/      OPC_Scope, 19, /*->4087*/ // 2 children in Scope
/*4068*/        OPC_MoveChild1,
/*4069*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4072*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4074*/        OPC_MoveParent,
/*4075*/        OPC_CheckType, MVT::i32,
/*4077*/        OPC_EmitConvertToTarget, 1,
/*4079*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDCCri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4087*/      /*Scope*/ 10, /*->4098*/
/*4088*/        OPC_CheckType, MVT::i32,
/*4090*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (ADDCCrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4098*/      0, /*End of Scope*/
/*4099*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ADDE),// ->4138
/*4102*/      OPC_CaptureGlueInput,
/*4103*/      OPC_RecordChild0, // #0 = $rs1
/*4104*/      OPC_RecordChild1, // #1 = $simm13
/*4105*/      OPC_Scope, 19, /*->4126*/ // 2 children in Scope
/*4107*/        OPC_MoveChild1,
/*4108*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4111*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4113*/        OPC_MoveParent,
/*4114*/        OPC_CheckType, MVT::i32,
/*4116*/        OPC_EmitConvertToTarget, 1,
/*4118*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (adde:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDEri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4126*/      /*Scope*/ 10, /*->4137*/
/*4127*/        OPC_CheckType, MVT::i32,
/*4129*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (ADDErr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4137*/      0, /*End of Scope*/
/*4138*/    /*SwitchOpcode*/ 64, TARGET_VAL(ISD::SUB),// ->4205
/*4141*/      OPC_RecordChild0, // #0 = $rs1
/*4142*/      OPC_RecordChild1, // #1 = $simm13
/*4143*/      OPC_Scope, 35, /*->4180*/ // 3 children in Scope
/*4145*/        OPC_MoveChild1,
/*4146*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4149*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4151*/        OPC_MoveParent,
/*4152*/        OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->4165
/*4155*/          OPC_EmitConvertToTarget, 1,
/*4157*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SUBri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4165*/        /*SwitchType*/ 12, MVT::i64,// ->4179
/*4167*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4169*/          OPC_EmitConvertToTarget, 1,
/*4171*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SUBXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4179*/        0, // EndSwitchType
/*4180*/      /*Scope*/ 10, /*->4191*/
/*4181*/        OPC_CheckType, MVT::i32,
/*4183*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBrr), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4191*/      /*Scope*/ 12, /*->4204*/
/*4192*/        OPC_CheckType, MVT::i64,
/*4194*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4196*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (SUBXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4204*/      0, /*End of Scope*/
/*4205*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::SUBE),// ->4244
/*4208*/      OPC_CaptureGlueInput,
/*4209*/      OPC_RecordChild0, // #0 = $rs1
/*4210*/      OPC_RecordChild1, // #1 = $simm13
/*4211*/      OPC_Scope, 19, /*->4232*/ // 2 children in Scope
/*4213*/        OPC_MoveChild1,
/*4214*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4217*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4219*/        OPC_MoveParent,
/*4220*/        OPC_CheckType, MVT::i32,
/*4222*/        OPC_EmitConvertToTarget, 1,
/*4224*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sube:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBEri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4232*/      /*Scope*/ 10, /*->4243*/
/*4233*/        OPC_CheckType, MVT::i32,
/*4235*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBErr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4243*/      0, /*End of Scope*/
/*4244*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SUBC),// ->4282
/*4247*/      OPC_RecordChild0, // #0 = $rs1
/*4248*/      OPC_RecordChild1, // #1 = $simm13
/*4249*/      OPC_Scope, 19, /*->4270*/ // 2 children in Scope
/*4251*/        OPC_MoveChild1,
/*4252*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4255*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4257*/        OPC_MoveParent,
/*4258*/        OPC_CheckType, MVT::i32,
/*4260*/        OPC_EmitConvertToTarget, 1,
/*4262*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (subc:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBCCri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4270*/      /*Scope*/ 10, /*->4281*/
/*4271*/        OPC_CheckType, MVT::i32,
/*4273*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBCCrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4281*/      0, /*End of Scope*/
/*4282*/    /*SwitchOpcode*/ 70, TARGET_VAL(SPISD::CMPICC),// ->4355
/*4285*/      OPC_RecordChild0, // #0 = $rs1
/*4286*/      OPC_Scope, 30, /*->4318*/ // 2 children in Scope
/*4288*/        OPC_CheckChild0Type, MVT::i32,
/*4290*/        OPC_RecordChild1, // #1 = $simm13
/*4291*/        OPC_Scope, 16, /*->4309*/ // 2 children in Scope
/*4293*/          OPC_MoveChild1,
/*4294*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4297*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4299*/          OPC_MoveParent,
/*4300*/          OPC_EmitConvertToTarget, 1,
/*4302*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (CMPri i32:i32:$rs1, (imm:i32):$simm13)
/*4309*/        /*Scope*/ 7, /*->4317*/
/*4310*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (CMPrr i32:i32:$rs1, i32:i32:$rs2)
/*4317*/        0, /*End of Scope*/
/*4318*/      /*Scope*/ 35, /*->4354*/
/*4319*/        OPC_CheckChild0Type, MVT::i64,
/*4321*/        OPC_RecordChild1, // #1 = $b
/*4322*/        OPC_Scope, 19, /*->4343*/ // 2 children in Scope
/*4324*/          OPC_MoveChild1,
/*4325*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4328*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4330*/          OPC_MoveParent,
/*4331*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4333*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*4336*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (CMPri ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
/*4343*/        /*Scope*/ 9, /*->4353*/
/*4344*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4346*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i64:i64:$a, i64:i64:$b) - Complexity = 3
                  // Dst: (CMPrr ?:i64:$a, ?:i64:$b)
/*4353*/        0, /*End of Scope*/
/*4354*/      0, /*End of Scope*/
/*4355*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::UMUL_LOHI),// ->4395
/*4358*/      OPC_RecordChild0, // #0 = $rs1
/*4359*/      OPC_RecordChild1, // #1 = $simm13
/*4360*/      OPC_Scope, 20, /*->4382*/ // 2 children in Scope
/*4362*/        OPC_MoveChild1,
/*4363*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4366*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4368*/        OPC_MoveParent,
/*4369*/        OPC_CheckType, MVT::i32,
/*4371*/        OPC_EmitConvertToTarget, 1,
/*4373*/        OPC_MorphNodeTo2, TARGET_VAL(SP::UMULri), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (umullohi:i32:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UMULri:i32:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4382*/      /*Scope*/ 11, /*->4394*/
/*4383*/        OPC_CheckType, MVT::i32,
/*4385*/        OPC_MorphNodeTo2, TARGET_VAL(SP::UMULrr), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (umullohi:i32:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (UMULrr:i32:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4394*/      0, /*End of Scope*/
/*4395*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::SMUL_LOHI),// ->4435
/*4398*/      OPC_RecordChild0, // #0 = $rs1
/*4399*/      OPC_RecordChild1, // #1 = $simm13
/*4400*/      OPC_Scope, 20, /*->4422*/ // 2 children in Scope
/*4402*/        OPC_MoveChild1,
/*4403*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4406*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4408*/        OPC_MoveParent,
/*4409*/        OPC_CheckType, MVT::i32,
/*4411*/        OPC_EmitConvertToTarget, 1,
/*4413*/        OPC_MorphNodeTo2, TARGET_VAL(SP::SMULri), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (smullohi:i32:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SMULri:i32:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4422*/      /*Scope*/ 11, /*->4434*/
/*4423*/        OPC_CheckType, MVT::i32,
/*4425*/        OPC_MorphNodeTo2, TARGET_VAL(SP::SMULrr), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (smullohi:i32:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SMULrr:i32:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4434*/      0, /*End of Scope*/
/*4435*/    /*SwitchOpcode*/ 19, TARGET_VAL(SPISD::RET_FLAG),// ->4457
/*4438*/      OPC_RecordNode, // #0 = 'retflag' chained node
/*4439*/      OPC_CaptureGlueInput,
/*4440*/      OPC_RecordChild1, // #1 = $val
/*4441*/      OPC_MoveChild1,
/*4442*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4445*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*4447*/      OPC_MoveParent,
/*4448*/      OPC_EmitMergeInputChains1_0,
/*4449*/      OPC_EmitConvertToTarget, 1,
/*4451*/      OPC_MorphNodeTo0, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#Ops*/, 2, 
              // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (RETL (imm:i32):$val)
/*4457*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::MUL),// ->4499
/*4460*/      OPC_RecordChild0, // #0 = $rs1
/*4461*/      OPC_RecordChild1, // #1 = $simm13
/*4462*/      OPC_Scope, 21, /*->4485*/ // 2 children in Scope
/*4464*/        OPC_MoveChild1,
/*4465*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4468*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4470*/        OPC_MoveParent,
/*4471*/        OPC_CheckType, MVT::i64,
/*4473*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4475*/        OPC_EmitConvertToTarget, 1,
/*4477*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MULXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4485*/      /*Scope*/ 12, /*->4498*/
/*4486*/        OPC_CheckType, MVT::i64,
/*4488*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4490*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MULXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4498*/      0, /*End of Scope*/
/*4499*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::SDIV),// ->4541
/*4502*/      OPC_RecordChild0, // #0 = $rs1
/*4503*/      OPC_RecordChild1, // #1 = $simm13
/*4504*/      OPC_Scope, 21, /*->4527*/ // 2 children in Scope
/*4506*/        OPC_MoveChild1,
/*4507*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4510*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4512*/        OPC_MoveParent,
/*4513*/        OPC_CheckType, MVT::i64,
/*4515*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4517*/        OPC_EmitConvertToTarget, 1,
/*4519*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SDIVXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4527*/      /*Scope*/ 12, /*->4540*/
/*4528*/        OPC_CheckType, MVT::i64,
/*4530*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4532*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SDIVXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4540*/      0, /*End of Scope*/
/*4541*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::UDIV),// ->4583
/*4544*/      OPC_RecordChild0, // #0 = $rs1
/*4545*/      OPC_RecordChild1, // #1 = $simm13
/*4546*/      OPC_Scope, 21, /*->4569*/ // 2 children in Scope
/*4548*/        OPC_MoveChild1,
/*4549*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4552*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4554*/        OPC_MoveParent,
/*4555*/        OPC_CheckType, MVT::i64,
/*4557*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4559*/        OPC_EmitConvertToTarget, 1,
/*4561*/        OPC_MorphNodeTo1, TARGET_VAL(SP::UDIVXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4569*/      /*Scope*/ 12, /*->4582*/
/*4570*/        OPC_CheckType, MVT::i64,
/*4572*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4574*/        OPC_MorphNodeTo1, TARGET_VAL(SP::UDIVXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4582*/      0, /*End of Scope*/
/*4583*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::CALLSEQ_START),// ->4600
/*4586*/      OPC_RecordNode, // #0 = 'callseq_start' chained node
/*4587*/      OPC_RecordChild1, // #1 = $amt
/*4588*/      OPC_MoveChild1,
/*4589*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*4592*/      OPC_MoveParent,
/*4593*/      OPC_EmitMergeInputChains1_0,
/*4594*/      OPC_MorphNodeTo0, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#Ops*/, 1, 
              // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
/*4600*/    /*SwitchOpcode*/ 24, TARGET_VAL(SPISD::BRICC),// ->4627
/*4603*/      OPC_RecordNode, // #0 = 'SPbricc' chained node
/*4604*/      OPC_CaptureGlueInput,
/*4605*/      OPC_RecordChild1, // #1 = $imm22
/*4606*/      OPC_MoveChild1,
/*4607*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4610*/      OPC_MoveParent,
/*4611*/      OPC_RecordChild2, // #2 = $cond
/*4612*/      OPC_MoveChild2,
/*4613*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4616*/      OPC_MoveParent,
/*4617*/      OPC_EmitMergeInputChains1_0,
/*4618*/      OPC_EmitConvertToTarget, 2,
/*4620*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (SPbricc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
              // Dst: (BCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4627*/    /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::BRFCC),// ->4665
/*4630*/      OPC_RecordNode, // #0 = 'SPbrfcc' chained node
/*4631*/      OPC_CaptureGlueInput,
/*4632*/      OPC_RecordChild1, // #1 = $imm22
/*4633*/      OPC_MoveChild1,
/*4634*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4637*/      OPC_MoveParent,
/*4638*/      OPC_RecordChild2, // #2 = $cond
/*4639*/      OPC_MoveChild2,
/*4640*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4643*/      OPC_MoveParent,
/*4644*/      OPC_EmitMergeInputChains1_0,
/*4645*/      OPC_EmitConvertToTarget, 2,
/*4647*/      OPC_Scope, 7, /*->4656*/ // 2 children in Scope
/*4649*/        OPC_MorphNodeTo0, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                    2/*#Ops*/, 1, 3, 
                // Src: (SPbrfcc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
                // Dst: (FBCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4656*/      /*Scope*/ 7, /*->4664*/
/*4657*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                    2/*#Ops*/, 1, 3, 
                // Src: (SPbrfcc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
                // Dst: (CBCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4664*/      0, /*End of Scope*/
/*4665*/    /*SwitchOpcode*/ 46, TARGET_VAL(SPISD::TLS_ADD),// ->4714
/*4668*/      OPC_RecordChild0, // #0 = $rs1
/*4669*/      OPC_RecordChild1, // #1 = $rs2
/*4670*/      OPC_Scope, 19, /*->4691*/ // 2 children in Scope
/*4672*/        OPC_CheckChild1Type, MVT::i32,
/*4674*/        OPC_RecordChild2, // #2 = $sym
/*4675*/        OPC_MoveChild2,
/*4676*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*4679*/        OPC_MoveParent,
/*4680*/        OPC_CheckType, MVT::i32,
/*4682*/        OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_ADDrr), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:i32 i32:i32:$rs1, i32:i32:$rs2, (tglobaltlsaddr:iPTR):$sym) - Complexity = 6
                // Dst: (TLS_ADDrr:i32 i32:i32:$rs1, i32:i32:$rs2, (tglobaltlsaddr:iPTR):$sym)
/*4691*/      /*Scope*/ 21, /*->4713*/
/*4692*/        OPC_CheckChild1Type, MVT::i64,
/*4694*/        OPC_RecordChild2, // #2 = $sym
/*4695*/        OPC_MoveChild2,
/*4696*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*4699*/        OPC_MoveParent,
/*4700*/        OPC_CheckType, MVT::i64,
/*4702*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4704*/        OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_ADDXrr), 0,
                    MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:i64 i64:i64:$rs1, i64:i64:$rs2, (tglobaltlsaddr:iPTR):$sym) - Complexity = 6
                // Dst: (TLS_ADDXrr:i64 i64:i64:$rs1, i64:i64:$rs2, (tglobaltlsaddr:iPTR):$sym)
/*4713*/      0, /*End of Scope*/
/*4714*/    /*SwitchOpcode*/ 108, TARGET_VAL(SPISD::Hi),// ->4825
/*4717*/      OPC_RecordChild0, // #0 = $in
/*4718*/      OPC_MoveChild0,
/*4719*/      OPC_SwitchOpcode /*4 cases */, 23, TARGET_VAL(ISD::TargetGlobalAddress),// ->4746
/*4723*/        OPC_MoveParent,
/*4724*/        OPC_Scope, 9, /*->4735*/ // 2 children in Scope
/*4726*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4728*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
/*4735*/        /*Scope*/ 9, /*->4745*/
/*4736*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4738*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
/*4745*/        0, /*End of Scope*/
/*4746*/      /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetConstantPool),// ->4772
/*4749*/        OPC_MoveParent,
/*4750*/        OPC_Scope, 9, /*->4761*/ // 2 children in Scope
/*4752*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4754*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
/*4761*/        /*Scope*/ 9, /*->4771*/
/*4762*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4764*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
/*4771*/        0, /*End of Scope*/
/*4772*/      /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4798
/*4775*/        OPC_MoveParent,
/*4776*/        OPC_Scope, 9, /*->4787*/ // 2 children in Scope
/*4778*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4780*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaltlsaddr:i32):$in)
/*4787*/        /*Scope*/ 9, /*->4797*/
/*4788*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4790*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaltlsaddr:i32):$in)
/*4797*/        0, /*End of Scope*/
/*4798*/      /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetBlockAddress),// ->4824
/*4801*/        OPC_MoveParent,
/*4802*/        OPC_Scope, 9, /*->4813*/ // 2 children in Scope
/*4804*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4806*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
/*4813*/        /*Scope*/ 9, /*->4823*/
/*4814*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4816*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
/*4823*/        0, /*End of Scope*/
/*4824*/      0, // EndSwitchOpcode
/*4825*/    /*SwitchOpcode*/ 20|128,1/*148*/, TARGET_VAL(SPISD::Lo),// ->4977
/*4829*/      OPC_RecordChild0, // #0 = $in
/*4830*/      OPC_MoveChild0,
/*4831*/      OPC_SwitchOpcode /*4 cases */, 33, TARGET_VAL(ISD::TargetGlobalAddress),// ->4868
/*4835*/        OPC_MoveParent,
/*4836*/        OPC_Scope, 13, /*->4851*/ // 2 children in Scope
/*4838*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4840*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4843*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
/*4851*/        /*Scope*/ 15, /*->4867*/
/*4852*/          OPC_CheckType, MVT::i64,
/*4854*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4856*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4859*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tglobaladdr:i64):$in)
/*4867*/        0, /*End of Scope*/
/*4868*/      /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetConstantPool),// ->4904
/*4871*/        OPC_MoveParent,
/*4872*/        OPC_Scope, 13, /*->4887*/ // 2 children in Scope
/*4874*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4876*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4879*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
/*4887*/        /*Scope*/ 15, /*->4903*/
/*4888*/          OPC_CheckType, MVT::i64,
/*4890*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4892*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4895*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tconstpool:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tconstpool:i64):$in)
/*4903*/        0, /*End of Scope*/
/*4904*/      /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4940
/*4907*/        OPC_MoveParent,
/*4908*/        OPC_Scope, 13, /*->4923*/ // 2 children in Scope
/*4910*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4912*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4915*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tglobaltlsaddr:i32):$in)
/*4923*/        /*Scope*/ 15, /*->4939*/
/*4924*/          OPC_CheckType, MVT::i64,
/*4926*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4928*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4931*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tglobaltlsaddr:i64):$in)
/*4939*/        0, /*End of Scope*/
/*4940*/      /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetBlockAddress),// ->4976
/*4943*/        OPC_MoveParent,
/*4944*/        OPC_Scope, 13, /*->4959*/ // 2 children in Scope
/*4946*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4948*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4951*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tblockaddress:i32):$in)
/*4959*/        /*Scope*/ 15, /*->4975*/
/*4960*/          OPC_CheckType, MVT::i64,
/*4962*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4964*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4967*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tblockaddress:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tblockaddress:i64):$in)
/*4975*/        0, /*End of Scope*/
/*4976*/      0, // EndSwitchOpcode
/*4977*/    /*SwitchOpcode*/ 26, TARGET_VAL(SPISD::BRXCC),// ->5006
/*4980*/      OPC_RecordNode, // #0 = 'SPbrxcc' chained node
/*4981*/      OPC_CaptureGlueInput,
/*4982*/      OPC_RecordChild1, // #1 = $imm19
/*4983*/      OPC_MoveChild1,
/*4984*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4987*/      OPC_MoveParent,
/*4988*/      OPC_RecordChild2, // #2 = $cond
/*4989*/      OPC_MoveChild2,
/*4990*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4993*/      OPC_MoveParent,
/*4994*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4996*/      OPC_EmitMergeInputChains1_0,
/*4997*/      OPC_EmitConvertToTarget, 2,
/*4999*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (SPbrxcc (bb:Other):$imm19, (imm:i32):$cond) - Complexity = 6
              // Dst: (BPXCC (bb:Other):$imm19, (imm:i32):$cond)
/*5006*/    /*SwitchOpcode*/ 111|128,1/*239*/, TARGET_VAL(ISD::Constant),// ->5249
/*5010*/      OPC_RecordNode, // #0 = $imm22
/*5011*/      OPC_Scope, 16, /*->5029*/ // 7 children in Scope
/*5013*/        OPC_CheckPredicate, 25, // Predicate_SETHIimm
/*5015*/        OPC_CheckType, MVT::i32,
/*5017*/        OPC_EmitConvertToTarget, 0,
/*5019*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*5022*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$imm22))
/*5029*/      /*Scope*/ 35, /*->5065*/
/*5030*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*5032*/        OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->5048
/*5035*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*5038*/          OPC_EmitConvertToTarget, 0,
/*5040*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
/*5048*/        /*SwitchType*/ 14, MVT::i64,// ->5064
/*5050*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*5053*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*5056*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
/*5064*/        0, // EndSwitchType
/*5065*/      /*Scope*/ 32, /*->5098*/
/*5066*/        OPC_CheckPredicate, 25, // Predicate_SETHIimm
/*5068*/        OPC_CheckType, MVT::i64,
/*5070*/        OPC_Scope, 10, /*->5082*/ // 2 children in Scope
/*5072*/          OPC_EmitNodeXForm, 1, 0, // HI22
/*5075*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
                  // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*5082*/        /*Scope*/ 14, /*->5097*/
/*5083*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5085*/          OPC_EmitConvertToTarget, 0,
/*5087*/          OPC_EmitNodeXForm, 1, 1, // HI22
/*5090*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIXi), 0,
                      MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                  // Dst: (SETHIXi:i64 (HI22:i64 (imm:i64):$imm22))
/*5097*/        0, /*End of Scope*/
/*5098*/      /*Scope*/ 27, /*->5126*/
/*5099*/        OPC_CheckPredicate, 26, // Predicate_uimm32
/*5101*/        OPC_CheckType, MVT::i64,
/*5103*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5105*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*5108*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5115*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*5118*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
                // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*5126*/      /*Scope*/ 27, /*->5154*/
/*5127*/        OPC_CheckPredicate, 27, // Predicate_nimm33
/*5129*/        OPC_CheckType, MVT::i64,
/*5131*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5133*/        OPC_EmitNodeXForm, 3, 0, // HIX22
/*5136*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5143*/        OPC_EmitNodeXForm, 4, 0, // LOX10
/*5146*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
                // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*5154*/      /*Scope*/ 27, /*->5182*/
/*5155*/        OPC_CheckType, MVT::i32,
/*5157*/        OPC_EmitConvertToTarget, 0,
/*5159*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*5162*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*5169*/        OPC_EmitConvertToTarget, 0,
/*5171*/        OPC_EmitNodeXForm, 2, 4, // LO10
/*5174*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                    MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$val - Complexity = 3
                // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*5182*/      /*Scope*/ 65, /*->5248*/
/*5183*/        OPC_CheckType, MVT::i64,
/*5185*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5187*/        OPC_EmitNodeXForm, 5, 0, // HH22
/*5190*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5197*/        OPC_EmitNodeXForm, 6, 0, // HM10
/*5200*/        OPC_EmitNode1, TARGET_VAL(SP::ORri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*5208*/        OPC_EmitInteger, MVT::i32, 32, 
/*5211*/        OPC_EmitNode1, TARGET_VAL(SP::SLLXri), 0,
                    MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*5219*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*5222*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*5229*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*5232*/        OPC_EmitNode1, TARGET_VAL(SP::ORri), 0,
                    MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*5240*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                    MVT::i64, 2/*#Ops*/, 6, 10, 
                // Src: (imm:i64):$val - Complexity = 3
                // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*5248*/      0, /*End of Scope*/
/*5249*/    /*SwitchOpcode*/ 59, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->5311
/*5252*/      OPC_RecordMemRef,
/*5253*/      OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/*5254*/      OPC_RecordChild1, // #1 = $rs1
/*5255*/      OPC_SwitchType /*2 cases */, 32, MVT::i32,// ->5290
/*5258*/        OPC_RecordChild2, // #2 = $rs2
/*5259*/        OPC_RecordChild3, // #3 = $swap
/*5260*/        OPC_CheckPredicate, 19, // Predicate_atomic_cmp_swap_32
/*5262*/        OPC_Scope, 12, /*->5276*/ // 2 children in Scope
/*5264*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5266*/          OPC_EmitMergeInputChains1_0,
/*5267*/          OPC_MorphNodeTo1, TARGET_VAL(SP::CASrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (CASrr:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)
/*5276*/        /*Scope*/ 12, /*->5289*/
/*5277*/          OPC_CheckPatternPredicate, 5, // (Subtarget->hasLeonCasa())
/*5279*/          OPC_EmitMergeInputChains1_0,
/*5280*/          OPC_MorphNodeTo1, TARGET_VAL(SP::CASAasi10), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (CASAasi10:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)
/*5289*/        0, /*End of Scope*/
/*5290*/      /*SwitchType*/ 18, MVT::i64,// ->5310
/*5292*/        OPC_CheckChild1Type, MVT::i64,
/*5294*/        OPC_RecordChild2, // #2 = $rs2
/*5295*/        OPC_RecordChild3, // #3 = $swap
/*5296*/        OPC_CheckPredicate, 20, // Predicate_atomic_cmp_swap_64
/*5298*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5300*/        OPC_EmitMergeInputChains1_0,
/*5301*/        OPC_MorphNodeTo1, TARGET_VAL(SP::CASXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 i64:i64:$rs1, i64:i64:$rs2, i64:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (CASXrr:i64 i64:i64:$rs1, i64:i64:$rs2, i64:i64:$swap)
/*5310*/      0, // EndSwitchType
/*5311*/    /*SwitchOpcode*/ 19, TARGET_VAL(SPISD::FLUSHW),// ->5333
/*5314*/      OPC_RecordNode, // #0 = 'flushw' chained node
/*5315*/      OPC_Scope, 8, /*->5325*/ // 2 children in Scope
/*5317*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5319*/        OPC_EmitMergeInputChains1_0,
/*5320*/        OPC_MorphNodeTo0, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (FLUSHW)
/*5325*/      /*Scope*/ 6, /*->5332*/
/*5326*/        OPC_EmitMergeInputChains1_0,
/*5327*/        OPC_MorphNodeTo0, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (TA3)
/*5332*/      0, /*End of Scope*/
/*5333*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->5350
/*5336*/      OPC_RecordNode, // #0 = 'br' chained node
/*5337*/      OPC_RecordChild1, // #1 = $imm22
/*5338*/      OPC_MoveChild1,
/*5339*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5342*/      OPC_MoveParent,
/*5343*/      OPC_EmitMergeInputChains1_0,
/*5344*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm22) - Complexity = 3
              // Dst: (BA (bb:Other):$imm22)
/*5350*/    /*SwitchOpcode*/ 7, TARGET_VAL(ISD::TRAP),// ->5360
/*5353*/      OPC_RecordNode, // #0 = 'trap' chained node
/*5354*/      OPC_EmitMergeInputChains1_0,
/*5355*/      OPC_MorphNodeTo0, TARGET_VAL(SP::TA5), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (TA5)
/*5360*/    /*SwitchOpcode*/ 41, TARGET_VAL(SPISD::CMPFCC),// ->5404
/*5363*/      OPC_RecordChild0, // #0 = $rs1
/*5364*/      OPC_Scope, 11, /*->5377*/ // 3 children in Scope
/*5366*/        OPC_CheckChild0Type, MVT::f32,
/*5368*/        OPC_RecordChild1, // #1 = $rs2
/*5369*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FCMPS:i1 f32:f32:$rs1, f32:f32:$rs2)
/*5377*/      /*Scope*/ 11, /*->5389*/
/*5378*/        OPC_CheckChild0Type, MVT::f64,
/*5380*/        OPC_RecordChild1, // #1 = $rs2
/*5381*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FCMPD:i1 f64:f64:$rs1, f64:f64:$rs2)
/*5389*/      /*Scope*/ 13, /*->5403*/
/*5390*/        OPC_CheckChild0Type, MVT::f128,
/*5392*/        OPC_RecordChild1, // #1 = $rs2
/*5393*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5395*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPQ), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FCMPQ:i1 f128:f128:$rs1, f128:f128:$rs2)
/*5403*/      0, /*End of Scope*/
/*5404*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::ANY_EXTEND),// ->5425
/*5407*/      OPC_RecordChild0, // #0 = $val
/*5408*/      OPC_CheckChild0Type, MVT::i32,
/*5410*/      OPC_CheckType, MVT::i64,
/*5412*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5414*/      OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*5417*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
/*5425*/    /*SwitchOpcode*/ 16, TARGET_VAL(ISD::TRUNCATE),// ->5444
/*5428*/      OPC_RecordChild0, // #0 = $val
/*5429*/      OPC_CheckType, MVT::i32,
/*5431*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5433*/      OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*5436*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
/*5444*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::ZERO_EXTEND),// ->5465
/*5447*/      OPC_RecordChild0, // #0 = $val
/*5448*/      OPC_CheckChild0Type, MVT::i32,
/*5450*/      OPC_CheckType, MVT::i64,
/*5452*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5454*/      OPC_EmitInteger, MVT::i32, 0, 
/*5457*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (zext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
/*5465*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::SIGN_EXTEND),// ->5486
/*5468*/      OPC_RecordChild0, // #0 = $val
/*5469*/      OPC_CheckChild0Type, MVT::i32,
/*5471*/      OPC_CheckType, MVT::i64,
/*5473*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5475*/      OPC_EmitInteger, MVT::i32, 0, 
/*5478*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
/*5486*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5507
/*5489*/      OPC_RecordChild0, // #0 = $val
/*5490*/      OPC_MoveChild1,
/*5491*/      OPC_CheckValueType, MVT::i32,
/*5493*/      OPC_MoveParent,
/*5494*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5496*/      OPC_EmitInteger, MVT::i32, 0, 
/*5499*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
              // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
/*5507*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::CTPOP),// ->5544
/*5510*/      OPC_RecordChild0, // #0 = $src
/*5511*/      OPC_SwitchType /*2 cases */, 9, MVT::i64,// ->5523
/*5514*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5516*/        OPC_MorphNodeTo1, TARGET_VAL(SP::POPCrr), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctpop:i64 i64:i64:$src) - Complexity = 3
                // Dst: (POPCrr:i64 ?:i64:$src)
/*5523*/      /*SwitchType*/ 18, MVT::i32,// ->5543
/*5525*/        OPC_EmitInteger, MVT::i32, 0, 
/*5528*/        OPC_EmitNode1, TARGET_VAL(SP::SRLri), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5536*/        OPC_MorphNodeTo1, TARGET_VAL(SP::POPCrr), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
                // Dst: (POPCrr:i32 (SRLri:i32 ?:i32:$src, 0:i32))
/*5543*/      0, // EndSwitchType
/*5544*/    /*SwitchOpcode*/ 93, TARGET_VAL(ISD::FMUL),// ->5640
/*5547*/      OPC_Scope, 51, /*->5600*/ // 2 children in Scope
/*5549*/        OPC_MoveChild0,
/*5550*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5553*/        OPC_RecordChild0, // #0 = $rs1
/*5554*/        OPC_Scope, 19, /*->5575*/ // 2 children in Scope
/*5556*/          OPC_MoveParent,
/*5557*/          OPC_MoveChild1,
/*5558*/          OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5561*/          OPC_RecordChild0, // #1 = $rs2
/*5562*/          OPC_MoveParent,
/*5563*/          OPC_CheckType, MVT::f64,
/*5565*/          OPC_CheckPatternPredicate, 7, // (!Subtarget->fixFSMULD())
/*5567*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FSMULD), 0,
                      MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 (fpextend:f64 f32:f32:$rs1), (fpextend:f64 f32:f32:$rs2)) - Complexity = 9
                  // Dst: (FSMULD:f64 f32:f32:$rs1, f32:f32:$rs2)
/*5575*/        /*Scope*/ 23, /*->5599*/
/*5576*/          OPC_CheckChild0Type, MVT::f64,
/*5578*/          OPC_MoveParent,
/*5579*/          OPC_MoveChild1,
/*5580*/          OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5583*/          OPC_RecordChild0, // #1 = $rs2
/*5584*/          OPC_CheckChild0Type, MVT::f64,
/*5586*/          OPC_MoveParent,
/*5587*/          OPC_CheckType, MVT::f128,
/*5589*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5591*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FDMULQ), 0,
                      MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 (fpextend:f128 f64:f64:$rs1), (fpextend:f128 f64:f64:$rs2)) - Complexity = 9
                  // Dst: (FDMULQ:f128 f64:f64:$rs1, f64:f64:$rs2)
/*5599*/        0, /*End of Scope*/
/*5600*/      /*Scope*/ 38, /*->5639*/
/*5601*/        OPC_RecordChild0, // #0 = $rs1
/*5602*/        OPC_RecordChild1, // #1 = $rs2
/*5603*/        OPC_SwitchType /*3 cases */, 10, MVT::f32,// ->5616
/*5606*/          OPC_CheckPatternPredicate, 8, // (!Subtarget->replaceFMULS())
/*5608*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMULS), 0,
                      MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                  // Dst: (FMULS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5616*/        /*SwitchType*/ 8, MVT::f64,// ->5626
/*5618*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMULD), 0,
                      MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                  // Dst: (FMULD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5626*/        /*SwitchType*/ 10, MVT::f128,// ->5638
/*5628*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5630*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMULQ), 0,
                      MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                  // Dst: (FMULQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5638*/        0, // EndSwitchType
/*5639*/      0, /*End of Scope*/
/*5640*/    /*SwitchOpcode*/ 32, TARGET_VAL(SPISD::ITOF),// ->5675
/*5643*/      OPC_RecordChild0, // #0 = $rs2
/*5644*/      OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5654
/*5647*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FITOS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPitof:f32 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOS:f32 FPRegs:f32:$rs2)
/*5654*/      /*SwitchType*/ 7, MVT::f64,// ->5663
/*5656*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FITOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPitof:f64 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOD:f64 FPRegs:f32:$rs2)
/*5663*/      /*SwitchType*/ 9, MVT::f128,// ->5674
/*5665*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5667*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FITOQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPitof:f128 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOQ:f128 FPRegs:f32:$rs2)
/*5674*/      0, // EndSwitchType
/*5675*/    /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::FTOI),// ->5713
/*5678*/      OPC_RecordChild0, // #0 = $rs2
/*5679*/      OPC_Scope, 9, /*->5690*/ // 3 children in Scope
/*5681*/        OPC_CheckChild0Type, MVT::f32,
/*5683*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FSTOI:f32 FPRegs:f32:$rs2)
/*5690*/      /*Scope*/ 9, /*->5700*/
/*5691*/        OPC_CheckChild0Type, MVT::f64,
/*5693*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FDTOI:f32 DFPRegs:f64:$rs2)
/*5700*/      /*Scope*/ 11, /*->5712*/
/*5701*/        OPC_CheckChild0Type, MVT::f128,
/*5703*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5705*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 QFPRegs:f128:$rs2) - Complexity = 3
                // Dst: (FQTOI:f32 QFPRegs:f128:$rs2)
/*5712*/      0, /*End of Scope*/
/*5713*/    /*SwitchOpcode*/ 40, TARGET_VAL(ISD::FP_EXTEND),// ->5756
/*5716*/      OPC_RecordChild0, // #0 = $rs2
/*5717*/      OPC_SwitchType /*2 cases */, 7, MVT::f64,// ->5727
/*5720*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpextend:f64 f32:f32:$rs2) - Complexity = 3
                // Dst: (FSTOD:f64 f32:f32:$rs2)
/*5727*/      /*SwitchType*/ 26, MVT::f128,// ->5755
/*5729*/        OPC_Scope, 11, /*->5742*/ // 2 children in Scope
/*5731*/          OPC_CheckChild0Type, MVT::f32,
/*5733*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5735*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOQ), 0,
                      MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fpextend:f128 f32:f32:$rs2) - Complexity = 3
                  // Dst: (FSTOQ:f128 f32:f32:$rs2)
/*5742*/        /*Scope*/ 11, /*->5754*/
/*5743*/          OPC_CheckChild0Type, MVT::f64,
/*5745*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5747*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOQ), 0,
                      MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fpextend:f128 f64:f64:$rs2) - Complexity = 3
                  // Dst: (FDTOQ:f128 f64:f64:$rs2)
/*5754*/        0, /*End of Scope*/
/*5755*/      0, // EndSwitchType
/*5756*/    /*SwitchOpcode*/ 40, TARGET_VAL(ISD::FP_ROUND),// ->5799
/*5759*/      OPC_RecordChild0, // #0 = $rs2
/*5760*/      OPC_SwitchType /*2 cases */, 24, MVT::f32,// ->5787
/*5763*/        OPC_Scope, 9, /*->5774*/ // 2 children in Scope
/*5765*/          OPC_CheckChild0Type, MVT::f64,
/*5767*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOS), 0,
                      MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fpround:f32 f64:f64:$rs2) - Complexity = 3
                  // Dst: (FDTOS:f32 f64:f64:$rs2)
/*5774*/        /*Scope*/ 11, /*->5786*/
/*5775*/          OPC_CheckChild0Type, MVT::f128,
/*5777*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5779*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOS), 0,
                      MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fpround:f32 f128:f128:$rs2) - Complexity = 3
                  // Dst: (FQTOS:f32 f128:f128:$rs2)
/*5786*/        0, /*End of Scope*/
/*5787*/      /*SwitchType*/ 9, MVT::f64,// ->5798
/*5789*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5791*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpround:f64 f128:f128:$rs2) - Complexity = 3
                // Dst: (FQTOD:f64 f128:f128:$rs2)
/*5798*/      0, // EndSwitchType
/*5799*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FNEG),// ->5836
/*5802*/      OPC_RecordChild0, // #0 = $rs2
/*5803*/      OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5813
/*5806*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$rs2)
/*5813*/      /*SwitchType*/ 9, MVT::f64,// ->5824
/*5815*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5817*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$rs2)
/*5824*/      /*SwitchType*/ 9, MVT::f128,// ->5835
/*5826*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5828*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FNEGQ:f128 f128:f128:$rs2)
/*5835*/      0, // EndSwitchType
/*5836*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FABS),// ->5873
/*5839*/      OPC_RecordChild0, // #0 = $rs2
/*5840*/      OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5850
/*5843*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FABSS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fabs:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FABSS:f32 f32:f32:$rs2)
/*5850*/      /*SwitchType*/ 9, MVT::f64,// ->5861
/*5852*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5854*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FABSD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FABSD:f64 f64:f64:$rs2)
/*5861*/      /*SwitchType*/ 9, MVT::f128,// ->5872
/*5863*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5865*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FABSQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fabs:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FABSQ:f128 f128:f128:$rs2)
/*5872*/      0, // EndSwitchType
/*5873*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FSQRT),// ->5910
/*5876*/      OPC_RecordChild0, // #0 = $rs2
/*5877*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->5889
/*5880*/        OPC_CheckPatternPredicate, 9, // (!Subtarget->fixAllFDIVSQRT())
/*5882*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FSQRTS:f32 f32:f32:$rs2)
/*5889*/      /*SwitchType*/ 7, MVT::f64,// ->5898
/*5891*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FSQRTD:f64 f64:f64:$rs2)
/*5898*/      /*SwitchType*/ 9, MVT::f128,// ->5909
/*5900*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5902*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FSQRTQ:f128 f128:f128:$rs2)
/*5909*/      0, // EndSwitchType
/*5910*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FADD),// ->5949
/*5913*/      OPC_RecordChild0, // #0 = $rs1
/*5914*/      OPC_RecordChild1, // #1 = $rs2
/*5915*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5926
/*5918*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FADDS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FADDS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5926*/      /*SwitchType*/ 8, MVT::f64,// ->5936
/*5928*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FADDD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FADDD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5936*/      /*SwitchType*/ 10, MVT::f128,// ->5948
/*5938*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5940*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FADDQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FADDQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5948*/      0, // EndSwitchType
/*5949*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FSUB),// ->5988
/*5952*/      OPC_RecordChild0, // #0 = $rs1
/*5953*/      OPC_RecordChild1, // #1 = $rs2
/*5954*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5965
/*5957*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FSUBS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5965*/      /*SwitchType*/ 8, MVT::f64,// ->5975
/*5967*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FSUBD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5975*/      /*SwitchType*/ 10, MVT::f128,// ->5987
/*5977*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5979*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FSUBQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5987*/      0, // EndSwitchType
/*5988*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FDIV),// ->6027
/*5991*/      OPC_RecordChild0, // #0 = $rs1
/*5992*/      OPC_RecordChild1, // #1 = $rs2
/*5993*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->6004
/*5996*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FDIVS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*6004*/      /*SwitchType*/ 8, MVT::f64,// ->6014
/*6006*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FDIVD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*6014*/      /*SwitchType*/ 10, MVT::f128,// ->6026
/*6016*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*6018*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FDIVQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*6026*/      0, // EndSwitchType
/*6027*/    /*SwitchOpcode*/ 36, TARGET_VAL(SPISD::XTOF),// ->6066
/*6030*/      OPC_RecordChild0, // #0 = $rs2
/*6031*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->6043
/*6034*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6036*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f32 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOS:f32 DFPRegs:f64:$rs2)
/*6043*/      /*SwitchType*/ 9, MVT::f64,// ->6054
/*6045*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6047*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f64 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOD:f64 DFPRegs:f64:$rs2)
/*6054*/      /*SwitchType*/ 9, MVT::f128,// ->6065
/*6056*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6058*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f128 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOQ:f128 DFPRegs:f64:$rs2)
/*6065*/      0, // EndSwitchType
/*6066*/    /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::FTOX),// ->6108
/*6069*/      OPC_RecordChild0, // #0 = $rs2
/*6070*/      OPC_Scope, 11, /*->6083*/ // 3 children in Scope
/*6072*/        OPC_CheckChild0Type, MVT::f32,
/*6074*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6076*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FSTOX:f64 FPRegs:f32:$rs2)
/*6083*/      /*Scope*/ 11, /*->6095*/
/*6084*/        OPC_CheckChild0Type, MVT::f64,
/*6086*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6088*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FDTOX:f64 DFPRegs:f64:$rs2)
/*6095*/      /*Scope*/ 11, /*->6107*/
/*6096*/        OPC_CheckChild0Type, MVT::f128,
/*6098*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6100*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 QFPRegs:f128:$rs2) - Complexity = 3
                // Dst: (FQTOX:f64 QFPRegs:f128:$rs2)
/*6107*/      0, /*End of Scope*/
/*6108*/    /*SwitchOpcode*/ 38, TARGET_VAL(ISD::BUILD_VECTOR),// ->6149
/*6111*/      OPC_RecordChild0, // #0 = $a1
/*6112*/      OPC_CheckChild0Type, MVT::i32,
/*6114*/      OPC_RecordChild1, // #1 = $a2
/*6115*/      OPC_CheckChild1Type, MVT::i32,
/*6117*/      OPC_CheckType, MVT::v2i32,
/*6119*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  MVT::v2i32, 0/*#Ops*/,  // Results = #2
/*6125*/      OPC_EmitInteger, MVT::i32, SP::sub_even,
/*6128*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*6137*/      OPC_EmitInteger, MVT::i32, SP::sub_odd,
/*6140*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
              // Src: (build_vector:v2i32 IntRegs:i32:$a1, IntRegs:i32:$a2) - Complexity = 3
              // Dst: (INSERT_SUBREG:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), IntRegs:i32:$a1, sub_even:i32), IntRegs:i32:$a2, sub_odd:i32)
/*6149*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 6151 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 139
  // #OPC_RecordNode                     = 23
  // #OPC_RecordChild                    = 161
  // #OPC_RecordMemRef                   = 6
  // #OPC_CaptureGlueInput               = 12
  // #OPC_MoveChild                      = 78
  // #OPC_MoveParent                     = 101
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 159
  // #OPC_CheckPredicate                 = 100
  // #OPC_CheckOpcode                    = 70
  // #OPC_SwitchOpcode                   = 8
  // #OPC_CheckType                      = 91
  // #OPC_SwitchType                     = 36
  // #OPC_CheckChildType                 = 38
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 12
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 114
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 7
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 14
  // #OPC_EmitConvertToTarget            = 67
  // #OPC_EmitMergeInputChains           = 128
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 19
  // #OPC_EmitNodeXForm                  = 18
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 332

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
  return nullptr;
}
bool CheckPatternPredicate(unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget->is64Bit());
  case 1: return (Subtarget->hasHardQuad()) && (Subtarget->isV9());
  case 2: return (!Subtarget->is64Bit());
  case 3: return (Subtarget->isV9());
  case 4: return (!Subtarget->isV9());
  case 5: return (Subtarget->hasLeonCasa());
  case 6: return (Subtarget->hasHardQuad());
  case 7: return (!Subtarget->fixFSMULD());
  case 8: return (!Subtarget->replaceFMULS());
  case 9: return (!Subtarget->fixAllFDIVSQRT());
  }
}

bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { 
    // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { 
    // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { 
    // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { 
    // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { 
    // Predicate_simm13
    auto *N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 8: { 
    // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 9: { 
    // Predicate_sextloadi8
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { 
    // Predicate_sextloadi16
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

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
    // Predicate_extloadi1
    // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 15: { 
    // Predicate_zextloadi32
    // Predicate_extloadi32
    // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { 
    // Predicate_atomic_swap_32
    // Predicate_atomic_store_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 17: { 
    // Predicate_atomic_load_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { 
    // Predicate_atomic_load_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 19: { 
    // Predicate_atomic_load_32
    // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { 
    // Predicate_atomic_load_64
    // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 21: { 
    // Predicate_atomic_store_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 22: { 
    // Predicate_atomic_store_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 23: { 
    // Predicate_atomic_store_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 24: { 
    // Predicate_simm11
    auto *N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 25: { 
    // Predicate_SETHIimm
    auto *N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 26: { 
    // Predicate_uimm32
    auto *N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 27: { 
    // Predicate_nimm33
    auto *N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

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
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023, SDLoc(N),
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), SDLoc(N),
                                   MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  }
}

