cmake_minimum_required(VERSION 3.6)
project(data_structure C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES string/first_non_repeated_character.cpp)

add_executable(data_structure ${SOURCE_FILES} )