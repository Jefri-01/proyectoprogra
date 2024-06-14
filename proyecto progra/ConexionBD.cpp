#include "pch.h"
#include "ConexionBD.h"

using namespace System::Windows::Forms;

// Constructor de la clase ConexionBD
ConexionBD::ConexionBD() {
    // Cadena de conexión a la base de datos MySQL
    this->stringConect = "Server=localhost;port=3306;database=aeropuerto_maya;uid=jefri;password=moralesjefri01";
    // Creación de una nueva conexión MySQL con la cadena de conexión proporcionada
    this->conect = gcnew MySqlConnection(this->stringConect);
}

// Método para conectar a la base de datos
MySqlConnection^ ConexionBD::conectar() {
    try
    {
        // Intenta abrir la conexión a la base de datos
        this->conect->Open();
        // Si la conexión se abre correctamente, se devuelve la conexión
        return this->conect;
    }
    catch (Exception^ e)
    {
        // Si ocurre una excepción, muestra un mensaje de error
        MessageBox::Show("Error conectando: " + e->Message);
    }
}

// Método para desconectar de la base de datos
void ConexionBD::desconectar() {
    try
    {
        // Intenta cerrar la conexión a la base de datos
        this->conect->Close();
    }
    catch (Exception^ e)
    {
        // Si ocurre una excepción, muestra un mensaje de error
        MessageBox::Show("Error cerrando la conexión");
    }
}
