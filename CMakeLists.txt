cmake_minimum_required(VERSION 3.6)
project(data_structure C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES matrix/find_negative_no_in_matrix.cpp)

add_executable(data_structure ${SOURCE_FILES} )