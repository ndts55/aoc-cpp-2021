cmake_minimum_required(VERSION 3.24)
project(aoc_cpp_2021)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_executable(aoc_cpp_2021 main.cpp)

# Day 01
add_executable(day01_test day01_test.cpp inputs/input01.txt inputs/small_input01.txt)
target_link_libraries(day01_test GTest::gtest_main)
target_compile_definitions(day01_test PUBLIC -DPROJECT_DIRECTORY="${CMAKE_SOURCE_DIR}")


include(GoogleTest)
gtest_discover_tests(day01_test)
