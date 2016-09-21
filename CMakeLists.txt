cmake_minimum_required(VERSION 3.6)
project(Data_Structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES queue/queue_using_array.cpp)

add_executable(Data_Structure ${SOURCE_FILES})