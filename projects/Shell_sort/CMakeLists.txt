cmake_minimum_required(Version 3.26)

project(Shell_sort)

set (CMAKE_CXX_STANDARD 17)
add_executable(Shell_sort main.cpp
	shell_sort.cpp
	shell_sort.hpp)
