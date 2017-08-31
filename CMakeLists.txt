cmake_minimum_required(VERSION 3.7)
project(ComplexLibrary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ComplexNumber.cpp ComplexNumber.h)
add_library(ComplexLibrary SHARED ${SOURCE_FILES})