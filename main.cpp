#include <iostream>
#include "funciones.h"
#include "Persona.h"
#include "Estudiante.h"

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int g = 20; // Variable global

int main() {
    std::cout << "Hola Mundo" << std::endl;

    // Uso de la variable global
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;

    // Crear objetos de la clase Persona
    Persona persona;
    persona.setNombre("Juan");
    persona.setEdad(30);
    persona.setGenero("Masculino");

    // Crear objeto de la clase Estudiante y mostrar detalles
    Estudiante estudiante;
    estudiante.setNombre("Ana");
    estudiante.setEdad(20);
    estudiante.setGenero("Femenino");
    estudiante.setGrado("Segundo Año");
    estudiante.mostrarDetalles();

    // Uso de macros
    double radio = 5.0;
    std::cout << "Área del círculo con radio " << radio << " es: " << AREA_CIRCULO(radio) << std::endl;

    return 0;
}
