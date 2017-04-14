# This file allows users to call find_package(Clang) and pick up our targets.



find_package(LLVM REQUIRED CONFIG
             HINTS "/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/cmake/llvm")

set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangARCMigrate;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangToolingRefactor;clangTooling;clangIndex;clangStaticAnalyzerCore;clangStaticAnalyzerCheckers;clangStaticAnalyzerFrontend;clangFormat;clang;clang-format;clang-import-test;libclang")
set(CLANG_CMAKE_DIR "/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/cmake/clang")
set(CLANG_INCLUDE_DIRS "/Users/alexisme/Development/chromium/src/third_party/llvm/tools/clang/include;/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/tools/clang/include")

# Provide all our library targets to users.
include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/cmake/clang/ClangTargets.cmake")
