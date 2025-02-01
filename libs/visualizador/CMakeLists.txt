cmake_minimum_required(VERSION 3.25)

project(visu)#solo el nombre es obligatorio

file(GLOB_RECURSE SOURCES "src/*.cpp")

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)
add_definitions(-DSFML_STATIC)


add_library(visu STATIC ${SOURCES})

target_include_directories(visu PUBLIC src)

target_link_libraries(visu PRIVATE sfml-graphics sfml-window sfml-system)
