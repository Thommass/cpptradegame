cmake_minimum_required(VERSION 3.21)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project(cpptradegame)
find_package(unofficial-sqlite3 CONFIG REQUIRED)


set(CMAKE_CXX_STANDARD 14)

add_executable(cpptradegame main.cpp)

target_link_libraries(cpptradegame PRIVATE unofficial::sqlite3::sqlite3)