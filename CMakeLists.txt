cmake_minimum_required(VERSION 3.24)
set(VCPKG_TARGET_TRIPLET "x64-mingw-static" CACHE STRING "" FORCE)
set(PROJECT_NAME vcpkg_jsoncpp)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp)
find_package(jsoncpp CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE jsoncpp_object jsoncpp_static JsonCpp::JsonCpp)