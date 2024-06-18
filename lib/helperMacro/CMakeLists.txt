cmake_minimum_required(VERSION 3.15)
project(helperMacro)

add_subdirectory(include)

option(BUILD_EXAMPLES "Build examples switch" ON)

if (BUILD_EXAMPLES)
    message(STATUS "macroHelper: Building exmaples")
    add_subdirectory(example)
endif()
