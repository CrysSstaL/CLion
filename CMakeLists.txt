cmake_minimum_required(VERSION 3.20)
project(papka)

set(CMAKE_CXX_STANDARD 14)

add_executable(papka work_file.cpp function_for_work.hpp function_for_work.cpp)
