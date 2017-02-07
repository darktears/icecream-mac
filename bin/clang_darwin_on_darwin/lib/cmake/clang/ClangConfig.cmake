# This file allows users to call find_package(Clang) and pick up our targets.

find_package(LLVM REQUIRED CONFIG)



set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangARCMigrate;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangTooling;clangIndex;clangStaticAnalyzerCore;clangStaticAnalyzerCheckers;clangStaticAnalyzerFrontend;clangFormat;clang;clang-format;libclang")
set(CLANG_CMAKE_DIR "/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/cmake/clang")

# Provide all our library targets to users.
include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/cmake/clang/ClangTargets.cmake")
