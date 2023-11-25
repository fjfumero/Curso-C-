#pragma once

namespace UsuarioContrasena {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ eNombre;
	protected:
	private: System::Windows::Forms::Label^ eContrasena;
	private: System::Windows::Forms::TextBox^ Nombre;

	private: System::Windows::Forms::TextBox^ Contrasena;


	private: System::Windows::Forms::Button^ BotonEntrar;
	private: System::Windows::Forms::Button^ VerContrasena;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ eEstadoVerContrasena;








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->eNombre = (gcnew System::Windows::Forms::Label());
			this->eContrasena = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->BotonEntrar = (gcnew System::Windows::Forms::Button());
			this->VerContrasena = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->eEstadoVerContrasena = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// eNombre
			// 
			this->eNombre->AutoSize = true;
			this->eNombre->Location = System::Drawing::Point(33, 28);
			this->eNombre->Name = L"eNombre";
			this->eNombre->Size = System::Drawing::Size(47, 13);
			this->eNombre->TabIndex = 0;
			this->eNombre->Text = L"Nombre:";
			// 
			// eContrasena
			// 
			this->eContrasena->AutoSize = true;
			this->eContrasena->Location = System::Drawing::Point(16, 76);
			this->eContrasena->Name = L"eContrasena";
			this->eContrasena->Size = System::Drawing::Size(64, 13);
			this->eContrasena->TabIndex = 1;
			this->eContrasena->Text = L"Contraseña:";
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(122, 25);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(122, 20);
			this->Nombre->TabIndex = 2;
			// 
			// Contrasena
			// 
			this->Contrasena->Location = System::Drawing::Point(122, 68);
			this->Contrasena->Name = L"Contrasena";
			this->Contrasena->PasswordChar = '*';
			this->Contrasena->Size = System::Drawing::Size(122, 20);
			this->Contrasena->TabIndex = 3;
			// 
			// BotonEntrar
			// 
			this->BotonEntrar->Location = System::Drawing::Point(137, 113);
			this->BotonEntrar->Name = L"BotonEntrar";
			this->BotonEntrar->Size = System::Drawing::Size(85, 23);
			this->BotonEntrar->TabIndex = 5;
			this->BotonEntrar->Text = L"Entrar";
			this->BotonEntrar->UseVisualStyleBackColor = true;
			this->BotonEntrar->Click += gcnew System::EventHandler(this, &MyForm::BotonEntrar_Click);
			// 
			// VerContrasena
			// 
			this->VerContrasena->BackColor = System::Drawing::Color::Red;
			this->VerContrasena->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->VerContrasena->Location = System::Drawing::Point(267, 76);
			this->VerContrasena->Name = L"VerContrasena";
			this->VerContrasena->Size = System::Drawing::Size(16, 13);
			this->VerContrasena->TabIndex = 7;
			this->VerContrasena->UseVisualStyleBackColor = false;
			this->VerContrasena->Click += gcnew System::EventHandler(this, &MyForm::VerContrasena_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(289, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Ver Contraseña";
			// 
			// eEstadoVerContrasena
			// 
			this->eEstadoVerContrasena->AutoSize = true;
			this->eEstadoVerContrasena->Location = System::Drawing::Point(283, 32);
			this->eEstadoVerContrasena->Name = L"eEstadoVerContrasena";
			this->eEstadoVerContrasena->Size = System::Drawing::Size(38, 13);
			this->eEstadoVerContrasena->TabIndex = 9;
			this->eEstadoVerContrasena->Text = L"Oculta";
			this->eEstadoVerContrasena->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 163);
			this->Controls->Add(this->eEstadoVerContrasena);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->VerContrasena);
			this->Controls->Add(this->BotonEntrar);
			this->Controls->Add(this->Contrasena);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->eContrasena);
			this->Controls->Add(this->eNombre);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		String^ NombreComp = gcnew String(""); //creamos la variable de tipo string

private: System::Void VerContrasena_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	if (eEstadoVerContrasena->Text == "Oculta")
	{
		VerContrasena->BackColor = Color::FromArgb(0, 255, 0);
		eEstadoVerContrasena->Text = "Ver";
		Contrasena->PasswordChar = false;
		Contrasena->Focus();
	}
	else
	{
		VerContrasena->BackColor = Color::FromArgb(255, 0, 0);
		eEstadoVerContrasena->Text = "Oculta";
		Contrasena->PasswordChar = '*';
		Contrasena->Focus();

	}
}

	  MyForm(System::Windows::Forms::Form^ frm1)
	   {
		   MyForm1 = frm1;
		   InitializeComponent();

	   }

private: System::Windows::Forms::Form^ MyForm1;



private: System::Void BotonEntrar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	String^ NombreComp = gcnew String("");
	String^ NombreMinusc = gcnew String("");
	String^ Password = gcnew String("");
	NombreComp = Nombre->Text;
	NombreMinusc = NombreComp->ToLower();
	Password = Contrasena->Text;
	
	
	if (NombreMinusc == "francisco fumero") 
	{

		if (Password == "6214759")
		{
			//MessageBox::Show(L"Message Text", L"Message Box Title", 
			// MessageBoxButtons::OK, MessageBoxIcon::Information);

			MessageBox::Show("Bienbenido "+NombreComp,"Login Correcto",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
			
		}
	}
	else
	{
		MessageBox::Show("Nombre de usuario o contraseña\n" + "incorrectos intente de nuevo", "Datos no coinciden", MessageBoxButtons::OK, MessageBoxIcon::Error);
		MyForm::Hide();
		MyForm1::Show();
	}
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{

}
};
}
