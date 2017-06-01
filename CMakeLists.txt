cmake_minimum_required(VERSION 3.7)
project(double_linked_list_circular)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp double_linked_list_circular.cpp double_linked_list_circular.h navigation.cpp navigation.h)
add_executable(double_linked_list_circular ${SOURCE_FILES} double_linked_list_circular.cpp double_linked_list_circular.h navigation.cpp navigation.h)