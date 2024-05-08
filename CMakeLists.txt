cmake_minimum_required(VERSION 3.25)

project(main)#solo el nombre es obligatorio

add_executable(main src/main.cpp src/funcionesAux.cpp src/particle.cpp src/sistema.cpp src/misVectores.cpp)

set(CMAKE_COLOR_DIAGNOSTICS ON)
