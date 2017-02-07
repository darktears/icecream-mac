# Install script for directory: /Users/alexisme/Development/chromium/src/third_party/llvm/lib/Target/Sparc

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "LLVMSparcCodeGen")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/libLLVMSparcCodeGen.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVMSparcCodeGen.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVMSparcCodeGen.a")
    execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVMSparcCodeGen.a")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Target/Sparc/TargetInfo/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Target/Sparc/MCTargetDesc/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Target/Sparc/InstPrinter/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Target/Sparc/AsmParser/cmake_install.cmake")
  include("/Users/alexisme/Development/chromium/src/third_party/llvm-build/Release+Asserts/lib/Target/Sparc/Disassembler/cmake_install.cmake")

endif()

