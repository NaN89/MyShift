cmake_minimum_required(VERSION 3.6)
project(MyShift)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp orario.cpp orario.h turno.cpp turno.h)
add_executable(MyShift ${SOURCE_FILES})