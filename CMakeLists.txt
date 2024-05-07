cmake_minimum_required(VERSION 3.25)

project(main)#solo el nombre es obligatorio

add_executable(main main.cpp funcionesAux.cpp particle.cpp sistema.cpp misVectores.cpp)

set(CMAKE_COLOR_DIAGNOSTICS ON)
