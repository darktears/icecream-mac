# Install script for directory: /Users/alexisme/Development/chromium/src/third_party/llvm/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/IR/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/IRReader/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/CodeGen/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Bitcode/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Transforms/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Linker/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Analysis/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/LTO/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/MC/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Object/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/ObjectYAML/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Option/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/DebugInfo/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/ExecutionEngine/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Target/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/AsmParser/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/LineEditor/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/ProfileData/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Fuzzer/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Passes/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/LibDriver/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/XRay/cmake_install.cmake")

endif()

