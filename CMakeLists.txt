cmake_minimum_required(VERSION 3.6)
project(data_structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES binary_search_tree/binary_search_tree.cpp binary_search_tree/find_min_max_in_bst.cpp)

add_executable(data_structure ${SOURCE_FILES} )