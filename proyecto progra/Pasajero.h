#pragma once  // Directiva para asegurar que el archivo solo se incluya una vez durante la compilación

using namespace System;  // Usa el espacio de nombres System

// Declaración de la clase Pasajero
ref class Pasajero
{
public:
    // Constructor de la clase Pasajero
    Pasajero(String^ nombre, String^ apellido, int edad, String^ identificacion);

    // Propiedad para acceder y modificar el nombre del pasajero
    property String^ Nombre {
        String^ get() {
            return nombre;  // Retorna el valor de la variable privada nombre
        }
        void set(String^ valor) {
            nombre = valor;  // Asigna el valor a la variable privada nombre
        }
    }

    // Propiedad para acceder y modificar el apellido del pasajero
    property String^ Apellido {
        String^ get() {
            return apellido;  // Retorna el valor de la variable privada apellido
        }
        void set(String^ valor) {
            apellido = valor;  // Asigna el valor a la variable privada apellido
        }
    }

    // Propiedad para acceder y modificar la edad del pasajero
    property int Edad {
        int get() {
            return edad;  // Retorna el valor de la variable privada edad
        }
        void set(int valor) {
            edad = valor;  // Asigna el valor a la variable privada edad
        }
    }

    // Propiedad para acceder y modificar la identificación del pasajero
    property String^ Identificacion {
        String^ get() {
            return identificacion;  // Retorna el valor de la variable privada identificacion
        }
        void set(String^ valor) {
            identificacion = valor;  // Asigna el valor a la variable privada identificacion
        }
    }

private:
    // Variables privadas para almacenar los datos del pasajero
    property String^ nombre;
    property String^ apellido;
    property int edad;
    property String^ identificacion;
};

