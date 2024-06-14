#pragma once

// Namespace for the project
namespace proyecto_progra {

    // Import necessary namespaces
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    // Define the `boletos` form class
    public ref class boletos : public System::Windows::Forms::Form
    {
    public:
        // Constructor for the `boletos` class
        boletos(void)
        {
            InitializeComponent();
        }

    protected:
        // Destructor for the `boletos` class
        ~boletos()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Declare form components
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBoxId;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::TextBox^ textBoxNumeroBoleto;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBoxNombre;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::TextBox^ textBoxNoVuelo;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::TextBox^ textBoxNoAsiento;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::TextBox^ textBoxCodigoReservacion;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::TextBox^ textBoxHoraAbordaje;
        System::Windows::Forms::Button^ buttonCrear;
        System::Windows::Forms::Button^ buttonLeer;
        System::Windows::Forms::Button^ buttonModificar;
        System::Windows::Forms::Button^ buttonBorrar;
        System::Windows::Forms::Button^ buttonLimpiar;
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ label8;

        // Connection string for the database
        String^ connectionString = "server=127.0.0.1;user id=jefri;password=moralesjefri01;database=aeropuerto_maya;";

#pragma region Windows Form Designer generated code
        // Method to initialize the form components
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxId = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxNumeroBoleto = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBoxNoVuelo = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBoxNoAsiento = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBoxCodigoReservacion = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBoxHoraAbordaje = (gcnew System::Windows::Forms::TextBox());
            this->buttonCrear = (gcnew System::Windows::Forms::Button());
            this->buttonLeer = (gcnew System::Windows::Forms::Button());
            this->buttonModificar = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Lime;
            this->label1->Location = System::Drawing::Point(65, 48);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(21, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"ID:";
            // 
            // textBoxId
            // 
            this->textBoxId->Location = System::Drawing::Point(185, 45);
            this->textBoxId->Name = L"textBoxId";
            this->textBoxId->Size = System::Drawing::Size(200, 20);
            this->textBoxId->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Lime;
            this->label2->Location = System::Drawing::Point(65, 78);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(80, 13);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Número Boleto:";
            // 
            // textBoxNumeroBoleto
            // 
            this->textBoxNumeroBoleto->Location = System::Drawing::Point(185, 75);
            this->textBoxNumeroBoleto->Name = L"textBoxNumeroBoleto";
            this->textBoxNumeroBoleto->Size = System::Drawing::Size(200, 20);
            this->textBoxNumeroBoleto->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Lime;
            this->label3->Location = System::Drawing::Point(65, 108);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(46, 13);
            this->label3->TabIndex = 4;
            this->label3->Text = L"IDENTI:";
            // 
            // textBoxNombre
            // 
            this->textBoxNombre->Location = System::Drawing::Point(185, 105);
            this->textBoxNombre->Name = L"textBoxNombre";
            this->textBoxNombre->Size = System::Drawing::Size(200, 20);
            this->textBoxNombre->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Lime;
            this->label4->Location = System::Drawing::Point(65, 138);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(57, 13);
            this->label4->TabIndex = 6;
            this->label4->Text = L"No. Vuelo:";
            // 
            // textBoxNoVuelo
            // 
            this->textBoxNoVuelo->Location = System::Drawing::Point(185, 135);
            this->textBoxNoVuelo->Name = L"textBoxNoVuelo";
            this->textBoxNoVuelo->Size = System::Drawing::Size(200, 20);
            this->textBoxNoVuelo->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Lime;
            this->label5->Location = System::Drawing::Point(65, 168);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(65, 13);
            this->label5->TabIndex = 8;
            this->label5->Text = L"No. Asiento:";
            // 
            // textBoxNoAsiento
            // 
            this->textBoxNoAsiento->Location = System::Drawing::Point(185, 165);
            this->textBoxNoAsiento->Name = L"textBoxNoAsiento";
                this->textBoxNoAsiento->Size = System::Drawing::Size(200, 20);
            this->textBoxNoAsiento->TabIndex = 9;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Lime;
            this->label6->Location = System::Drawing::Point(65, 198);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(106, 13);
            this->label6->TabIndex = 10;
            this->label6->Text = L"Código Reservación:";
            // 
            // textBoxCodigoReservacion
            // 
            this->textBoxCodigoReservacion->Location = System::Drawing::Point(185, 195);
            this->textBoxCodigoReservacion->Name = L"textBoxCodigoReservacion";
            this->textBoxCodigoReservacion->Size = System::Drawing::Size(200, 20);
            this->textBoxCodigoReservacion->TabIndex = 11;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Lime;
            this->label7->Location = System::Drawing::Point(65, 228);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(78, 13);
            this->label7->TabIndex = 12;
            this->label7->Text = L"Hora Abordaje:";
            // 
            // textBoxHoraAbordaje
            // 
            this->textBoxHoraAbordaje->Location = System::Drawing::Point(185, 225);
            this->textBoxHoraAbordaje->Name = L"textBoxHoraAbordaje";
            this->textBoxHoraAbordaje->Size = System::Drawing::Size(200, 20);
            this->textBoxHoraAbordaje->TabIndex = 13;
            // 
            // buttonCrear
            // 
            this->buttonCrear->BackColor = System::Drawing::Color::Cyan;
            this->buttonCrear->Location = System::Drawing::Point(30, 250);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(75, 23);
            this->buttonCrear->TabIndex = 14;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = false;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &boletos::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->BackColor = System::Drawing::Color::Cyan;
            this->buttonLeer->Location = System::Drawing::Point(110, 250);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(75, 23);
            this->buttonLeer->TabIndex = 15;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = false;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &boletos::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->BackColor = System::Drawing::Color::Cyan;
            this->buttonModificar->Location = System::Drawing::Point(190, 250);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(75, 23);
            this->buttonModificar->TabIndex = 16;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = false;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &boletos::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->BackColor = System::Drawing::Color::Cyan;
            this->buttonBorrar->Location = System::Drawing::Point(270, 250);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(75, 23);
            this->buttonBorrar->TabIndex = 17;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = false;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &boletos::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->BackColor = System::Drawing::Color::Cyan;
            this->buttonLimpiar->Location = System::Drawing::Point(350, 250);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(75, 23);
            this->buttonLimpiar->TabIndex = 18;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = false;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &boletos::buttonLimpiar_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Blue;
            this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(154, 9);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(138, 27);
            this->label8->TabIndex = 19;
            this->label8->Text = L"PASAJERO";
            // 
            // boletos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->ClientSize = System::Drawing::Size(454, 301);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBoxHoraAbordaje);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBoxCodigoReservacion);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBoxNoAsiento);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBoxNoVuelo);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBoxNombre);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxNumeroBoleto);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBoxId);
            this->Controls->Add(this->label1);
            this->Name = L"boletos";
            this->Text = L"Boletos";
            this->Load += gcnew System::EventHandler(this, &boletos::Boletos_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // Evento de carga del formulario
    private: System::Void Boletos_Load(System::Object^ sender, System::EventArgs^ e) {
    }

           // Eventos de clic para los botones
    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_boleto();  // Llama a la función crear_boleto
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_boleto();  // Llama a la función leer_boleto
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_boleto();  // Llama a la función modificar_boleto
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_boleto();  // Llama a la función borrar_boleto
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();  // Llama a la función limpiar_campos
    }

           // Función para crear un boleto en la base de datos
    private: void crear_boleto() {
        // Obtiene los valores de los campos del formulario
        String^ numero_boleto = textBoxNumeroBoleto->Text;
        int nombre;
        if (!Int32::TryParse(textBoxNombre->Text, nombre)) {
            MessageBox::Show("El nombre debe ser un entero.");
            return;
        }
        int no_vuelo;
        if (!Int32::TryParse(textBoxNoVuelo->Text, no_vuelo)) {
            MessageBox::Show("El número de vuelo debe ser un entero.");
            return;
        }
        String^ no_asiento = textBoxNoAsiento->Text;
        String^ codigo_reservacion = textBoxCodigoReservacion->Text;
        String^ hora_abordaje = textBoxHoraAbordaje->Text;

        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para insertar un nuevo boleto
            String^ query = "INSERT INTO boletos (numero_boleto, nombre, no_vuelo, no_asiento, codigo_reservacion, hora_abordaje) VALUES (@numero_boleto, @nombre, @no_vuelo, @no_asiento, @codigo_reservacion, @hora_abordaje)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna los parámetros a la consulta
            cmd->Parameters->AddWithValue("@numero_boleto", numero_boleto);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@no_asiento", no_asiento);
            cmd->Parameters->AddWithValue("@codigo_reservacion", codigo_reservacion);
            cmd->Parameters->AddWithValue("@hora_abordaje", hora_abordaje);
            cmd->ExecuteNonQuery();  // Ejecuta la consulta
            MessageBox::Show("Boleto Creado");  // Muestra un mensaje de éxito
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para leer un boleto de la base de datos
    private: void leer_boleto() {
        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para leer un boleto por número de boleto
            String^ query = "SELECT * FROM boletos WHERE numero_boleto=@numero_boleto";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna el parámetro a la consulta
            cmd->Parameters->AddWithValue("@numero_boleto", textBoxNumeroBoleto->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();  // Ejecuta la consulta y obtiene un lector de datos
            if (reader->Read()) {
                // Asigna los valores obtenidos a los campos del formulario
                textBoxId->Text = reader["id"]->ToString();
                textBoxNumeroBoleto->Text = reader["numero_boleto"]->ToString();
                textBoxNombre->Text = reader["nombre"]->ToString();
                textBoxNoVuelo->Text = reader["no_vuelo"]->ToString();
                textBoxNoAsiento->Text = reader["no_asiento"]->ToString();
                textBoxCodigoReservacion->Text = reader["codigo_reservacion"]->ToString();
                textBoxHoraAbordaje->Text = reader["hora_abordaje"]->ToString();
                MessageBox::Show("Datos cargados");  // Muestra un mensaje de éxito
            }
            else {
                MessageBox::Show("Boleto no encontrado");  // Muestra un mensaje si no se encuentra el boleto
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para modificar un boleto en la base de datos
    private: void modificar_boleto() {
        // Obtiene los valores de los campos del formulario
        String^ id = textBoxId->Text;
        String^ numero_boleto = textBoxNumeroBoleto->Text;
        int nombre;
        if (!Int32::TryParse(textBoxNombre->Text, nombre)) {
            MessageBox::Show("El nombre debe ser un entero.");
            return;
        }
        int no_vuelo;
        if (!Int32::TryParse(textBoxNoVuelo->Text, no_vuelo)) {
            MessageBox::Show("El número de vuelo debe ser un entero.");
            return;
        }
        String^ no_asiento = textBoxNoAsiento->Text;
        String^ codigo_reservacion = textBoxCodigoReservacion->Text;
        String^ hora_abordaje = textBoxHoraAbordaje->Text;

        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para actualizar un boleto por ID
            String^ query = "UPDATE boletos SET numero_boleto=@numero_boleto, nombre=@nombre, no_vuelo=@no_vuelo, no_asiento=@no_asiento, codigo_reservacion=@codigo_reservacion, hora_abordaje=@hora_abordaje WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna los parámetros a la consulta
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@numero_boleto", numero_boleto);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@no_vuelo", no_vuelo);
            cmd->Parameters->AddWithValue("@no_asiento", no_asiento);
            cmd->Parameters->AddWithValue("@codigo_reservacion", codigo_reservacion);
            cmd->Parameters->AddWithValue("@hora_abordaje", hora_abordaje);
            cmd->ExecuteNonQuery();  // Ejecuta la consulta
            MessageBox::Show("Boleto Modificado");  // Muestra un mensaje de éxito
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);  // Muestra un mensaje de error si ocurre una excepción
        }
        finally {
            conn->Close();  // Cierra la conexión
        }
    }

           // Función para borrar un boleto de la base de datos
    private: void borrar_boleto() {
        // Obtiene el ID del boleto a borrar
        String^ id = textBoxId->Text;

        // Establece la conexión con la base de datos
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();  // Abre la conexión
            // Define la consulta SQL para borrar un boleto por ID
            String^ query = "DELETE FROM boletos WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            // Asigna el parámetro a la consulta
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();  // Ejecuta la consulta
            MessageBox::Show("Boleto Borrado");  // Muestra un mensaje de éxito
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
        textBoxNumeroBoleto->Clear();
        textBoxNombre->Clear();
        textBoxNoVuelo->Clear();
        textBoxNoAsiento->Clear();
        textBoxCodigoReservacion->Clear();
        textBoxHoraAbordaje->Clear();
    }
    };
}

