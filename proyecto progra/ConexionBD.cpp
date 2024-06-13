#include "pch.h"
#include "ConexionBD.h"

using namespace System::Windows::Forms;

ConexionBD::ConexionBD() {
	this->stringConect = "Server=localhost;port=3306;database=aeropuerto_maya;uid=jefri;password=moralesjefri01";
	this->conect = gcnew MySqlConnection(this->stringConect);
}

MySqlConnection^ ConexionBD::conectar() {

	try
	{
		this->conect->Open();

		return this->conect;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error conectando: " + e->Message);
	}


}
void ConexionBD::desconectar() {

	try
	{
		this->conect->Close();

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error cerrando la conexion");
	}
}
