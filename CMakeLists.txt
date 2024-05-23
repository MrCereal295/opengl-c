
cmake_minimum_required(VERSION 3.23.0)
project(opengl_test VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(glfw3 CONFIG REQUIRED)


add_executable(opengl_test opengl_test.c)

target_link_libraries(opengl_test PUBLIC glfw3)