#pragma once

namespace proyecto_progra {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class Vuelos : public System::Windows::Forms::Form
    {
    public:
        Vuelos(void)
        {
            InitializeComponent();
        }

    protected:
        ~Vuelos()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxId;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxNoVuelo;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxNombreAerolinea;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBoxOrigen;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBoxDestino;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DateTimePicker^ dateTimePickerFechaVuelo;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBoxHoraSalida;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBoxHoraAterrizaje;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;
    private: System::Windows::Forms::Button^ buttonLimpiar;
    private: System::ComponentModel::Container^ components;
    private: String^ connectionString = "server=127.0.0.1;user id=jefri;password=moralesjefri01;database=aeropuerto_maya;";

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBoxId = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBoxNoVuelo = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->textBoxNombreAerolinea = (gcnew System::Windows::Forms::TextBox());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->textBoxOrigen = (gcnew System::Windows::Forms::TextBox());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->textBoxDestino = (gcnew System::Windows::Forms::TextBox());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->dateTimePickerFechaVuelo = (gcnew System::Windows::Forms::DateTimePicker());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->textBoxHoraSalida = (gcnew System::Windows::Forms::TextBox());
               this->label8 = (gcnew System::Windows::Forms::Label());
               this->textBoxHoraAterrizaje = (gcnew System::Windows::Forms::TextBox());
               this->buttonCrear = (gcnew System::Windows::Forms::Button());
               this->buttonLeer = (gcnew System::Windows::Forms::Button());
               this->buttonModificar = (gcnew System::Windows::Forms::Button());
               this->buttonBorrar = (gcnew System::Windows::Forms::Button());
               this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(30, 30);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(24, 13);
               this->label1->TabIndex = 0;
               this->label1->Text = L"ID:";
               // 
               // textBoxId
               // 
               this->textBoxId->Location = System::Drawing::Point(150, 27);
               this->textBoxId->Name = L"textBoxId";
               this->textBoxId->Size = System::Drawing::Size(200, 20);
               this->textBoxId->TabIndex = 1;
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(30, 60);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(55, 13);
               this->label2->TabIndex = 2;
               this->label2->Text = L"No. Vuelo:";
               // 
               // textBoxNoVuelo
               // 
               this->textBoxNoVuelo->Location = System::Drawing::Point(150, 57);
               this->textBoxNoVuelo->Name = L"textBoxNoVuelo";
               this->textBoxNoVuelo->Size = System::Drawing::Size(200, 20);
               this->textBoxNoVuelo->TabIndex = 3;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(30, 90);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(83, 13);
               this->label3->TabIndex = 4;
               this->label3->Text = L"Nombre Aerolínea:";
               // 
               // textBoxNombreAerolinea
               // 
               this->textBoxNombreAerolinea->Location = System::Drawing::Point(150, 87);
               this->textBoxNombreAerolinea->Name = L"textBoxNombreAerolinea";
               this->textBoxNombreAerolinea->Size = System::Drawing::Size(200, 20);
               this->textBoxNombreAerolinea->TabIndex = 5;
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(30, 120);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(38, 13);
               this->label4->TabIndex = 6;
               this->label4->Text = L"Origen:";
               // 
               // textBoxOrigen
               // 
               this->textBoxOrigen->Location = System::Drawing::Point(150, 117);
               this->textBoxOrigen->Name = L"textBoxOrigen";
               this->textBoxOrigen->Size = System::Drawing::Size(200, 20);
               this->textBoxOrigen->TabIndex = 7;
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Location = System::Drawing::Point(30, 150);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(43, 13);
               this->label5->TabIndex = 8;
               this->label5->Text = L"Destino:";
               // 
               // textBoxDestino
               // 
               this->textBoxDestino->Location = System::Drawing::Point(150, 147);
               this->textBoxDestino->Name = L"textBoxDestino";
               this->textBoxDestino->Size = System::Drawing::Size(200, 20);
               this->textBoxDestino->TabIndex = 9;
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->Location = System::Drawing::Point(30, 180);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(68, 13);
               this->label6->TabIndex = 10;
               this->label6->Text = L"Fecha Vuelo:";
               // 
               // dateTimePickerFechaVuelo
               // 
               this->dateTimePickerFechaVuelo->Format = System::Windows::Forms::DateTimePickerFormat::Short;
               this->dateTimePickerFechaVuelo->Location = System::Drawing::Point(150, 177);
               this->dateTimePickerFechaVuelo->Name = L"dateTimePickerFechaVuelo";
               this->dateTimePickerFechaVuelo->Size = System::Drawing::Size(200, 20);
               this->dateTimePickerFechaVuelo->TabIndex = 11;
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->Location = System::Drawing::Point(30, 210);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(61, 13);
               this->label7->TabIndex = 12;
               this->label7->Text = L"Hora Salida:";
               // 
               // textBoxHoraSalida
               // 
               this->textBoxHoraSalida->Location = System::Drawing::Point(150, 207);
               this->textBoxHoraSalida->Name = L"textBoxHoraSalida";
               this->textBoxHoraSalida->Size = System::Drawing::Size(200, 20);
               this->textBoxHoraSalida->TabIndex = 13;
               // 
               // label8
               // 
               this->label8->AutoSize = true;
               this->label8->Location = System::Drawing::Point(30, 240);
               this->label8->Name = L"label8";
               this->label8->Size = System::Drawing::Size(80, 13);
               this->label8->TabIndex = 14;
               this->label8->Text = L"Hora Aterrizaje:";
               // 
               // textBoxHoraAterrizaje
               // 
               this->textBoxHoraAterrizaje->Location = System::Drawing::Point(150, 237);
               this->textBoxHoraAterrizaje->Name = L"textBoxHoraAterrizaje";
               this->textBoxHoraAterrizaje->Size = System::Drawing::Size(200, 20);
               this->textBoxHoraAterrizaje->TabIndex = 15;
               // 
               // buttonCrear
               // 
               this->buttonCrear->Location = System::Drawing::Point(30, 280);
               this->buttonCrear->Name = L"buttonCrear";
               this->buttonCrear->Size = System::Drawing::Size(75, 23);
               this->buttonCrear->TabIndex = 16;
               this->buttonCrear->Text = L"Crear";
               this->buttonCrear->UseVisualStyleBackColor = true;
               this->buttonCrear->Click += gcnew System::EventHandler(this, &Vuelos::buttonCrear_Click);
               // 
               // buttonLeer
               // 
               this->buttonLeer->Location = System::Drawing::Point(110, 280);
               this->buttonLeer->Name = L"buttonLeer";
               this->buttonLeer->Size = System::Drawing::Size(75, 23);
               this->buttonLeer->TabIndex = 17;
               this->buttonLeer->Text = L"Leer";
               this->buttonLeer->UseVisualStyleBackColor = true;
               this->buttonLeer->Click += gcnew System::EventHandler(this, &Vuelos::buttonLeer_Click);
               // 
               // buttonModificar
               // 
               this->buttonModificar->Location = System::Drawing::Point(190, 280);
               this->buttonModificar->Name = L"buttonModificar";
               this->buttonModificar->Size = System::Drawing::Size(75, 23);
               this->buttonModificar->TabIndex = 18;
               this->buttonModificar->Text = L"Modificar";
               this->buttonModificar->UseVisualStyleBackColor = true;
               this->buttonModificar->Click += gcnew System::EventHandler(this, &Vuelos::buttonModificar_Click);
               // 
               // buttonBorrar
               // 
               this->buttonBorrar->Location = System::Drawing::Point(270, 280);
               this->buttonBorrar->Name = L"buttonBorrar";
               this->buttonBorrar->Size = System::Drawing::Size(75, 23);
               this->buttonBorrar->TabIndex = 19;
               this->buttonBorrar->Text = L"Borrar";
               this->buttonBorrar->UseVisualStyleBackColor = true;
               this->buttonBorrar->Click += gcnew System::EventHandler(this, &Vuelos::buttonBorrar_Click);
               // 
               // buttonLimpiar
               // 
               this->buttonLimpiar->Location = System::Drawing::Point(350, 280);
               this->buttonLimpiar->Name = L"buttonLimpiar";
               this->buttonLimpiar->Size = System::Drawing::Size(75, 23);
               this->buttonLimpiar->TabIndex = 20;
               this->buttonLimpiar->Text = L"Limpiar";
               this->buttonLimpiar->UseVisualStyleBackColor = true;
               this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Vuelos::buttonLimpiar_Click);
               // 
               // Vuelos
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(454, 321);
               this->Controls->Add(this->buttonLimpiar);
               this->Controls->Add(this->buttonBorrar);
               this->Controls->Add(this->buttonModificar);
               this->Controls->Add(this->buttonLeer);
               this->Controls->Add(this->buttonCrear);
               this->Controls->Add(this->textBoxHoraAterrizaje);
               this->Controls->Add(this->label8);
               this->Controls->Add(this->textBoxHoraSalida);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->dateTimePickerFechaVuelo);
               this->Controls->Add(this->label6);
               this->Controls->Add(this->textBoxDestino);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->textBoxOrigen);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->textBoxNombreAerolinea);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->textBoxNoVuelo);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBoxId);
               this->Controls->Add(this->label1);
               this->Name = L"Vuelos";
               this->Text = L"Vuelos";
               this->Load += gcnew System::EventHandler(this, &Vuelos::Vuelos_Load);
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion

    private: System::Void Vuelos_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_vuelo();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_vuelo();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_vuelo();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_vuelo();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_vuelo() {
        String^ no_vuelo = textBoxNoVuelo->Text;
        String^ nombre_aerolinea = textBoxNombreAerolinea->Text;
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        String^ fecha_vuelo = dateTimePickerFechaVuelo->Value.ToString("yyyy-MM-dd");
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ hora_aterrizaje = textBoxHoraAterrizaje->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO vuelos (no_vuelo, nombre_aerolinea, origen, destino, fecha_vuelo, hora_salida, hora_aterrizaje) VALUES (@no_vuelo, @nombre_aerolinea, @origen, @destino, @fecha_vuelo, @hora_salida, @hora_aterrizaje)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@nombre_aerolinea", nombre_aerolinea);
            cmd->Parameters->AddWithValue("@origen", origen);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@fecha_vuelo", fecha_vuelo);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@hora_aterrizaje", hora_aterrizaje);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Vuelo Creado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_vuelo() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM vuelos WHERE no_vuelo=@no_vuelo";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@no_vuelo", textBoxNoVuelo->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxId->Text = reader["id"]->ToString();
                textBoxNoVuelo->Text = reader["no_vuelo"]->ToString();
                textBoxNombreAerolinea->Text = reader["nombre_aerolinea"]->ToString();
                textBoxOrigen->Text = reader["origen"]->ToString();
                textBoxDestino->Text = reader["destino"]->ToString();
                dateTimePickerFechaVuelo->Value = Convert::ToDateTime(reader["fecha_vuelo"]);
                textBoxHoraSalida->Text = reader["hora_salida"]->ToString();
                textBoxHoraAterrizaje->Text = reader["hora_aterrizaje"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Vuelo no encontrado");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_vuelo() {
        String^ id = textBoxId->Text;
        String^ no_vuelo = textBoxNoVuelo->Text;
        String^ nombre_aerolinea = textBoxNombreAerolinea->Text;
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        String^ fecha_vuelo = dateTimePickerFechaVuelo->Value.ToString("yyyy-MM-dd");
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ hora_aterrizaje = textBoxHoraAterrizaje->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE vuelos SET no_vuelo=@no_vuelo, nombre_aerolinea=@nombre_aerolinea, origen=@origen, destino=@destino, fecha_vuelo=@fecha_vuelo, hora_salida=@hora_salida, hora_aterrizaje=@hora_aterrizaje WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@nombre_aerolinea", nombre_aerolinea);
            cmd->Parameters->AddWithValue("@origen", origen);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@fecha_vuelo", fecha_vuelo);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@hora_aterrizaje", hora_aterrizaje);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Vuelo Modificado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_vuelo() {
        String^ id = textBoxId->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM vuelos WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Vuelo Borrado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void limpiar_campos() {
        textBoxId->Clear();
        textBoxNoVuelo->Clear();
        textBoxNombreAerolinea->Clear();
        textBoxOrigen->Clear();
        textBoxDestino->Clear();
        dateTimePickerFechaVuelo->ResetText();
        textBoxHoraSalida->Clear();
        textBoxHoraAterrizaje->Clear();
    }
    };
}
