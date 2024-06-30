cmake_minimum_required(VERSION 3.25)
project(vrts
        VERSION 0.1.0
        LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_FLAGS "-std=c2x -Wall -Werror -Wextra -Wpedantic -nostdinc")

include_directories(include)

add_executable(kernel
        src/kernel/main.c
        src/kernel/process.c
        src/kernel/thread.c)
