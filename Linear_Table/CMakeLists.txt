cmake_minimum_required(VERSION 3.14)
project(Linear_Table)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Array_Implementation)
include_directories(Linked_Implementation)

add_executable(Linear_Table
        Array_Implementation/LinearList.cpp
        Array_Implementation/LinearList.h
        Linked_Implementation/chained_list.cpp
        Linked_Implementation/chained_list.h
        main.cpp)
