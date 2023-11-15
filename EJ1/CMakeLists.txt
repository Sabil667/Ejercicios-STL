cmake_minimum_required(VERSION 3.17)
project(EJ1)

#Agrega los archivos fuente al proyecto
set(SOURCE_FILES
        funciones.cpp
        EJ1.cpp
        EJ1.cpp)

#Indica al compilador que debe incluir estos archivos
add_executable(EJ1 ${SOURCE_FILES})