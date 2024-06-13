#pragma once

using namespace MySql::Data::MySqlClient;
using namespace System;

ref class ConexionBD
{
public:
	ConexionBD();
	MySqlConnection^ conectar();
	void desconectar();

private:
	String^ stringConect;
	MySqlConnection^ conect;
};

