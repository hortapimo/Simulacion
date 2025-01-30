cmake_minimum_required(VERSION 3.25)

project(visu)#solo el nombre es obligatorio

#file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(visu STATIC src/Visualizador.cpp)

