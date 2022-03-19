cmake_minimum_required(VERSION 3.21)
project(Toreador)

set(CMAKE_CXX_STANDARD 17)

include_directories(libs/glad/include)
include_directories(libs/glfw/include)
include_directories(include)

add_subdirectory(libs/glfw)
add_subdirectory(libs/glad)

add_library(Toreador SHARED ) #cpp files only
target_link_libraries(Toreador glfw)
target_link_libraries(Toreador glad)