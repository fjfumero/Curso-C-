#pragma once

namespace LoginConVentanas {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ Numero1;
	private: System::Windows::Forms::TextBox^ Numero2;
	private: System::Windows::Forms::Label^ eSignoMas;
	private: System::Windows::Forms::Label^ eSignoIgual;
	private: System::Windows::Forms::TextBox^ ResultadoSuma;
	private: System::Windows::Forms::Button^ bSumar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Numero1 = (gcnew System::Windows::Forms::TextBox());
			this->Numero2 = (gcnew System::Windows::Forms::TextBox());
			this->eSignoMas = (gcnew System::Windows::Forms::Label());
			this->eSignoIgual = (gcnew System::Windows::Forms::Label());
			this->ResultadoSuma = (gcnew System::Windows::Forms::TextBox());
			this->bSumar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Escriba el resultado de la suma de: ";
			// 
			// Numero1
			// 
			this->Numero1->Location = System::Drawing::Point(198, 27);
			this->Numero1->Name = L"Numero1";
			this->Numero1->Size = System::Drawing::Size(51, 20);
			this->Numero1->TabIndex = 1;
			// 
			// Numero2
			// 
			this->Numero2->Location = System::Drawing::Point(274, 27);
			this->Numero2->Name = L"Numero2";
			this->Numero2->Size = System::Drawing::Size(51, 20);
			this->Numero2->TabIndex = 2;
			// 
			// eSignoMas
			// 
			this->eSignoMas->AutoSize = true;
			this->eSignoMas->Location = System::Drawing::Point(254, 30);
			this->eSignoMas->Name = L"eSignoMas";
			this->eSignoMas->Size = System::Drawing::Size(13, 13);
			this->eSignoMas->TabIndex = 3;
			this->eSignoMas->Text = L"+";
			// 
			// eSignoIgual
			// 
			this->eSignoIgual->AutoSize = true;
			this->eSignoIgual->Location = System::Drawing::Point(335, 30);
			this->eSignoIgual->Name = L"eSignoIgual";
			this->eSignoIgual->Size = System::Drawing::Size(13, 13);
			this->eSignoIgual->TabIndex = 4;
			this->eSignoIgual->Text = L"=";
			// 
			// ResultadoSuma
			// 
			this->ResultadoSuma->Location = System::Drawing::Point(354, 27);
			this->ResultadoSuma->Name = L"ResultadoSuma";
			this->ResultadoSuma->Size = System::Drawing::Size(51, 20);
			this->ResultadoSuma->TabIndex = 5;
			this->ResultadoSuma->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &MyForm::ResultadoSuma_PreviewKeyDown);
			// 
			// bSumar
			// 
			this->bSumar->Location = System::Drawing::Point(257, 99);
			this->bSumar->Name = L"bSumar";
			this->bSumar->Size = System::Drawing::Size(75, 23);
			this->bSumar->TabIndex = 6;
			this->bSumar->Text = L"Sumar";
			this->bSumar->UseVisualStyleBackColor = true;
			this->bSumar->Click += gcnew System::EventHandler(this, &MyForm::bSumar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(105, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 239);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bSumar);
			this->Controls->Add(this->ResultadoSuma);
			this->Controls->Add(this->eSignoIgual);
			this->Controls->Add(this->eSignoMas);
			this->Controls->Add(this->Numero2);
			this->Controls->Add(this->Numero1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Demuestre que usted es HUMANO";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Aleatorios() {
			int Resultado;
			Random^ aleatorio = gcnew Random();			//inicializamos la generacion de numero aleatorio
			int Temp1 = aleatorio->Next(1, (10 + 1));// generamos el primer numero aleatorio
			int Temp2 = aleatorio->Next(1, (10 + 1));
			int Temp3 = aleatorio->Next(1, 4);
			label2->Text = Convert::ToString(Temp3);
			label2->Visible = false;
			label3->Visible = false;
			label4->Visible = true;

			switch (Temp3)
			{
				case 1:
					Numero1->Text = Convert::ToString(Temp1);
					Numero2->Text = Convert::ToString(Temp2);
					ResultadoSuma->Text = "";
					Numero1->Enabled = false;
					Numero2->Enabled = false;
					ResultadoSuma->Enabled = true;
					Resultado = Temp1 + Temp2;
					ResultadoSuma->Focus();
					break;
				case 2:
					Numero1->Text = "";
					Numero2->Text = Convert::ToString(Temp2);
					ResultadoSuma->Text = Convert::ToString(Temp1+Temp2);
					Numero1->Enabled = true;
					Numero2->Enabled = false;
					ResultadoSuma->Enabled = false;
					Resultado = Temp1;
					Numero1->Focus();
					break;
				case 3:
					Numero1->Text = Convert::ToString(Temp1);
					Numero2->Text = "";
					ResultadoSuma->Text = Convert::ToString(Temp1 + Temp2);
					Numero1->Enabled = false;
					Numero2->Enabled = true;
					ResultadoSuma->Enabled = false;
					Resultado = Temp2;
					Numero2->Focus();
					break;
			default:
				break;
			}
			label3->Text = Convert::ToString(Resultado);

		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Aleatorios();
	}
	

	private: System::Void bSumar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int suma, a,b,c;
		a = Convert::ToInt32(label2->Text);
		b = Convert::ToInt32(label3->Text);
		c = Convert::ToInt32(label4->Text);
		for (int i = c; i > 1;) 
		{
			
			switch (a)
			{
			case 1:
				suma = Convert::ToInt32(ResultadoSuma->Text);
				break;
			case 2:
				suma = Convert::ToInt32(Numero1->Text);
				break;
			case3:
				suma = Convert::ToInt32(Numero2->Text);
				break;
			default:
				break;
			}
			
			

			if (b == suma)
			{
				MessageBox::Show("Bienbenido el resultado ingresado es correcto:\n", "Bienbenido", MessageBoxButtons::OK, MessageBoxIcon::Information);
				MyForm::Close();
			}
			else {
				MessageBox::Show("El resultado ingresado no es correcto:\n Le quedan "+ i + " intentos", "Denegado", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Numero1->Clear();
				Numero2->Clear();
				ResultadoSuma->Clear();
				
				Aleatorios();
				i--;
				label4->Text = Convert::ToString(i);
				break;
				
			}
			
		}
		{
			
		}	

	}
private: System::Void ResultadoSuma_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {
}

};
}