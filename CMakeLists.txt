cmake_minimum_required(VERSION 3.6)
project(data_structure C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES array/count_of_smaller_no_after_self.cpp)

add_executable(data_structure ${SOURCE_FILES} )