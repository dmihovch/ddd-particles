cmake_minimum_required(VERSION 3.16)
project(ddd_phys LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(RAYLIB REQUIRED raylib)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    src/*.cpp
)

add_executable(ddd_phys ${SRC_FILES})

target_include_directories(ddd_phys PRIVATE
    ${RAYLIB_INCLUDE_DIRS}
)

target_link_libraries(ddd_phys PRIVATE
    ${RAYLIB_LIBRARIES}
)
