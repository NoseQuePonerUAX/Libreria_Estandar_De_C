cmake_minimum_required(VERSION 3.26)
project(Libreria_Estandar_De_C)

set(CMAKE_CXX_STANDARD 14)

add_executable(Main main.c
        archivos.c)
add_executable(Cadenas cadenas.c
        archivos.c)
add_executable(Archivos archivos.c)
