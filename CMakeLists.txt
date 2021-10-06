cmake_minimum_required(VERSION 3.1)

project(QLearning)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS}")

add_executable(main src/main.cpp
		    src/algorithms.cpp
                    include/algorithms.hpp
                   )

target_include_directories(main PRIVATE include)


set_property(TARGET main PROPERTY CXX_STANDARD 14)
