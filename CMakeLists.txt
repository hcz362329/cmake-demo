cmake_minimum_required(VERSION 2.8)
project(demo)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/Modules")

find_package(PrintUltility REQUIRED)
find_package(MathUltility REQUIRED)

include_directories("${PrintUltility_INCLUDE_DIRS}")
include_directories("${MathUltility_INCLUDE_DIRS}")

aux_source_directory(. MAIN_SOURCES)

add_subdirectory(add-lib)
add_subdirectory(print-lib)


add_executable(demo ${MAIN_SOURCES})

target_link_libraries(demo 
	PrintUltility 
	MathUltility)
