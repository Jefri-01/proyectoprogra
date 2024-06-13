#pragma once

#include "Pasajero.h"
#include "ConexionBD.h"

using namespace System::Windows::Forms;

ref class PasajeroCRUD
{
public:
	static void insertarPasajero(Pasajero^ pasajero, ConexionBD^ conexionBD) {
        try
        {
            MySqlConnection^ conexion = conexionBD->conectar();

            // Preparar la declaración SQL para insertar los datos
            String^ query = "INSERT INTO pasajeros(nombre, apellido, edad, identificacion) VALUES (@nombre, @apellido, @edad, @identificacion)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conexion);

            cmd->Parameters->AddWithValue("@nombre", pasajero->Nombre);
            cmd->Parameters->AddWithValue("@apellido", pasajero->Apellido);
            cmd->Parameters->AddWithValue("@edad", pasajero->Edad);
            cmd->Parameters->AddWithValue("@identificacion", pasajero->Identificacion);
            cmd->ExecuteNonQuery();

            conexionBD->desconectar();

            MessageBox::Show("Datos insertados correctamente", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ e)
        {
            MessageBox::Show("Error en la operacion: " + e->Message);

        }
    }
};


