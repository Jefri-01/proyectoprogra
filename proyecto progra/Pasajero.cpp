#include "pch.h"
#include "Pasajero.h"

// Constructor de la clase Pasajero
Pasajero::Pasajero(String^ nombre, String^ apellido, int edad, String^ identificacion) {
    // Inicializaci�n de las propiedades de la clase con los par�metros proporcionados
    this->Nombre = nombre;
    this->Apellido = apellido;
    this->Edad = edad;
    this->Identificacion = identificacion;
}
