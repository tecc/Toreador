cmake_minimum_required(VERSION 3.21)
project(Toreador)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/glfw)
add_subdirectory(libs/glad2/cmake)

glad_add_library(glad2 STATIC API gl:core=4.0)

add_library(Toreador SHARED
    src/Toreador/Util/System.cpp src/Toreador/Core/Application/Application.cpp
    ) #cpp files only
target_include_directories(Toreador PUBLIC include)
target_link_libraries(Toreador glfw glad2)