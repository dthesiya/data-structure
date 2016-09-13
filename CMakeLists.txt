cmake_minimum_required(VERSION 3.6)
project(data_structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES stack/balanced_parentheses.cpp "linked_list/cycle detection.cpp")

add_executable(data_structure ${SOURCE_FILES})