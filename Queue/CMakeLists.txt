cmake_minimum_required(VERSION 3.14)
project(Queue)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(../Linear_Table/Linked_Implementation)
include_directories(Array_Implementation)
include_directories(Linked_Implementation)

add_definitions("-Wall -g")

add_executable(Queue
        Array_Implementation/Array_Queue.cpp
#        Array_Implementation/Array_Queue.h
#        ../Linear_Table/Linked_Implementation/chained_list.h
        ../Linear_Table/Linked_Implementation/chained_list.cpp
        Linked_Implementation/Linked_Queue.cpp
#        Linked_Implementation/Linked_Queue.h
        main.cpp)
