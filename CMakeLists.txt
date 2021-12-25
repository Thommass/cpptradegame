cmake_minimum_required(VERSION 3.21)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project(cpptradegame)
find_package(unofficial-sqlite3 CONFIG REQUIRED)


set(CMAKE_CXX_STANDARD 14)

add_executable(cpptradegame src/main.cpp src/database/models/Port.cpp src/database/models/Port.hpp src/database/models/Ship.cpp src/database/models/Ship.hpp src/database/models/ShipType.cpp src/database/models/ShipType.hpp src/database/models/Special.cpp src/database/models/Special.hpp src/database/models/Goods.cpp src/database/models/Goods.hpp src/database/models/Distance.cpp src/database/models/Distance.hpp src/database/models/PortGoods.cpp src/database/models/PortGoods.hpp)

target_link_libraries(cpptradegame PRIVATE unofficial::sqlite3::sqlite3)