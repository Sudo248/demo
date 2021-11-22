
cmake_minimum_required(VERSION 3.20)
project(demo)

set(CMAKE_CXX_STANDARD 20)
find_package(SFML 2.5 COMPONENTS system window graphics)
add_executable(demo main.cpp Animation.cpp Animation.h)
target_link_libraries(demo sfml-system sfml-window sfml-graphics sfml-audio)