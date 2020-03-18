cmake_minimum_required(VERSION 3.14)
project(Stack)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Array_Implementation)
include_directories(Linked_Implementation)
include_directories(../Linear_Table/Linked_Implementation)

add_executable(Stack
        Array_Implementation/Array_Stack.h
        Array_Implementation/Array_Stack.cpp
        ../Linear_Table/Linked_Implementation/chained_list.h
        ../Linear_Table/Linked_Implementation/chained_list.cpp
        Linked_Implementation/Linked_Stack.cpp
        Linked_Implementation/Linked_Stack.h
        main.cpp)
