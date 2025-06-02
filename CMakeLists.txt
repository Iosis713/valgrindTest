cmake_minimum_required(VERSION 3.26)

project(ValgrindMemoryLeak)

set(FLAGS    -Werror
             -Wall
             -Wextra
             -Wpedantic
             -O0
             -g
             -DDEBUG
    )

set(CMAKE_CXX_COMPILER clang++-18)
add_executable(${PROJECT_NAME} main.cpp)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20 CXX_STANDARD_REQUIRED ON)
