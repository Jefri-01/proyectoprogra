#pragma once

#include "Pasajero.h"
#include "PasajeroCRUD.h"
#include "boletos.h"
#include "Vuelos.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            conexionBD = gcnew ConexionBD();
        }
    private:
        // Declaración de los componentes del formulario
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::Button^ button4;
        System::Windows::Forms::Label^ label7;

    public:
    private:
        // Objeto para la conexión a la base de datos
        ConexionBD^ conexionBD;

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Declaración de más componentes del formulario
        System::Windows::Forms::TextBox^ textBox5;
        System::Windows::Forms::TextBox^ textBox6;
        System::Windows::Forms::TextBox^ textBox8;
        System::Windows::Forms::TextBox^ textBoxEdad;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ buttonBorrar;
        System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
        // Método para inicializar los componentes del formulario
        void InitializeComponent(void)
        {
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBoxEdad = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(329, 75);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(115, 20);
            this->textBox5->TabIndex = 7;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(329, 116);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(115, 20);
            this->textBox6->TabIndex = 8;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(329, 211);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(115, 20);
            this->textBox8->TabIndex = 10;
            // 
            // textBoxEdad
            // 
            this->textBoxEdad->Location = System::Drawing::Point(329, 163);
            this->textBoxEdad->Name = L"textBoxEdad";
            this->textBoxEdad->Size = System::Drawing::Size(115, 20);
            this->textBoxEdad->TabIndex = 9;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(97, 76);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(69, 19);
            this->label1->TabIndex = 11;
            this->label1->Text = L"NOMBRE";
            this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(97, 213);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(138, 16);
            this->label2->TabIndex = 12;
            this->label2->Text = L"NO. IDENTIFICACION";
            this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(97, 167);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(43, 16);
            this->label3->TabIndex = 13;
            this->label3->Text = L"EDAD";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(97, 120);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(69, 16);
            this->label4->TabIndex = 14;
            this->label4->Text = L"APELLIDO";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Blue;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(171, 9);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 16);
            this->label5->TabIndex = 15;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Blue;
            this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(177, 9);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(151, 27);
            this->label6->TabIndex = 19;
            this->label6->Text = L"PASAJEROS";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Cyan;
            this->button1->Location = System::Drawing::Point(142, 294);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 21;
            this->button1->Text = L"CREAR";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->BackColor = System::Drawing::Color::Cyan;
            this->buttonBorrar->Location = System::Drawing::Point(253, 294);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(75, 23);
            this->buttonBorrar->TabIndex = 23;
            this->buttonBorrar->Text = L"BORRAR";
            this->buttonBorrar->UseVisualStyleBackColor = false;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &Form1::buttonBorrar_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Red;
            this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(418, 237);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(109, 33);
            this->button3->TabIndex = 24;
            this->button3->Text = L"Boletos";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::btn_abrir_Click_1);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Red;
            this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(418, 294);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(98, 37);
            this->button4->TabIndex = 25;
            this->button4->Text = L"Vuelos";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::btn_abrir_Click_2);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(122, 354);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(279, 32);
            this->label7->TabIndex = 26;
            this->label7->Text = L"AEROLINEA_MAYA";
            this->label7->Click += gcnew System::EventHandler(this, &Form1::DORMIR_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->ClientSize = System::Drawing::Size(540, 419);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBoxEdad);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"Form1";
            this->Text = L"AEROLINEA_MAYA";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private:
        // Evento de carga del formulario
        System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
        }
        System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        }
        System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
        }
        // Evento click del botón CREAR
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                // Obtén los valores de los TextBoxes y el TextBox de edad
                String^ nombre = textBox5->Text;
                String^ apellido = textBox6->Text;
                String^ edadStr = textBoxEdad->Text;
                String^ identificacion = textBox8->Text;
                int edad = Convert::ToInt32(edadStr);

                // Crea un objeto Pasajero con los valores obtenidos
                Pasajero^ pasajero = gcnew Pasajero(nombre, apellido, edad, identificacion);

                // Inserta el pasajero en la base de datos
                PasajeroCRUD::insertarPasajero(pasajero, conexionBD);
            }
            catch (Exception^ ex) {
                // Muestra un mensaje de error si ocurre una excepción
                MessageBox::Show("Error al insertar datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        // Evento click del botón BORRAR
        System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                // Obtén el valor de la identificación
                String^ identificacion = textBox8->Text;

                // Conectar a la base de datos
                String^ connStr = "Server=127.0.0.1;Database=aeropuerto_maya;Uid=jefri;Pwd=moralesjefri01;";
                MySqlConnection^ conn = gcnew MySqlConnection(connStr);
                conn->Open();

                // Preparar la declaración SQL para borrar los datos
                String^ query = "DELETE FROM pasajeros WHERE identificacion=@identificacion";
                MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
                cmd->Parameters->AddWithValue("@identificacion", identificacion);
                cmd->ExecuteNonQuery();

                conn->Close();

                // Muestra un mensaje indicando que los datos se eliminaron correctamente
                MessageBox::Show("Datos eliminados correctamente", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            catch (Exception^ ex) {
                // Muestra un mensaje de error si ocurre una excepción
                MessageBox::Show("Error al eliminar datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        }

        // Evento click del botón para abrir el formulario Boletos
    private: System::Void btn_abrir_Click_1(System::Object^ sender, System::EventArgs^ e) {

        proyecto_progra::boletos^ boletos = gcnew proyecto_progra::boletos();
        this->Visible = false; // Oculta el formulario actual
        boletos->ShowDialog(); // Muestra el formulario Boletos
        this->Visible = true; // Muestra nuevamente el formulario actual

    }

           // Evento click del botón para abrir el formulario Vuelos
    private: System::Void btn_abrir_Click_2(System::Object^ sender, System::EventArgs^ e) {

        proyecto_progra::Vuelos^ Vuelos = gcnew proyecto_progra::Vuelos();
        this->Visible = false; // Oculta el formulario actual
        Vuelos->ShowDialog(); // Muestra el formulario Vuelos
        this->Visible = true; // Muestra nuevamente el formulario actual

    }
           System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
           }
           System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
           }
           System::Void DORMIR_Click(System::Object^ sender, System::EventArgs^ e) {
           }
    };
}


