cmake_minimum_required(VERSION 3.13)
project(projectmake)

set(CMAKE_CXX_STANDARD 11)

include_directories(
        .
)

set(
        SOURCE
        funcA.h
        funcA.cpp
        foo/foo.h
        foo/foo.cpp
)

add_executable(projectmake main.cpp ${SOURCE})

add_subdirectory(googletest-master)
add_subdirectory(test)

