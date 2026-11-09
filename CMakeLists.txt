cmake_minimum_required(VERSION 3.10)
project(Mini_Vector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Mini_Vector main.cpp Vector.hpp)
target_compile_options(Mini_Vector PRIVATE -Wall -Wextra -Wpedantic)