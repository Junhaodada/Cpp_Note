cmake_minimum_required(VERSION 3.5.0)
project(test_demo VERSION 0.1.0 LANGUAGES C CXX)

include_directories(./include DIR_INC)
set(CMAKE_CXX_STANDARD 17)
link_directories(./lib)
add_executable(test_demo main.cpp)
target_link_libraries(test_demo libgtest.a libgtest_main.a libgmock.a libgmock_main.a)

