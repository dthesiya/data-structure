cmake_minimum_required(VERSION 3.6)
project(data_structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    linked_list/cycle_detection.cpp
    linked_list/delete_duplicate_nodes_in_sorted_linkedlist.cpp
    linked_list/delete_nth_node.c
    linked_list/doubly_linked_list.c
    linked_list/find_merge_point_in_linked_list.cpp
    linked_list/get_nth_node_value_from_tail.cpp
    linked_list/Insert_at_nth_node.c
    linked_list/Insert_node_into_sorted_doubly_linked_list.cpp
    linked_list/merge_two_sorted_list.cpp
    linked_list/recursive_print_linked_list.c
    linked_list/recursive_reverse_linked_list.c
    linked_list/reverse.c
    linked_list/reverse_doubly_linked_list.cpp
    queue/queue_using_array.cpp
    queue/queue_using_linked_list.c
    stack/balanced_parentheses.cpp
    stack/get_min_from_stack.cpp
    stack/implement_two_stacks_using_array.cpp
    stack/infix_to_postfix.cpp
    stack/postfix_evaluation.cpp
    stack/reverse_string_using_linkedlist_stack.cpp
    stack/reverse_string_using_stack.cpp
    stack/stack_using_array.c
    stack/stack_using_linkedlist.c
    stack/stack_using_two_queue.cpp
    stack/virtual_function.cpp
        Binary Search Tree/binary_search_tree.cpp
    CMakeLists.txt
    README.md)

add_executable(data_structure ${SOURCE_FILES})