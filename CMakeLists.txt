cmake_minimum_required(VERSION 3.24)
project(28_11_2023)

set(CMAKE_CXX_STANDARD 17)

add_executable(28_11_2023 binaries/main.cpp)

enable_testing()

add_subdirectory(binaries)
add_subdirectory(src)
add_subdirectory(tests)
