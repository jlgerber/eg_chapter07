cmake_minimum_required(VERSION 3.6)
project(chapter07)

set(CMAKE_CXX_STANDARD 11)
# add source files for main
set(SOURCE_FILES  src/Person.cpp src/Person.hpp)
# add include directories
include_directories(src)

add_library(personlib ${SOURCE_FILES})

add_executable(chapter07 main.cpp)
target_link_libraries(chapter07 personlib)

include_directories(include)

# add the test directory
add_subdirectory(test)
