cmake_minimum_required(VERSION 3.8)

project(Algorythms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(APP_NAME main.exe)
set(TEST_NAME test.exe)

add_executable(${TEST_NAME} test.cpp) 
 
add_test(NAME Task01Tests COMMAND ${TEST_NAME}) 