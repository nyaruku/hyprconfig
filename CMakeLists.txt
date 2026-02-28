cmake_minimum_required(VERSION 4.0)
project(hyprconfig)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BASE_INCLUDE_PATH "${CMAKE_SOURCE_DIR}/src/includes")

include_directories(${BASE_INCLUDE_PATH} ${BUILD_INCLUDE_PATH})

# Project dir
add_subdirectory(src)

add_executable(${PROJECT_NAME} "./src/main.cpp")