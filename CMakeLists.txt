cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

project(main)

include_directories("inc")

file(GLOB SOURCES "src/*.cpp")
#file(GLOB SOURCES "src/LinkedBagClient340.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})
#add_executable(${PROJECT_NAME} src / LinkedBagClient340.cpp)