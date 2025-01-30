cmake_minimum_required(VERSION 3.6.0)
project(consola)

if(MSVC)
    add_compile_options(/std:c++latest)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(BUILD_SHARED_LIBS TRUE)
endif()


add_library(consola STATIC src/main.cpp)
