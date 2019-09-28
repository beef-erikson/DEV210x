cmake_minimum_required(VERSION 3.14)
project(DEV210x)

set(CMAKE_CXX_STANDARD 14)

add_executable(DEV210x VariablesAndConstants/Variables.cpp VariablesAndConstants/Constants.cpp VariablesAndConstants/TypeConversion.cpp ComplexDataTypes/Arrays.cpp ComplexDataTypes/Strings.cpp ComplexDataTypes/Structures.cpp ComplexDataTypes/Union.cpp ComplexDataTypes/Enumerations.cpp)