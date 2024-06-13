#pragma once

namespace proyecto_progra {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class boletos : public System::Windows::Forms::Form
    {
    public:
        boletos(void)
        {
            InitializeComponent();
        }

    protected:
        ~boletos()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxId;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxNumeroBoleto;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxNoIdentificacion;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBoxNoVuelo;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBoxNoAsiento;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBoxCodigoReservacion;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::DateTimePicker^ dateTimePickerHoraAbordaje;
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
               this->textBoxNumeroBoleto = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->textBoxNoIdentificacion = (gcnew System::Windows::Forms::TextBox());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->textBoxNoVuelo = (gcnew System::Windows::Forms::TextBox());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->textBoxNoAsiento = (gcnew System::Windows::Forms::TextBox());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->textBoxCodigoReservacion = (gcnew System::Windows::Forms::TextBox());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->dateTimePickerHoraAbordaje = (gcnew System::Windows::Forms::DateTimePicker());
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
               this->label2->Size = System::Drawing::Size(87, 13);
               this->label2->TabIndex = 2;
               this->label2->Text = L"Numero Boleto:";
               // 
               // textBoxNumeroBoleto
               // 
               this->textBoxNumeroBoleto->Location = System::Drawing::Point(150, 57);
               this->textBoxNumeroBoleto->Name = L"textBoxNumeroBoleto";
               this->textBoxNumeroBoleto->Size = System::Drawing::Size(200, 20);
               this->textBoxNumeroBoleto->TabIndex = 3;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(30, 90);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(92, 13);
               this->label3->TabIndex = 4;
               this->label3->Text = L"No Identificacion:";
               // 
               // textBoxNoIdentificacion
               // 
               this->textBoxNoIdentificacion->Location = System::Drawing::Point(150, 87);
               this->textBoxNoIdentificacion->Name = L"textBoxNoIdentificacion";
               this->textBoxNoIdentificacion->Size = System::Drawing::Size(200, 20);
               this->textBoxNoIdentificacion->TabIndex = 5;
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(30, 120);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(54, 13);
               this->label4->TabIndex = 6;
               this->label4->Text = L"No Vuelo:";
               // 
               // textBoxNoVuelo
               // 
               this->textBoxNoVuelo->Location = System::Drawing::Point(150, 117);
               this->textBoxNoVuelo->Name = L"textBoxNoVuelo";
               this->textBoxNoVuelo->Size = System::Drawing::Size(200, 20);
               this->textBoxNoVuelo->TabIndex = 7;
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Location = System::Drawing::Point(30, 150);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(61, 13);
               this->label5->TabIndex = 8;
               this->label5->Text = L"No Asiento:";
               // 
               // textBoxNoAsiento
               // 
               this->textBoxNoAsiento->Location = System::Drawing::Point(150, 147);
               this->textBoxNoAsiento->Name = L"textBoxNoAsiento";
               this->textBoxNoAsiento->Size = System::Drawing::Size(200, 20);
               this->textBoxNoAsiento->TabIndex = 9;
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->Location = System::Drawing::Point(30, 180);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(107, 13);
               this->label6->TabIndex = 10;
               this->label6->Text = L"Codigo Reservacion:";
               // 
               // textBoxCodigoReservacion
               // 
               this->textBoxCodigoReservacion->Location = System::Drawing::Point(150, 177);
               this->textBoxCodigoReservacion->Name = L"textBoxCodigoReservacion";
               this->textBoxCodigoReservacion->Size = System::Drawing::Size(200, 20);
               this->textBoxCodigoReservacion->TabIndex = 11;
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->Location = System::Drawing::Point(30, 210);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(75, 13);
               this->label7->TabIndex = 12;
               this->label7->Text = L"Hora Abordaje:";
               // 
               // dateTimePickerHoraAbordaje
               // 
               this->dateTimePickerHoraAbordaje->Format = System::Windows::Forms::DateTimePickerFormat::Time;
               this->dateTimePickerHoraAbordaje->Location = System::Drawing::Point(150, 207);
               this->dateTimePickerHoraAbordaje->Name = L"dateTimePickerHoraAbordaje";
               this->dateTimePickerHoraAbordaje->ShowUpDown = true;
               this->dateTimePickerHoraAbordaje->Size = System::Drawing::Size(200, 20);
               this->dateTimePickerHoraAbordaje->TabIndex = 13;
               // 
               // buttonCrear
               // 
               this->buttonCrear->Location = System::Drawing::Point(30, 240);
               this->buttonCrear->Name = L"buttonCrear";
               this->buttonCrear->Size = System::Drawing::Size(75, 23);
               this->buttonCrear->TabIndex = 14;
               this->buttonCrear->Text = L"Crear";
               this->buttonCrear->UseVisualStyleBackColor = true;
               this->buttonCrear->Click += gcnew System::EventHandler(this, &boletos::buttonCrear_Click);
               // 
               // buttonLeer
               // 
               this->buttonLeer->Location = System::Drawing::Point(110, 240);
               this->buttonLeer->Name = L"buttonLeer";
               this->buttonLeer->Size = System::Drawing::Size(75, 23);
               this->buttonLeer->TabIndex = 15;
               this->buttonLeer->Text = L"Leer";
               this->buttonLeer->UseVisualStyleBackColor = true;
               this->buttonLeer->Click += gcnew System::EventHandler(this, &boletos::buttonLeer_Click);
               // 
               // buttonModificar
               // 
               this->buttonModificar->Location = System::Drawing::Point(190, 240);
               this->buttonModificar->Name = L"buttonModificar";
               this->buttonModificar->Size = System::Drawing::Size(75, 23);
               this->buttonModificar->TabIndex = 16;
               this->buttonModificar->Text = L"Modificar";
               this->buttonModificar->UseVisualStyleBackColor = true;
               this->buttonModificar->Click += gcnew System::EventHandler(this, &boletos::buttonModificar_Click);
               // 
               // buttonBorrar
               // 
               this->buttonBorrar->Location = System::Drawing::Point(270, 240);
               this->buttonBorrar->Name = L"buttonBorrar";
               this->buttonBorrar->Size = System::Drawing::Size(75, 23);
               this->buttonBorrar->TabIndex = 17;
               this->buttonBorrar->Text = L"Borrar";
               this->buttonBorrar->UseVisualStyleBackColor = true;
               this->buttonBorrar->Click += gcnew System::EventHandler(this, &boletos::buttonBorrar_Click);
               // 
               // buttonLimpiar
               // 
               this->buttonLimpiar->Location = System::Drawing::Point(350, 240);
               this->buttonLimpiar->Name = L"buttonLimpiar";
               this->buttonLimpiar->Size = System::Drawing::Size(75, 23);
               this->buttonLimpiar->TabIndex = 18;
               this->buttonLimpiar->Text = L"Limpiar";
               this->buttonLimpiar->UseVisualStyleBackColor = true;
               this->buttonLimpiar->Click += gcnew System::EventHandler(this, &boletos::buttonLimpiar_Click);
               // 
               // Boletos
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(454, 281);
               this->Controls->Add(this->buttonLimpiar);
               this->Controls->Add(this->buttonBorrar);
               this->Controls->Add(this->buttonModificar);
               this->Controls->Add(this->buttonLeer);
               this->Controls->Add(this->buttonCrear);
               this->Controls->Add(this->dateTimePickerHoraAbordaje);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->textBoxCodigoReservacion);
               this->Controls->Add(this->label6);
               this->Controls->Add(this->textBoxNoAsiento);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->textBoxNoVuelo);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->textBoxNoIdentificacion);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->textBoxNumeroBoleto);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBoxId);
               this->Controls->Add(this->label1);
               this->Name = L"Boletos";
               this->Text = L"Boletos";
               this->Load += gcnew System::EventHandler(this, &boletos::Boletos_Load);
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion

    private: System::Void Boletos_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_boleto();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_boleto();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_boleto();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_boleto();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_boleto() {
        String^ numero_boleto = textBoxNumeroBoleto->Text;
        String^ no_identificacion = textBoxNoIdentificacion->Text;
        String^ no_vuelo = textBoxNoVuelo->Text;
        String^ no_asiento = textBoxNoAsiento->Text;
        String^ codigo_reservacion = textBoxCodigoReservacion->Text;
        String^ hora_abordaje = dateTimePickerHoraAbordaje->Value.ToString("HH:mm:ss");

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();

            // Verificar si no_identificacion existe en pasajeros
            String^ queryVerificarPasajero = "SELECT COUNT(*) FROM pasajeros WHERE id=@no_identificacion";
            MySqlCommand^ cmdVerificarPasajero = gcnew MySqlCommand(queryVerificarPasajero, conn);
            cmdVerificarPasajero->Parameters->AddWithValue("@no_identificacion", no_identificacion);
            int count = Convert::ToInt32(cmdVerificarPasajero->ExecuteScalar());

            // Mensaje de depuración para verificar el valor de no_identificacion
            MessageBox::Show("Valor de no_identificacion: " + no_identificacion);

            if (count == 0) {
                MessageBox::Show("No existe un pasajero con la identificación proporcionada.");
                return;
            }

            // Verificar si no_vuelo existe en vuelos
            String^ queryVerificarVuelo = "SELECT COUNT(*) FROM vuelos WHERE id=@no_vuelo";
            MySqlCommand^ cmdVerificarVuelo = gcnew MySqlCommand(queryVerificarVuelo, conn);
            cmdVerificarVuelo->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            count = Convert::ToInt32(cmdVerificarVuelo->ExecuteScalar());

            // Mensaje de depuración para verificar el valor de no_vuelo
            MessageBox::Show("Valor de no_vuelo: " + no_vuelo);

            if (count == 0) {
                MessageBox::Show("No existe un vuelo con el número proporcionado.");
                return;
            }

            String^ query = "INSERT INTO boletos (numero_boleto, no_identificacion, no_vuelo, no_asiento, codigo_reservacion, hora_abordaje) VALUES (@numero_boleto, @no_identificacion, @no_vuelo, @no_asiento, @codigo_reservacion, @hora_abordaje)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@numero_boleto", numero_boleto);
            cmd->Parameters->AddWithValue("@no_identificacion", no_identificacion);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@no_asiento", no_asiento);
            cmd->Parameters->AddWithValue("@codigo_reservacion", codigo_reservacion);
            cmd->Parameters->AddWithValue("@hora_abordaje", hora_abordaje);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Boleto Creado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_boleto() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM boletos WHERE numero_boleto=@numero_boleto";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@numero_boleto", textBoxNumeroBoleto->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxId->Text = reader["id"]->ToString();
                textBoxNumeroBoleto->Text = reader["numero_boleto"]->ToString();
                textBoxNoIdentificacion->Text = reader["no_identificacion"]->ToString();
                textBoxNoVuelo->Text = reader["no_vuelo"]->ToString();
                textBoxNoAsiento->Text = reader["no_asiento"]->ToString();
                textBoxCodigoReservacion->Text = reader["codigo_reservacion"]->ToString();
                dateTimePickerHoraAbordaje->Value = Convert::ToDateTime(reader["hora_abordaje"]);
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Boleto no encontrado");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_boleto() {
        String^ id = textBoxId->Text;
        String^ numero_boleto = textBoxNumeroBoleto->Text;
        String^ no_identificacion = textBoxNoIdentificacion->Text;
        String^ no_vuelo = textBoxNoVuelo->Text;
        String^ no_asiento = textBoxNoAsiento->Text;
        String^ codigo_reservacion = textBoxCodigoReservacion->Text;
        String^ hora_abordaje = dateTimePickerHoraAbordaje->Value.ToString("HH:mm:ss");

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE boletos SET numero_boleto=@numero_boleto, no_identificacion=@no_identificacion, no_vuelo=@no_vuelo, no_asiento=@no_asiento, codigo_reservacion=@codigo_reservacion, hora_abordaje=@hora_abordaje WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@numero_boleto", numero_boleto);
            cmd->Parameters->AddWithValue("@no_identificacion", no_identificacion);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@no_asiento", no_asiento);
            cmd->Parameters->AddWithValue("@codigo_reservacion", codigo_reservacion);
            cmd->Parameters->AddWithValue("@hora_abordaje", hora_abordaje);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Boleto Modificado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_boleto() {
        String^ id = textBoxId->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM boletos WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Boleto Borrado");
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
        textBoxNumeroBoleto->Clear();
        textBoxNoIdentificacion->Clear();
        textBoxNoVuelo->Clear();
        textBoxNoAsiento->Clear();
        textBoxCodigoReservacion->Clear();
        dateTimePickerHoraAbordaje->ResetText();
    }
    };
}
