cmake_minimum_required(VERSION 3.25)

project(Simulador)#solo el nombre es obligatorio

set(DirectorioOutPut "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}/${CMAKE_BUILD_TYPE}") #variable para facilitar los siguientes paths
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${DirectorioOutPut}") 

if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(BUILD_SHARED_LIBS TRUE)
endif()


file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(Simulador ${SOURCES})

#agrego las "librerias" que voy creando
add_subdirectory("libs/visualizador")
target_link_libraries(Simulador visu)

set(CMAKE_COLOR_DIAGNOSTICS ON)
