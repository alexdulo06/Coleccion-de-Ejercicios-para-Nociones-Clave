cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_Ejercicios_para_Nociones_Clave)

set(CMAKE_CXX_STANDARD 14)

# Incluir el directorio de encabezados
include_directories(.)

# Agregar el ejecutable principal
add_executable(Coleccion_de_Ejercicios_para_Nociones_Clave
        main.cpp
        main.h
        persona.cpp
        estudiante.cpp
        funciones.cpp
)

# Crear biblioteca estática (libmatematicas_static.a)
add_library(matematicas_static STATIC matematicas.cpp)
target_link_libraries(Coleccion_de_Ejercicios_para_Nociones_Clave matematicas_static)

# Crear biblioteca dinámica (libmatematicas_shared.so en Linux o matematicas_shared.dll en Windows)
add_library(matematicas_shared SHARED matematicas.cpp)
target_link_libraries(Coleccion_de_Ejercicios_para_Nociones_Clave matematicas_shared)

