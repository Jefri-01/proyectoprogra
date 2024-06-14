#pragma once  // Directiva para asegurar que el archivo solo se incluya una vez durante la compilación

namespace proyecto_progra {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    // Declaración de la clase Vuelos que hereda de System::Windows::Forms::Form
    public ref class Vuelos : public System::Windows::Forms::Form
    {
    public:
        // Constructor de la clase Vuelos
        Vuelos(void)
        {
            InitializeComponent();
        }

    protected:
        // Destructor de la clase Vuelos
        ~Vuelos()
        {
            if (components)
            {
                delete components;  // Libera los recursos usados por los componentes
            }
        }

    private:
        // Declaración de los controles del formulario
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBoxId;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::TextBox^ textBoxNoVuelo;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBoxNombreAerolinea;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::TextBox^ textBoxOrigen;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::TextBox^ textBoxDestino;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::DateTimePicker^ dateTimePickerFechaVuelo;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::TextBox^ textBoxHoraSalida;
        System::Windows::Forms::Label^ label8;
        System::Windows::Forms::TextBox^ textBoxHoraAterrizaje;
        System::Windows::Forms::Button^ buttonCrear;
        System::Windows::Forms::Button^ buttonLeer;
        System::Windows::Forms::Button^ buttonModificar;
        System::Windows::Forms::Button^ buttonBorrar;
        System::Windows::Forms::Button^ buttonLimpiar;
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ label9;

        // Cadena de conexión a la base de datos MySQL
        String^ connectionString = "server=127.0.0.1;user id=jefri;password=moralesjefri01;database=aeropuerto_maya;";

#pragma region Windows Form Designer generated code
        // Método para inicializar los componentes del formulario
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
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Blue;
            this->label1->Location = System::Drawing::Point(70, 44);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(21, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"ID:";
            this->label1->Click += gcnew System::EventHandler(this, &Vuelos::label1_Click);
            // 
            // textBoxId
            // 
            this->textBoxId->Location = System::Drawing::Point(190, 41);
            this->textBoxId->Name = L"textBoxId";
            this->textBoxId->Size = System::Drawing::Size(200, 20);
            this->textBoxId->TabIndex = 1;
            this->textBoxId->TextChanged += gcnew System::EventHandler(this, &Vuelos::textBoxId_TextChanged);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Blue;
            this->label2->Location = System::Drawing::Point(70, 74);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(57, 13);
            this->label2->TabIndex = 2;
            this->label2->Text = L"No. Vuelo:";
            this->label2->Click += gcnew System::EventHandler(this, &Vuelos::label2_Click);
            // 
            // textBoxNoVuelo
            // 
            this->textBoxNoVuelo->Location = System::Drawing::Point(190, 71);
            this->textBoxNoVuelo->Name = L"textBoxNoVuelo";
            this->textBoxNoVuelo->Size = System::Drawing::Size(200, 20);
            this->textBoxNoVuelo->TabIndex = 3;
            this->textBoxNoVuelo->TextChanged += gcnew System::EventHandler(this, &Vuelos::textBoxNoVuelo_TextChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Blue;
            this->label3->Location = System::Drawing::Point(70, 104);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(96, 13);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Nombre Aerolínea:";
            this->label3->Click += gcnew System::EventHandler(this, &Vuelos::label3_Click);
            // 
            // textBoxNombreAerolinea
            // 
            this->textBoxNombreAerolinea->Location = System::Drawing::Point(190, 101);
            this->textBoxNombreAerolinea->Name = L"textBoxNombreAerolinea";
            this->textBoxNombreAerolinea->Size = System::Drawing::Size(200, 20);
            this->textBoxNombreAerolinea->TabIndex = 5;
            this->textBoxNombreAerolinea->TextChanged += gcnew System::EventHandler(this, &Vuelos::textBoxNombreAerolinea_TextChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Blue;
            this->label4->Location = System::Drawing::Point(70, 134);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(41, 13);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Origen:";
            // 
            // textBoxOrigen
            // 
            this->textBoxOrigen->Location = System::Drawing::Point(190, 131);
            this->textBoxOrigen->Name = L"textBoxOrigen";
            this->textBoxOrigen->Size = System::Drawing::Size(200, 20);
            this->textBoxOrigen->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Blue;
            this->label5->Location = System::Drawing::Point(70, 164);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(46, 13);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Destino:";
            // 
            // textBoxDestino
            // 
            this->textBoxDestino->Location = System::Drawing::Point(190, 161);
            this->textBoxDestino->Name = L"textBoxDestino";
            this->textBoxDestino->Size = System::Drawing::Size(200, 20);
            this->textBoxDestino->TabIndex = 9;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Blue;
            this->label6->Location = System::Drawing::Point(70, 194);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(70, 13);
            this->label6->TabIndex = 10;
            this->label6->Text = L"Fecha Vuelo:";
            // 
            // dateTimePickerFechaVuelo
            // 
            this->dateTimePickerFechaVuelo->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->dateTimePickerFechaVuelo->Location = System::Drawing::Point(190, 191);
            this->dateTimePickerFechaVuelo->Name = L"dateTimePickerFechaVuelo";
            this->dateTimePickerFechaVuelo->Size = System::Drawing::Size(200, 20);
            this->dateTimePickerFechaVuelo->TabIndex = 11;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Blue;
            this->label7->Location = System::Drawing::Point(70, 224);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(65, 13);
            this->label7->TabIndex = 12;
            this->label7->Text = L"Hora Salida:";
            // 
            // textBoxHoraSalida
            // 
            this->textBoxHoraSalida->Location = System::Drawing::Point(190, 217);
            this->textBoxHoraSalida->Name = L"textBoxHoraSalida";
            this->textBoxHoraSalida->Size = System::Drawing::Size(200, 20);
            this->textBoxHoraSalida->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Blue;
            this->label8->Location = System::Drawing::Point(70, 250);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(79, 13);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Hora Aterrizaje:";
            // 
            // textBoxHoraAterrizaje
            // 
            this->textBoxHoraAterrizaje->Location = System::Drawing::Point(190, 247);
            this->textBoxHoraAterrizaje->Name = L"textBoxHoraAterrizaje";
            this->textBoxHoraAterrizaje->Size = System::Drawing::Size(200, 20);
            this->textBoxHoraAterrizaje->TabIndex = 15;
            // 
            // buttonCrear
            // 
            this->buttonCrear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonCrear->Location = System::Drawing::Point(30, 280);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(75, 23);
            this->buttonCrear->TabIndex = 16;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = false;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &Vuelos::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonLeer->Location = System::Drawing::Point(110, 280);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(75, 23);
            this->buttonLeer->TabIndex = 17;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = false;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &Vuelos::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonModificar->Location = System::Drawing::Point(190, 280);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(75, 23);
            this->buttonModificar->TabIndex = 18;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = false;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &Vuelos::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonBorrar->Location = System::Drawing::Point(270, 280);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(75, 23);
            this->buttonBorrar->TabIndex = 19;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = false;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &Vuelos::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonLimpiar->Location = System::Drawing::Point(350, 280);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(75, 23);
            this->buttonLimpiar->TabIndex = 20;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = false;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Vuelos::buttonLimpiar_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Yellow;
            this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(169, 9);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(96, 24);
            this->label9->TabIndex = 21;
            this->label9->Text = L"VUELOS";
            // 
            // Vuelos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->ClientSize = System::Drawing::Size(454, 321);
            this->Controls->Add(this->label9);
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

        // Evento de carga del formulario
    private: System::Void Vuelos_Load(System::Object^ sender, System::EventArgs^ e) {
    }

           // Eventos de clic para los botones
    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_vuelo();  // Llama a la función crear_vuelo
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_vuelo();  // Llama a la función leer_vuelo
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_vuelo();  // Llama a la función modificar_vuelo
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_vuelo();  // Llama a la función borrar_vuelo
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();  // Llama a la función limpiar_campos
    }

           // Función para crear un vuelo en la base de datos
    private: void crear_vuelo() {
        // Obtiene los valores de los campos del formulario
        String^ no_vuelo = textBoxNoVuelo->Text;
        String^ nombre_aerolinea = textBoxNombreAerolinea->Text;
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        String^ fecha_vuelo = dateTimePickerFechaVuelo->Value.ToString("yyyy-MM-dd");
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ hora_aterrizaje = textBoxHoraAterrizaje->Text;

        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para insertar un nuevo vuelo
            String^ query = "INSERT INTO vuelos (no_vuelo, nombre_aerolinea, origen, destino, fecha_vuelo, hora_salida, hora_aterrizaje) VALUES (@no_vuelo, @nombre_aerolinea, @origen, @destino, @fecha_vuelo, @hora_salida, @hora_aterrizaje)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna los parámetros a la consulta
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@nombre_aerolinea", nombre_aerolinea);
            cmd->Parameters->AddWithValue("@origen", origen);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@fecha_vuelo", fecha_vuelo);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@hora_aterrizaje", hora_aterrizaje);
            cmd->ExecuteNonQuery();  // Ejecuta la consulta
            MessageBox::Show("Vuelo Creado");  // Muestra un mensaje de éxito
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para leer un vuelo de la base de datos
    private: void leer_vuelo() {
        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para leer un vuelo por número de vuelo
            String^ query = "SELECT * FROM vuelos WHERE no_vuelo=@no_vuelo";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna el parámetro a la consulta
            cmd->Parameters->AddWithValue("@no_vuelo", textBoxNoVuelo->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();  // Ejecuta la consulta y obtiene un lector de datos
            if (reader->Read()) {
                // Si se encuentra el vuelo, llena los campos del formulario con los datos obtenidos
                textBoxId->Text = reader["id"]->ToString();
                textBoxNoVuelo->Text = reader["no_vuelo"]->ToString();
                textBoxNombreAerolinea->Text = reader["nombre_aerolinea"]->ToString();
                textBoxOrigen->Text = reader["origen"]->ToString();
                textBoxDestino->Text = reader["destino"]->ToString();
                dateTimePickerFechaVuelo->Value = Convert::ToDateTime(reader["fecha_vuelo"]);
                textBoxHoraSalida->Text = reader["hora_salida"]->ToString();
                textBoxHoraAterrizaje->Text = reader["hora_aterrizaje"]->ToString();
                MessageBox::Show("Datos cargados");  // Muestra un mensaje de éxito
            }
            else {
                MessageBox::Show("Vuelo no encontrado");  // Muestra un mensaje si no se encuentra el vuelo
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para modificar un vuelo en la base de datos
    private: void modificar_vuelo() {
        // Obtiene los valores de los campos del formulario
        String^ id = textBoxId->Text;
        String^ no_vuelo = textBoxNoVuelo->Text;
        String^ nombre_aerolinea = textBoxNombreAerolinea->Text;
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        String^ fecha_vuelo = dateTimePickerFechaVuelo->Value.ToString("yyyy-MM-dd");
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ hora_aterrizaje = textBoxHoraAterrizaje->Text;

        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para actualizar un vuelo
            String^ query = "UPDATE vuelos SET no_vuelo=@no_vuelo, nombre_aerolinea=@nombre_aerolinea, origen=@origen, destino=@destino, fecha_vuelo=@fecha_vuelo, hora_salida=@hora_salida, hora_aterrizaje=@hora_aterrizaje WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna los parámetros a la consulta
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@nombre_aerolinea", nombre_aerolinea);
            cmd->Parameters->AddWithValue("@origen", origen);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@fecha_vuelo", fecha_vuelo);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@hora_aterrizaje", hora_aterrizaje);
            cmd->ExecuteNonQuery();  // Ejecuta la consulta
            MessageBox::Show("Vuelo Modificado");  // Muestra un mensaje de éxito
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para borrar un vuelo de la base de datos
    private: void borrar_vuelo() {
        // Obtiene el ID del vuelo a borrar
        String^ id = textBoxId->Text;

        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para borrar un vuelo por ID
            String^ query = "DELETE FROM vuelos WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna el parámetro a la consulta
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();  // Ejecuta la consulta
            MessageBox::Show("Vuelo Borrado");  // Muestra un mensaje de éxito
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para limpiar los campos del formulario
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

           // Eventos de clic y cambio de texto para los controles del formulario
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBoxId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBoxNoVuelo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBoxNombreAerolinea_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
