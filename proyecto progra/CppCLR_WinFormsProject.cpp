#include "pch.h"  // Incluye el archivo de cabecera precompilado

using namespace System;  // Usa el espacio de nombres System

// Comentado el punto de entrada alternativo
// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"  // Incluye el archivo de cabecera del formulario principal

using namespace System::Windows::Forms;  // Usa el espacio de nombres System::Windows::Forms

[STAThread]  // Indica que el modelo de subprocesamiento para el método main es STA (Single Thread Apartment)
int main()  // Define el punto de entrada principal de la aplicación
{
	Application::EnableVisualStyles();  // Habilita estilos visuales para la aplicación
	Application::SetCompatibleTextRenderingDefault(false);  // Establece la compatibilidad de representación de texto predeterminada
	Application::Run(gcnew CppCLRWinFormsProject::Form1());  // Inicia la aplicación y muestra el formulario principal
	return 0;  // Devuelve 0 al sistema operativo al finalizar
}
