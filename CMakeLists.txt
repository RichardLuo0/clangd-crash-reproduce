cmake_minimum_required(VERSION 3.28)
project(test CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall)

add_library(test)
file(GLOB_RECURSE SRC_FILES "src/*.cpp")
target_sources(test 
  PUBLIC FILE_SET CXX_MODULES FILES ${SRC_FILES}
)
