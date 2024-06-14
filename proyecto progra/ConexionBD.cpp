#include "pch.h"
#include "ConexionBD.h"

using namespace System::Windows::Forms;

// Constructor de la clase ConexionBD
ConexionBD::ConexionBD() {
    // Cadena de conexi�n a la base de datos MySQL
    this->stringConect = "Server=localhost;port=3306;database=aeropuerto_maya;uid=jefri;password=moralesjefri01";
    // Creaci�n de una nueva conexi�n MySQL con la cadena de conexi�n proporcionada
    this->conect = gcnew MySqlConnection(this->stringConect);
}

// M�todo para conectar a la base de datos
MySqlConnection^ ConexionBD::conectar() {
    try
    {
        // Intenta abrir la conexi�n a la base de datos
        this->conect->Open();
        // Si la conexi�n se abre correctamente, se devuelve la conexi�n
        return this->conect;
    }
    catch (Exception^ e)
    {
        // Si ocurre una excepci�n, muestra un mensaje de error
        MessageBox::Show("Error conectando: " + e->Message);
    }
}

// M�todo para desconectar de la base de datos
void ConexionBD::desconectar() {
    try
    {
        // Intenta cerrar la conexi�n a la base de datos
        this->conect->Close();
    }
    catch (Exception^ e)
    {
        // Si ocurre una excepci�n, muestra un mensaje de error
        MessageBox::Show("Error cerrando la conexi�n");
    }
}
