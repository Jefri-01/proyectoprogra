#include "pch.h"
#include "Pasajero.h"
Pasajero::Pasajero(String^ nombre, String^ apellido, int edad, String^ identificacion) {
	this->Nombre = nombre;
	this->Apellido = apellido;
	this->Edad = edad;
	this->Identificacion = identificacion;
};