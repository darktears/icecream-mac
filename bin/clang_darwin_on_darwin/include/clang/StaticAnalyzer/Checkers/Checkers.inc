
#ifdef GET_GROUPS
#endif // GET_GROUPS


#ifdef GET_PACKAGES
PACKAGE("alpha", -1, false)
PACKAGE("alpha.clone", -1, true)
PACKAGE("alpha.core", -1, true)
PACKAGE("alpha.cplusplus", -1, true)
PACKAGE("alpha.deadcode", -1, true)
PACKAGE("alpha.osx", -1, true)
PACKAGE("alpha.osx.cocoa", -1, true)
PACKAGE("alpha.osx.cocoa.localizability", -1, true)
PACKAGE("alpha.security", -1, true)
PACKAGE("alpha.security.taint", -1, true)
PACKAGE("alpha.unix", -1, true)
PACKAGE("alpha.unix.cstring", -1, true)
PACKAGE("alpha.valist", -1, true)
PACKAGE("core", -1, false)
PACKAGE("core.builtin", -1, false)
PACKAGE("core.uninitialized", -1, false)
PACKAGE("cplusplus", -1, false)
PACKAGE("deadcode", -1, false)
PACKAGE("debug", -1, false)
PACKAGE("llvm", -1, false)
PACKAGE("nullability", -1, false)
PACKAGE("optin", -1, false)
PACKAGE("optin.mpi", -1, false)
PACKAGE("optin.osx", -1, false)
PACKAGE("optin.osx.cocoa", -1, false)
PACKAGE("optin.osx.cocoa.localizability", -1, false)
PACKAGE("optin.performance", -1, false)
PACKAGE("osx", -1, false)
PACKAGE("osx.cocoa", -1, false)
PACKAGE("osx.coreFoundation", -1, false)
PACKAGE("osx.coreFoundation.containers", -1, false)
PACKAGE("security", -1, false)
PACKAGE("security.insecureAPI", -1, false)
PACKAGE("unix", -1, false)
PACKAGE("unix.cstring", -1, true)
PACKAGE("valist", -1, false)
#endif // GET_PACKAGES


#ifdef GET_CHECKERS
CHECKER("debug.AnalysisOrder", AnalysisOrderChecker, AnalysisOrder.cpp, "Print callbacks that are called during analysis in order", -1, false)
CHECKER("debug.Stats", AnalyzerStatsChecker, AnalyzerStatsChecker.cpp, "Emit warnings with analyzer statistics", -1, false)
CHECKER("alpha.security.ArrayBound", ArrayBoundChecker, ArrayBoundChecker.cpp, "Warn about buffer overflows (older checker)", -1, true)
CHECKER("alpha.security.ArrayBoundV2", ArrayBoundCheckerV2, ArrayBoundCheckerV2.cpp, "Warn about buffer overflows (newer checker)", -1, true)
CHECKER("alpha.core.BoolAssignment", BoolAssignmentChecker, BoolAssignmentChecker.cpp, "Warn about assigning non-{0,1} values to Boolean variables", -1, true)
CHECKER("debug.DumpBugHash", BugHashDumper, DebugCheckers.cpp, "Dump the bug hash for all statements.", -1, false)
CHECKER("core.builtin.BuiltinFunctions", BuiltinFunctionChecker, BuiltinFunctionChecker.cpp, "Evaluate compiler builtin functions (e.g., alloca())", -1, false)
CHECKER("osx.coreFoundation.CFError", CFErrorChecker, NSErrorChecker.cpp, "Check usage of CFErrorRef* parameters", -1, false)
CHECKER("debug.DumpCFG", CFGDumper, DebugCheckers.cpp, "Display Control-Flow Graphs", -1, false)
CHECKER("debug.ViewCFG", CFGViewer, DebugCheckers.cpp, "View Control-Flow Graphs using GraphViz", -1, false)
CHECKER("osx.coreFoundation.CFNumber", CFNumberCreateChecker, BasicObjCFoundationChecks.cpp, "Check for proper uses of CFNumberCreate", -1, false)
CHECKER("osx.coreFoundation.CFRetainRelease", CFRetainReleaseChecker, BasicObjCFoundationChecks.cpp, "Check for null arguments to CFRetain/CFRelease/CFMakeCollectable", -1, false)
CHECKER("alpha.unix.cstring.BufferOverlap", CStringBufferOverlap, CStringChecker.cpp, "Checks for overlap in two buffer arguments", -1, true)
CHECKER("alpha.unix.cstring.NotNullTerminated", CStringNotNullTerm, CStringChecker.cpp, "Check for arguments which are not null-terminating strings", -1, true)
CHECKER("unix.cstring.NullArg", CStringNullArg, CStringChecker.cpp, "Check for null pointers being passed as arguments to C string functions", -1, true)
CHECKER("alpha.unix.cstring.OutOfBounds", CStringOutOfBounds, CStringChecker.cpp, "Check for out-of-bounds access in string functions", -1, true)
CHECKER("unix.cstring.BadSizeArg", CStringSyntaxChecker, CStringSyntaxChecker.cpp, "Check the size argument passed into C string functions for common erroneous patterns", -1, true)
CHECKER("cplusplus.SelfAssignment", CXXSelfAssignmentChecker, CXXSelfAssignmentChecker.cpp, "Checks C++ copy and move assignment operators for self assignment", -1, false)
CHECKER("core.CallAndMessage", CallAndMessageChecker, CallAndMessageChecker.cpp, "Check for logical errors for function calls and Objective-C message expressions (e.g., uninitialized arguments, null function pointers)", -1, false)
CHECKER("alpha.core.CallAndMessageUnInitRefArg", CallAndMessageUnInitRefArg, CallAndMessageChecker.cpp, "Check for logical errors for function calls and Objective-C message expressions (e.g., uninitialized arguments, null function pointers, and pointer to undefined variables)", -1, true)
CHECKER("debug.DumpCalls", CallDumper, TraversalChecker.cpp, "Print calls as they are traversed by the engine", -1, false)
CHECKER("debug.DumpCallGraph", CallGraphDumper, DebugCheckers.cpp, "Display Call Graph", -1, false)
CHECKER("debug.ViewCallGraph", CallGraphViewer, DebugCheckers.cpp, "View Call Graph using GraphViz", -1, false)
CHECKER("alpha.core.CastSize", CastSizeChecker, CastSizeChecker.cpp, "Check when casting a malloc'ed type T, whether the size is a multiple of the size of T", -1, true)
CHECKER("alpha.core.CastToStruct", CastToStructChecker, CastToStructChecker.cpp, "Check for cast from non-struct pointer to struct pointer", -1, true)
CHECKER("alpha.unix.Chroot", ChrootChecker, ChrootChecker.cpp, "Check improper use of chroot", -1, true)
CHECKER("osx.cocoa.ClassRelease", ClassReleaseChecker, BasicObjCFoundationChecks.cpp, "Check for sending 'retain', 'release', or 'autorelease' directly to a Class", -1, false)
CHECKER("alpha.clone.CloneChecker", CloneChecker, CloneChecker.cpp, "Reports similar pieces of code.", -1, true)
CHECKER("debug.ConfigDumper", ConfigDumper, DebugCheckers.cpp, "Dump config table", -1, false)
CHECKER("alpha.core.Conversion", ConversionChecker, ConversionChecker.cpp, "Loss of sign/precision in implicit conversions", -1, true)
CHECKER("alpha.valist.CopyToSelf", CopyToSelfChecker, ValistChecker.cpp, "Check for va_lists which are copied onto itself.", -1, true)
CHECKER("deadcode.DeadStores", DeadStoresChecker, DeadStoresChecker.cpp, "Check for values stored to variables that are never read afterwards", -1, false)
CHECKER("core.NullDereference", DereferenceChecker, DereferenceChecker.cpp, "Check for dereferences of null pointers", -1, false)
CHECKER("alpha.osx.cocoa.DirectIvarAssignment", DirectIvarAssignment, DirectIvarAssignment.cpp, "Check for direct assignments to instance variables", -1, true)
CHECKER("alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions", DirectIvarAssignmentForAnnotatedFunctions, DirectIvarAssignment.cpp, "Check for direct assignments to instance variables in the methods annotated with objc_no_direct_instance_variable_assignment", -1, true)
CHECKER("core.DivideZero", DivZeroChecker, DivZeroChecker.cpp, "Check for division by zero", -1, false)
CHECKER("debug.DumpDominators", DominatorsTreeDumper, DebugCheckers.cpp, "Print the dominance tree for a given CFG", -1, false)
CHECKER("alpha.core.DynamicTypeChecker", DynamicTypeChecker, DynamicTypeChecker.cpp, "Check for cases where the dynamic and the static type of an object are unrelated.", -1, true)
CHECKER("core.DynamicTypePropagation", DynamicTypePropagation, DynamicTypePropagation.cpp, "Generate dynamic type information", -1, false)
CHECKER("optin.osx.cocoa.localizability.EmptyLocalizationContextChecker", EmptyLocalizationContextChecker, LocalizationChecker.cpp, "Check that NSLocalizedString macros include a comment for context", -1, false)
CHECKER("debug.ViewExplodedGraph", ExplodedGraphViewer, DebugCheckers.cpp, "View Exploded Graphs using GraphViz", -1, false)
CHECKER("debug.ExprInspection", ExprInspectionChecker, ExprInspectionChecker.cpp, "Check the analyzer's understanding of expressions", -1, false)
CHECKER("alpha.core.FixedAddr", FixedAddressChecker, FixedAddressChecker.cpp, "Check for assignment of a fixed address to a pointer", -1, true)
CHECKER("security.FloatLoopCounter", FloatLoopCounter, CheckSecuritySyntaxOnly.cpp, "Warn on using a floating point value as a loop counter (CERT: FLP30-C, FLP30-CPP)", -1, false)
CHECKER("alpha.security.taint.TaintPropagation", GenericTaintChecker, GenericTaintChecker.cpp, "Generate taint information used by other checkers", -1, true)
CHECKER("alpha.core.IdenticalExpr", IdenticalExprChecker, IdenticalExprChecker.cpp, "Warn about unintended use of identical expressions in operators", -1, true)
CHECKER("alpha.osx.cocoa.InstanceVariableInvalidation", InstanceVariableInvalidation, IvarInvalidationChecker.cpp, "Check that the invalidatable instance variables are invalidated in the methods annotated with objc_instance_variable_invalidator", -1, true)
CHECKER("llvm.Conventions", LLVMConventionsChecker, LLVMConventionsChecker.cpp, "Check code for LLVM codebase conventions", -1, false)
CHECKER("debug.DumpLiveVars", LiveVariablesDumper, DebugCheckers.cpp, "Print results of live variable analysis", -1, false)
CHECKER("optin.mpi.MPI-Checker", MPIChecker, MPIChecker.cpp, "Checks MPI code", -1, false)
CHECKER("osx.SecKeychainAPI", MacOSKeychainAPIChecker, MacOSKeychainAPIChecker.cpp, "Check for proper uses of Secure Keychain APIs", -1, false)
CHECKER("osx.API", MacOSXAPIChecker, MacOSXAPIChecker.cpp, "Check for proper uses of various Apple APIs", -1, false)
CHECKER("unix.Malloc", MallocChecker, MallocChecker.cpp, "Check for memory leaks, double free, and use-after-free problems. Traces memory managed by malloc()/free().", -1, false)
CHECKER("alpha.security.MallocOverflow", MallocOverflowSecurityChecker, MallocOverflowSecurityChecker.cpp, "Check for overflows in the arguments to malloc()", -1, true)
CHECKER("unix.MallocSizeof", MallocSizeofChecker, MallocSizeofChecker.cpp, "Check for dubious malloc arguments involving sizeof", -1, false)
CHECKER("unix.MismatchedDeallocator", MismatchedDeallocatorChecker, MallocChecker.cpp, "Check for mismatched deallocators.", -1, false)
CHECKER("alpha.osx.cocoa.MissingInvalidationMethod", MissingInvalidationMethod, IvarInvalidationChecker.cpp, "Check that the invalidation methods are present in classes that contain invalidatable instance variables", -1, true)
CHECKER("osx.cocoa.NSAutoreleasePool", NSAutoreleasePoolChecker, NSAutoreleasePoolChecker.cpp, "Warn for suboptimal uses of NSAutoreleasePool in Objective-C GC mode", -1, false)
CHECKER("osx.cocoa.NSError", NSErrorChecker, NSErrorChecker.cpp, "Check usage of NSError** parameters", -1, false)
CHECKER("cplusplus.NewDelete", NewDeleteChecker, MallocChecker.cpp, "Check for double-free and use-after-free problems. Traces memory managed by new/delete.", -1, false)
CHECKER("cplusplus.NewDeleteLeaks", NewDeleteLeaksChecker, MallocChecker.cpp, "Check for memory leaks. Traces memory managed by new/delete.", -1, false)
CHECKER("osx.cocoa.NilArg", NilArgChecker, BasicObjCFoundationChecks.cpp, "Check for prohibited nil arguments to ObjC method calls", -1, false)
CHECKER("core.builtin.NoReturnFunctions", NoReturnFunctionChecker, NoReturnFunctionChecker.cpp, "Evaluate \"panic\" functions that are known to not return to the caller", -1, false)
CHECKER("optin.osx.cocoa.localizability.NonLocalizedStringChecker", NonLocalizedStringChecker, LocalizationChecker.cpp, "Warns about uses of non-localized NSStrings passed to UI methods expecting localized NSStrings", -1, false)
CHECKER("core.NonNullParamChecker", NonNullParamChecker, NonNullParamChecker.cpp, "Check for null pointers passed as arguments to a function whose arguments are references or marked with the 'nonnull' attribute", -1, false)
CHECKER("nullability.NullPassedToNonnull", NullPassedToNonnullChecker, NullabilityChecker.cpp, "Warns when a null pointer is passed to a pointer which has a _Nonnull type.", -1, false)
CHECKER("nullability.NullReturnedFromNonnull", NullReturnedFromNonnullChecker, NullabilityChecker.cpp, "Warns when a null pointer is returned from a function that has _Nonnull return type.", -1, false)
CHECKER("nullability.NullableDereferenced", NullableDereferencedChecker, NullabilityChecker.cpp, "Warns when a nullable pointer is dereferenced.", -1, false)
CHECKER("nullability.NullablePassedToNonnull", NullablePassedToNonnullChecker, NullabilityChecker.cpp, "Warns when a nullable pointer is passed to a pointer which has a _Nonnull type.", -1, false)
CHECKER("nullability.NullablePassedToNonnull", NullableReturnedFromNonnullChecker, NullabilityChecker.cpp, "Warns when a nullable pointer is returned from a function that has _Nonnull return type.", -1, false)
CHECKER("osx.cocoa.AtSync", ObjCAtSyncChecker, ObjCAtSyncChecker.cpp, "Check for nil pointers used as mutexes for @synchronized", -1, false)
CHECKER("osx.coreFoundation.containers.PointerSizedValues", ObjCContainersASTChecker, ObjCContainersASTChecker.cpp, "Warns if 'CFArray', 'CFDictionary', 'CFSet' are created with non-pointer-size values", -1, false)
CHECKER("osx.coreFoundation.containers.OutOfBounds", ObjCContainersChecker, ObjCContainersChecker.cpp, "Checks for index out-of-bounds when using 'CFArray' API", -1, false)
CHECKER("osx.cocoa.Dealloc", ObjCDeallocChecker, CheckObjCDealloc.cpp, "Warn about Objective-C classes that lack a correct implementation of -dealloc", -1, false)
CHECKER("osx.cocoa.ObjCGenerics", ObjCGenericsChecker, DynamicTypePropagation.cpp, "Check for type errors when using Objective-C generics", -1, false)
CHECKER("osx.cocoa.Loops", ObjCLoopChecker, BasicObjCFoundationChecks.cpp, "Improved modeling of loops using Cocoa collection types", -1, false)
CHECKER("osx.cocoa.IncompatibleMethodTypes", ObjCMethSigsChecker, CheckObjCInstMethSignature.cpp, "Warn about Objective-C method signatures with type incompatibilities", -1, false)
CHECKER("osx.cocoa.NonNilReturnValue", ObjCNonNilReturnValueChecker, BasicObjCFoundationChecks.cpp, "Model the APIs that are guaranteed to return a non-nil value", -1, false)
CHECKER("osx.cocoa.SelfInit", ObjCSelfInitChecker, ObjCSelfInitChecker.cpp, "Check that 'self' is properly initialized inside an initializer method", -1, false)
CHECKER("osx.cocoa.MissingSuperCall", ObjCSuperCallChecker, ObjCMissingSuperCallChecker.cpp, "Warn about Objective-C methods that lack a necessary call to super", -1, false)
CHECKER("osx.cocoa.SuperDealloc", ObjCSuperDeallocChecker, ObjCSuperDeallocChecker.cpp, "Warn about improper use of '[super dealloc]' in Objective-C", -1, false)
CHECKER("osx.cocoa.UnusedIvars", ObjCUnusedIvarsChecker, ObjCUnusedIVarsChecker.cpp, "Warn about private ivars that are never used", -1, false)
CHECKER("optin.performance.Padding", PaddingChecker, PaddingChecker.cpp, "Check for excessively padded structs.", -1, false)
CHECKER("alpha.osx.cocoa.localizability.PluralMisuseChecker", PluralMisuseChecker, LocalizationChecker.cpp, "Warns against using one vs. many plural pattern in code when generating localized strings.", -1, true)
CHECKER("alpha.core.PointerArithm", PointerArithChecker, PointerArithChecker, "Check for pointer arithmetic on locations other than array elements", -1, true)
CHECKER("alpha.core.PointerSub", PointerSubChecker, PointerSubChecker, "Check for pointer subtractions on two pointers pointing to different memory chunks", -1, true)
CHECKER("alpha.unix.PthreadLock", PthreadLockChecker, PthreadLockChecker.cpp, "Simple lock -> unlock checker", -1, true)
CHECKER("osx.cocoa.RetainCount", RetainCountChecker, RetainCountChecker.cpp, "Check for leaks and improper reference count management", -1, false)
CHECKER("alpha.security.ReturnPtrRange", ReturnPointerRangeChecker, ReturnPointerRangeChecker.cpp, "Check for an out-of-bound pointer being returned to callers", -1, true)
CHECKER("core.uninitialized.UndefReturn", ReturnUndefChecker, ReturnUndefChecker.cpp, "Check for uninitialized values being returned to the caller", -1, false)
CHECKER("alpha.unix.SimpleStream", SimpleStreamChecker, SimpleStreamChecker.cpp, "Check for misuses of stream APIs", -1, true)
CHECKER("alpha.core.SizeofPtr", SizeofPointerChecker, CheckSizeofPointer.cpp, "Warn about unintended use of sizeof() on pointer expressions", -1, true)
CHECKER("core.StackAddressEscape", StackAddrEscapeChecker, StackAddrEscapeChecker.cpp, "Check that addresses to stack memory do not escape the function", -1, false)
CHECKER("alpha.unix.Stream", StreamChecker, StreamChecker.cpp, "Check stream handling functions", -1, true)
CHECKER("debug.TaintTest", TaintTesterChecker, TaintTesterChecker.cpp, "Mark tainted symbols as such.", -1, false)
CHECKER("alpha.core.TestAfterDivZero", TestAfterDivZeroChecker, TestAfterDivZeroChecker.cpp, "Check for division by variable that is later compared against 0. Either the comparison is useless or there is division by zero.", -1, true)
CHECKER("debug.DumpTraversal", TraversalDumper, TraversalChecker.cpp, "Print branch conditions as they are traversed by the engine", -1, false)
CHECKER("security.insecureAPI.UncheckedReturn", UncheckedReturn, CheckSecuritySyntaxOnly.cpp, "Warn on uses of functions whose return values must be always checked", -1, false)
CHECKER("core.uninitialized.Branch", UndefBranchChecker, UndefBranchChecker.cpp, "Check for uninitialized values used as branch conditions", -1, false)
CHECKER("core.uninitialized.CapturedBlockVariable", UndefCapturedBlockVarChecker, UndefCapturedBlockVarChecker.cpp, "Check for blocks that capture uninitialized values", -1, false)
CHECKER("core.UndefinedBinaryOperatorResult", UndefResultChecker, UndefResultChecker.cpp, "Check for undefined results of binary operators", -1, false)
CHECKER("core.uninitialized.ArraySubscript", UndefinedArraySubscriptChecker, UndefinedArraySubscriptChecker.cpp, "Check for uninitialized values used as array subscripts", -1, false)
CHECKER("core.uninitialized.Assign", UndefinedAssignmentChecker, UndefinedAssignmentChecker.cpp, "Check for assigning uninitialized values", -1, false)
CHECKER("alpha.valist.Uninitialized", UninitializedChecker, ValistChecker.cpp, "Check for usages of uninitialized (or already released) va_lists.", -1, true)
CHECKER("unix.API", UnixAPIChecker, UnixAPIChecker.cpp, "Check calls to various UNIX/Posix functions", -1, false)
CHECKER("alpha.deadcode.UnreachableCode", UnreachableCodeChecker, UnreachableCodeChecker.cpp, "Check unreachable code", -1, true)
CHECKER("alpha.valist.Unterminated", UnterminatedChecker, ValistChecker.cpp, "Check for va_lists which are not released by a va_end call.", -1, true)
CHECKER("core.VLASize", VLASizeChecker, VLASizeChecker.cpp, "Check for declarations of VLA of undefined or zero size", -1, false)
CHECKER("osx.cocoa.VariadicMethodTypes", VariadicMethodTypeChecker, BasicObjCFoundationChecks.cpp, "Check for passing non-Objective-C types to variadic collection initialization methods that expect only Objective-C types", -1, false)
CHECKER("unix.Vfork", VforkChecker, VforkChecker.cpp, "Check for proper usage of vfork", -1, false)
CHECKER("alpha.cplusplus.VirtualCall", VirtualCallChecker, VirtualCallChecker.cpp, "Check virtual function calls during construction or destruction", -1, true)
CHECKER("security.insecureAPI.getpw", getpw, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'getpw' function", -1, false)
CHECKER("security.insecureAPI.gets", gets, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'gets' function", -1, false)
CHECKER("security.insecureAPI.mkstemp", mkstemp, CheckSecuritySyntaxOnly.cpp, "Warn when 'mkstemp' is passed fewer than 6 X's in the format string", -1, false)
CHECKER("security.insecureAPI.mktemp", mktemp, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'mktemp' function", -1, false)
CHECKER("security.insecureAPI.rand", rand, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'rand', 'random', and related functions", -1, false)
CHECKER("security.insecureAPI.strcpy", strcpy, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'strcpy' and 'strcat' functions", -1, false)
CHECKER("security.insecureAPI.vfork", vfork, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'vfork' function", -1, false)
#endif // GET_CHECKERS


#ifdef GET_MEMBER_ARRAYS
static const short SubPackageArray0[] = { 3, 16, 44, 18, 28, 35, 20, 1, -1 };
static const short SubPackageArray1[] = { 2, -1 };
static const short CheckerArray2[] = { 27, -1 };
static const short SubPackageArray3[] = { 4, 6, 7, 8, 11, 10, 12, 13, 14, 5, 15, 9, -1 };
static const short CheckerArray4[] = { 4, -1 };
static const short CheckerArray5[] = { 19, -1 };
static const short CheckerArray6[] = { 23, -1 };
static const short CheckerArray7[] = { 24, -1 };
static const short CheckerArray8[] = { 29, -1 };
static const short CheckerArray9[] = { 37, -1 };
static const short CheckerArray10[] = { 42, -1 };
static const short CheckerArray11[] = { 45, -1 };
static const short CheckerArray12[] = { 84, -1 };
static const short CheckerArray13[] = { 85, -1 };
static const short CheckerArray14[] = { 91, -1 };
static const short CheckerArray15[] = { 95, -1 };
static const short SubPackageArray16[] = { 17, -1 };
static const short CheckerArray17[] = { 110, -1 };
static const short SubPackageArray18[] = { 19, -1 };
static const short CheckerArray19[] = { 105, -1 };
static const short SubPackageArray20[] = { 21, -1 };
static const short SubPackageArray21[] = { 26, 24, 25, 22, 23, -1 };
static const short CheckerArray22[] = { 33, -1 };
static const short CheckerArray23[] = { 34, -1 };
static const short CheckerArray24[] = { 46, -1 };
static const short CheckerArray25[] = { 56, -1 };
static const short SubPackageArray26[] = { 27, -1 };
static const short CheckerArray27[] = { 83, -1 };
static const short SubPackageArray28[] = { 33, 29, 30, 32, 31, -1 };
static const short CheckerArray29[] = { 2, -1 };
static const short CheckerArray30[] = { 3, -1 };
static const short CheckerArray31[] = { 53, -1 };
static const short CheckerArray32[] = { 88, -1 };
static const short SubPackageArray33[] = { 34, -1 };
static const short CheckerArray34[] = { 44, -1 };
static const short SubPackageArray35[] = { 40, 36, 37, 39, 38, -1 };
static const short CheckerArray36[] = { 25, -1 };
static const short CheckerArray37[] = { 86, -1 };
static const short CheckerArray38[] = { 90, -1 };
static const short CheckerArray39[] = { 93, -1 };
static const short SubPackageArray40[] = { 43, 41, 42, -1 };
static const short CheckerArray41[] = { 12, -1 };
static const short CheckerArray42[] = { 13, -1 };
static const short CheckerArray43[] = { 15, -1 };
static const short SubPackageArray44[] = { 46, 47, 45, -1 };
static const short CheckerArray45[] = { 30, -1 };
static const short CheckerArray46[] = { 103, -1 };
static const short CheckerArray47[] = { 106, -1 };
static const short SubPackageArray48[] = { 57, 60, 53, 49, 52, 56, 50, 55, 54, 51, -1 };
static const short CheckerArray49[] = { 18, -1 };
static const short CheckerArray50[] = { 35, -1 };
static const short CheckerArray51[] = { 38, -1 };
static const short CheckerArray52[] = { 64, -1 };
static const short CheckerArray53[] = { 32, -1 };
static const short CheckerArray54[] = { 92, -1 };
static const short CheckerArray55[] = { 100, -1 };
static const short CheckerArray56[] = { 107, -1 };
static const short SubPackageArray57[] = { 59, 58, -1 };
static const short CheckerArray58[] = { 6, -1 };
static const short CheckerArray59[] = { 62, -1 };
static const short SubPackageArray60[] = { 61, 62, 63, 64, 65, -1 };
static const short CheckerArray61[] = { 101, -1 };
static const short CheckerArray62[] = { 102, -1 };
static const short CheckerArray63[] = { 98, -1 };
static const short CheckerArray64[] = { 99, -1 };
static const short CheckerArray65[] = { 89, -1 };
static const short SubPackageArray66[] = { 67, 68, 69, -1 };
static const short CheckerArray67[] = { 59, -1 };
static const short CheckerArray68[] = { 60, -1 };
static const short CheckerArray69[] = { 17, -1 };
static const short SubPackageArray70[] = { 71, -1 };
static const short CheckerArray71[] = { 31, -1 };
static const short SubPackageArray72[] = { 73, 79, 80, 85, 76, 86, 77, 74, 81, 78, 83, 84, 82, 87, 75, -1 };
static const short CheckerArray73[] = { 0, -1 };
static const short CheckerArray74[] = { 28, -1 };
static const short CheckerArray75[] = { 5, -1 };
static const short CheckerArray76[] = { 8, -1 };
static const short CheckerArray77[] = { 21, -1 };
static const short CheckerArray78[] = { 20, -1 };
static const short CheckerArray79[] = { 36, -1 };
static const short CheckerArray80[] = { 48, -1 };
static const short CheckerArray81[] = { 96, -1 };
static const short CheckerArray82[] = { 41, -1 };
static const short CheckerArray83[] = { 1, -1 };
static const short CheckerArray84[] = { 94, -1 };
static const short CheckerArray85[] = { 9, -1 };
static const short CheckerArray86[] = { 22, -1 };
static const short CheckerArray87[] = { 40, -1 };
static const short SubPackageArray88[] = { 89, -1 };
static const short CheckerArray89[] = { 47, -1 };
static const short SubPackageArray90[] = { 91, 92, 93, 94, 94, -1 };
static const short CheckerArray91[] = { 65, -1 };
static const short CheckerArray92[] = { 66, -1 };
static const short CheckerArray93[] = { 67, -1 };
static const short CheckerArray94[] = { 68, 69, -1 };
static const short SubPackageArray95[] = { 103, 98, 96, -1 };
static const short SubPackageArray96[] = { 97, -1 };
static const short CheckerArray97[] = { 49, -1 };
static const short SubPackageArray98[] = { 99, -1 };
static const short SubPackageArray99[] = { 100, -1 };
static const short SubPackageArray100[] = { 102, 101, -1 };
static const short CheckerArray101[] = { 39, -1 };
static const short CheckerArray102[] = { 63, -1 };
static const short SubPackageArray103[] = { 104, -1 };
static const short CheckerArray104[] = { 82, -1 };
static const short SubPackageArray105[] = { 108, 125, 106, 107, -1 };
static const short CheckerArray106[] = { 51, -1 };
static const short CheckerArray107[] = { 50, -1 };
static const short SubPackageArray108[] = { 109, 117, 110, 124, 115, 112, 123, 121, 113, 118, 114, 116, 120, 119, 111, 122, -1 };
static const short CheckerArray109[] = { 70, -1 };
static const short CheckerArray110[] = { 26, -1 };
static const short CheckerArray111[] = { 73, -1 };
static const short CheckerArray112[] = { 76, -1 };
static const short CheckerArray113[] = { 75, -1 };
static const short CheckerArray114[] = { 79, -1 };
static const short CheckerArray115[] = { 57, -1 };
static const short CheckerArray116[] = { 58, -1 };
static const short CheckerArray117[] = { 61, -1 };
static const short CheckerArray118[] = { 77, -1 };
static const short CheckerArray119[] = { 74, -1 };
static const short CheckerArray120[] = { 87, -1 };
static const short CheckerArray121[] = { 78, -1 };
static const short CheckerArray122[] = { 80, -1 };
static const short CheckerArray123[] = { 81, -1 };
static const short CheckerArray124[] = { 108, -1 };
static const short SubPackageArray125[] = { 129, 127, 128, 126, -1 };
static const short CheckerArray126[] = { 7, -1 };
static const short CheckerArray127[] = { 10, -1 };
static const short CheckerArray128[] = { 11, -1 };
static const short SubPackageArray129[] = { 131, 130, -1 };
static const short CheckerArray130[] = { 72, -1 };
static const short CheckerArray131[] = { 71, -1 };
static const short SubPackageArray132[] = { 134, 133, -1 };
static const short CheckerArray133[] = { 43, -1 };
static const short SubPackageArray134[] = { 137, 136, 139, 138, 140, 141, 142, 135, -1 };
static const short CheckerArray135[] = { 97, -1 };
static const short CheckerArray136[] = { 111, -1 };
static const short CheckerArray137[] = { 112, -1 };
static const short CheckerArray138[] = { 113, -1 };
static const short CheckerArray139[] = { 114, -1 };
static const short CheckerArray140[] = { 115, -1 };
static const short CheckerArray141[] = { 116, -1 };
static const short CheckerArray142[] = { 117, -1 };
static const short SubPackageArray143[] = { 149, 144, 145, 146, 147, 148, -1 };
static const short CheckerArray144[] = { 104, -1 };
static const short CheckerArray145[] = { 52, -1 };
static const short CheckerArray146[] = { 54, -1 };
static const short CheckerArray147[] = { 55, -1 };
static const short CheckerArray148[] = { 109, -1 };
static const short SubPackageArray149[] = { 151, 150, -1 };
static const short CheckerArray150[] = { 16, -1 };
static const short CheckerArray151[] = { 14, -1 };
#endif // GET_MEMBER_ARRAYS


#ifdef GET_CHECKNAME_TABLE
  { "alpha",                                                          0, SubPackageArray0, false },
  { "alpha.clone",                                                    0, SubPackageArray1, true },
  { "alpha.clone.CloneChecker",                                       CheckerArray2, 0, false },
  { "alpha.core",                                                     0, SubPackageArray3, true },
  { "alpha.core.BoolAssignment",                                      CheckerArray4, 0, false },
  { "alpha.core.CallAndMessageUnInitRefArg",                          CheckerArray5, 0, false },
  { "alpha.core.CastSize",                                            CheckerArray6, 0, false },
  { "alpha.core.CastToStruct",                                        CheckerArray7, 0, false },
  { "alpha.core.Conversion",                                          CheckerArray8, 0, false },
  { "alpha.core.DynamicTypeChecker",                                  CheckerArray9, 0, false },
  { "alpha.core.FixedAddr",                                           CheckerArray10, 0, false },
  { "alpha.core.IdenticalExpr",                                       CheckerArray11, 0, false },
  { "alpha.core.PointerArithm",                                       CheckerArray12, 0, false },
  { "alpha.core.PointerSub",                                          CheckerArray13, 0, false },
  { "alpha.core.SizeofPtr",                                           CheckerArray14, 0, false },
  { "alpha.core.TestAfterDivZero",                                    CheckerArray15, 0, false },
  { "alpha.cplusplus",                                                0, SubPackageArray16, true },
  { "alpha.cplusplus.VirtualCall",                                    CheckerArray17, 0, false },
  { "alpha.deadcode",                                                 0, SubPackageArray18, true },
  { "alpha.deadcode.UnreachableCode",                                 CheckerArray19, 0, false },
  { "alpha.osx",                                                      0, SubPackageArray20, true },
  { "alpha.osx.cocoa",                                                0, SubPackageArray21, true },
  { "alpha.osx.cocoa.DirectIvarAssignment",                           CheckerArray22, 0, false },
  { "alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions",      CheckerArray23, 0, false },
  { "alpha.osx.cocoa.InstanceVariableInvalidation",                   CheckerArray24, 0, false },
  { "alpha.osx.cocoa.MissingInvalidationMethod",                      CheckerArray25, 0, false },
  { "alpha.osx.cocoa.localizability",                                 0, SubPackageArray26, true },
  { "alpha.osx.cocoa.localizability.PluralMisuseChecker",             CheckerArray27, 0, false },
  { "alpha.security",                                                 0, SubPackageArray28, true },
  { "alpha.security.ArrayBound",                                      CheckerArray29, 0, false },
  { "alpha.security.ArrayBoundV2",                                    CheckerArray30, 0, false },
  { "alpha.security.MallocOverflow",                                  CheckerArray31, 0, false },
  { "alpha.security.ReturnPtrRange",                                  CheckerArray32, 0, false },
  { "alpha.security.taint",                                           0, SubPackageArray33, true },
  { "alpha.security.taint.TaintPropagation",                          CheckerArray34, 0, false },
  { "alpha.unix",                                                     0, SubPackageArray35, true },
  { "alpha.unix.Chroot",                                              CheckerArray36, 0, false },
  { "alpha.unix.PthreadLock",                                         CheckerArray37, 0, false },
  { "alpha.unix.SimpleStream",                                        CheckerArray38, 0, false },
  { "alpha.unix.Stream",                                              CheckerArray39, 0, false },
  { "alpha.unix.cstring",                                             0, SubPackageArray40, true },
  { "alpha.unix.cstring.BufferOverlap",                               CheckerArray41, 0, false },
  { "alpha.unix.cstring.NotNullTerminated",                           CheckerArray42, 0, false },
  { "alpha.unix.cstring.OutOfBounds",                                 CheckerArray43, 0, false },
  { "alpha.valist",                                                   0, SubPackageArray44, true },
  { "alpha.valist.CopyToSelf",                                        CheckerArray45, 0, false },
  { "alpha.valist.Uninitialized",                                     CheckerArray46, 0, false },
  { "alpha.valist.Unterminated",                                      CheckerArray47, 0, false },
  { "core",                                                           0, SubPackageArray48, false },
  { "core.CallAndMessage",                                            CheckerArray49, 0, false },
  { "core.DivideZero",                                                CheckerArray50, 0, false },
  { "core.DynamicTypePropagation",                                    CheckerArray51, 0, false },
  { "core.NonNullParamChecker",                                       CheckerArray52, 0, false },
  { "core.NullDereference",                                           CheckerArray53, 0, false },
  { "core.StackAddressEscape",                                        CheckerArray54, 0, false },
  { "core.UndefinedBinaryOperatorResult",                             CheckerArray55, 0, false },
  { "core.VLASize",                                                   CheckerArray56, 0, false },
  { "core.builtin",                                                   0, SubPackageArray57, false },
  { "core.builtin.BuiltinFunctions",                                  CheckerArray58, 0, false },
  { "core.builtin.NoReturnFunctions",                                 CheckerArray59, 0, false },
  { "core.uninitialized",                                             0, SubPackageArray60, false },
  { "core.uninitialized.ArraySubscript",                              CheckerArray61, 0, false },
  { "core.uninitialized.Assign",                                      CheckerArray62, 0, false },
  { "core.uninitialized.Branch",                                      CheckerArray63, 0, false },
  { "core.uninitialized.CapturedBlockVariable",                       CheckerArray64, 0, false },
  { "core.uninitialized.UndefReturn",                                 CheckerArray65, 0, false },
  { "cplusplus",                                                      0, SubPackageArray66, false },
  { "cplusplus.NewDelete",                                            CheckerArray67, 0, false },
  { "cplusplus.NewDeleteLeaks",                                       CheckerArray68, 0, false },
  { "cplusplus.SelfAssignment",                                       CheckerArray69, 0, false },
  { "deadcode",                                                       0, SubPackageArray70, false },
  { "deadcode.DeadStores",                                            CheckerArray71, 0, false },
  { "debug",                                                          0, SubPackageArray72, false },
  { "debug.AnalysisOrder",                                            CheckerArray73, 0, false },
  { "debug.ConfigDumper",                                             CheckerArray74, 0, false },
  { "debug.DumpBugHash",                                              CheckerArray75, 0, false },
  { "debug.DumpCFG",                                                  CheckerArray76, 0, false },
  { "debug.DumpCallGraph",                                            CheckerArray77, 0, false },
  { "debug.DumpCalls",                                                CheckerArray78, 0, false },
  { "debug.DumpDominators",                                           CheckerArray79, 0, false },
  { "debug.DumpLiveVars",                                             CheckerArray80, 0, false },
  { "debug.DumpTraversal",                                            CheckerArray81, 0, false },
  { "debug.ExprInspection",                                           CheckerArray82, 0, false },
  { "debug.Stats",                                                    CheckerArray83, 0, false },
  { "debug.TaintTest",                                                CheckerArray84, 0, false },
  { "debug.ViewCFG",                                                  CheckerArray85, 0, false },
  { "debug.ViewCallGraph",                                            CheckerArray86, 0, false },
  { "debug.ViewExplodedGraph",                                        CheckerArray87, 0, false },
  { "llvm",                                                           0, SubPackageArray88, false },
  { "llvm.Conventions",                                               CheckerArray89, 0, false },
  { "nullability",                                                    0, SubPackageArray90, false },
  { "nullability.NullPassedToNonnull",                                CheckerArray91, 0, false },
  { "nullability.NullReturnedFromNonnull",                            CheckerArray92, 0, false },
  { "nullability.NullableDereferenced",                               CheckerArray93, 0, false },
  { "nullability.NullablePassedToNonnull",                            CheckerArray94, 0, false },
  { "optin",                                                          0, SubPackageArray95, false },
  { "optin.mpi",                                                      0, SubPackageArray96, false },
  { "optin.mpi.MPI-Checker",                                          CheckerArray97, 0, false },
  { "optin.osx",                                                      0, SubPackageArray98, false },
  { "optin.osx.cocoa",                                                0, SubPackageArray99, false },
  { "optin.osx.cocoa.localizability",                                 0, SubPackageArray100, false },
  { "optin.osx.cocoa.localizability.EmptyLocalizationContextChecker", CheckerArray101, 0, false },
  { "optin.osx.cocoa.localizability.NonLocalizedStringChecker",       CheckerArray102, 0, false },
  { "optin.performance",                                              0, SubPackageArray103, false },
  { "optin.performance.Padding",                                      CheckerArray104, 0, false },
  { "osx",                                                            0, SubPackageArray105, false },
  { "osx.API",                                                        CheckerArray106, 0, false },
  { "osx.SecKeychainAPI",                                             CheckerArray107, 0, false },
  { "osx.cocoa",                                                      0, SubPackageArray108, false },
  { "osx.cocoa.AtSync",                                               CheckerArray109, 0, false },
  { "osx.cocoa.ClassRelease",                                         CheckerArray110, 0, false },
  { "osx.cocoa.Dealloc",                                              CheckerArray111, 0, false },
  { "osx.cocoa.IncompatibleMethodTypes",                              CheckerArray112, 0, false },
  { "osx.cocoa.Loops",                                                CheckerArray113, 0, false },
  { "osx.cocoa.MissingSuperCall",                                     CheckerArray114, 0, false },
  { "osx.cocoa.NSAutoreleasePool",                                    CheckerArray115, 0, false },
  { "osx.cocoa.NSError",                                              CheckerArray116, 0, false },
  { "osx.cocoa.NilArg",                                               CheckerArray117, 0, false },
  { "osx.cocoa.NonNilReturnValue",                                    CheckerArray118, 0, false },
  { "osx.cocoa.ObjCGenerics",                                         CheckerArray119, 0, false },
  { "osx.cocoa.RetainCount",                                          CheckerArray120, 0, false },
  { "osx.cocoa.SelfInit",                                             CheckerArray121, 0, false },
  { "osx.cocoa.SuperDealloc",                                         CheckerArray122, 0, false },
  { "osx.cocoa.UnusedIvars",                                          CheckerArray123, 0, false },
  { "osx.cocoa.VariadicMethodTypes",                                  CheckerArray124, 0, false },
  { "osx.coreFoundation",                                             0, SubPackageArray125, false },
  { "osx.coreFoundation.CFError",                                     CheckerArray126, 0, false },
  { "osx.coreFoundation.CFNumber",                                    CheckerArray127, 0, false },
  { "osx.coreFoundation.CFRetainRelease",                             CheckerArray128, 0, false },
  { "osx.coreFoundation.containers",                                  0, SubPackageArray129, false },
  { "osx.coreFoundation.containers.OutOfBounds",                      CheckerArray130, 0, false },
  { "osx.coreFoundation.containers.PointerSizedValues",               CheckerArray131, 0, false },
  { "security",                                                       0, SubPackageArray132, false },
  { "security.FloatLoopCounter",                                      CheckerArray133, 0, false },
  { "security.insecureAPI",                                           0, SubPackageArray134, false },
  { "security.insecureAPI.UncheckedReturn",                           CheckerArray135, 0, false },
  { "security.insecureAPI.getpw",                                     CheckerArray136, 0, false },
  { "security.insecureAPI.gets",                                      CheckerArray137, 0, false },
  { "security.insecureAPI.mkstemp",                                   CheckerArray138, 0, false },
  { "security.insecureAPI.mktemp",                                    CheckerArray139, 0, false },
  { "security.insecureAPI.rand",                                      CheckerArray140, 0, false },
  { "security.insecureAPI.strcpy",                                    CheckerArray141, 0, false },
  { "security.insecureAPI.vfork",                                     CheckerArray142, 0, false },
  { "unix",                                                           0, SubPackageArray143, false },
  { "unix.API",                                                       CheckerArray144, 0, false },
  { "unix.Malloc",                                                    CheckerArray145, 0, false },
  { "unix.MallocSizeof",                                              CheckerArray146, 0, false },
  { "unix.MismatchedDeallocator",                                     CheckerArray147, 0, false },
  { "unix.Vfork",                                                     CheckerArray148, 0, false },
  { "unix.cstring",                                                   0, SubPackageArray149, true },
  { "unix.cstring.BadSizeArg",                                        CheckerArray150, 0, false },
  { "unix.cstring.NullArg",                                           CheckerArray151, 0, false },
  { "valist",                                                         0, 0, false },
#endif // GET_CHECKNAME_TABLE

