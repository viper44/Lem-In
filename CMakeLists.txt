cmake_minimum_required(VERSION 3.9)
project(Lem_in C)

set(CMAKE_C_STANDARD 99)

link_directories(${PROJECT_SOURCE_DIR}/printf)
link_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/printf)
link_directories(${PROJECT_SOURCE_DIR}/libft)
include_directories(${PROJECT_SOURCE_DIR}/libft)

add_executable(Lem_in main.c)

target_link_libraries(Lem_in ${PROJECT_SOURCE_DIR}/libft/libft.a ${PROJECT_SOURCE_DIR}/printf/libftprintf.a)