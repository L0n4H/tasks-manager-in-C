cmake_minimum_required(VERSION 3.10)
project(task_manager C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(task_manager
    src/main.c
    src/tasks.c
)