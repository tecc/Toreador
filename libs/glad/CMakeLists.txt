project(glad)
include_directories(include)
add_library(glad src/gl.c include/glad/gl.h include/KHR/khrplatform.h)