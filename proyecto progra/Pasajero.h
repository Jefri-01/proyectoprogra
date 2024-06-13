#pragma once

using namespace System;

ref class Pasajero
{
public:
	Pasajero(String^ nombre, String^ apellido, int edad, String^ identificacion);

	property String^ Nombre {
		String^ get() {
			return nombre;
		}
		void set(String^ valor) {
			nombre = valor;
		}
	}

	property String^ Apellido {
		String^ get() {
			return apellido;
		}
		void set(String^ valor) {
			apellido = valor;
		}
	}

	property int Edad {
		int get() {
			return edad;
		}
		void set(int valor) {
			edad = valor;
		}
	}

	property String^ Identificacion {
		String^ get() {
			return identificacion;
		}
		void set(String^ valor) {
			identificacion = valor;
		}
	}

private:
	property String^ nombre;
	property String^ apellido;
	property int edad;
	property String^ identificacion;
};

