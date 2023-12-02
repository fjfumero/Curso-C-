#pragma once
#include "MyForm1.h"  //incluimos las librerias
#include <stdlib.h> 


namespace ExamenFinalC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ CantidadLibro1;
	protected:

	protected:

	private: System::Windows::Forms::Label^ eLibro3;
	private: System::Windows::Forms::Label^ eLibro2;
	private: System::Windows::Forms::Label^ eLibro1;
	private: System::Windows::Forms::NumericUpDown^ CantidadLibro3;
	private: System::Windows::Forms::NumericUpDown^ CantidadLibro2;
	private: System::Windows::Forms::Label^ eAutor3;
	private: System::Windows::Forms::Label^ eAutor2;
	private: System::Windows::Forms::Label^ eAutor1;
	private: System::Windows::Forms::Label^ ePrecioLibro3;
	private: System::Windows::Forms::Label^ ePrecioLibro2;
	private: System::Windows::Forms::Label^ ePrecioLibro1;
	private: System::Windows::Forms::TextBox^ TotalLibro1;
	private: System::Windows::Forms::TextBox^ TotalLibro2;
	private: System::Windows::Forms::TextBox^ TotalLibro3;
	private: System::Windows::Forms::TextBox^ SubTotalSinIva;
	private: System::Windows::Forms::TextBox^ SubTotalIva;
	private: System::Windows::Forms::TextBox^ TotalGeneral;
	private: System::Windows::Forms::Label^ eBaseImponible;
	private: System::Windows::Forms::Label^ eImpuesto;
	private: System::Windows::Forms::Label^ eTotal;
	private: System::Windows::Forms::Button^ Comprar;

	protected:

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
			this->CantidadLibro1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->eLibro3 = (gcnew System::Windows::Forms::Label());
			this->eLibro2 = (gcnew System::Windows::Forms::Label());
			this->eLibro1 = (gcnew System::Windows::Forms::Label());
			this->CantidadLibro3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->CantidadLibro2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->eAutor3 = (gcnew System::Windows::Forms::Label());
			this->eAutor2 = (gcnew System::Windows::Forms::Label());
			this->eAutor1 = (gcnew System::Windows::Forms::Label());
			this->ePrecioLibro3 = (gcnew System::Windows::Forms::Label());
			this->ePrecioLibro2 = (gcnew System::Windows::Forms::Label());
			this->ePrecioLibro1 = (gcnew System::Windows::Forms::Label());
			this->TotalLibro1 = (gcnew System::Windows::Forms::TextBox());
			this->TotalLibro2 = (gcnew System::Windows::Forms::TextBox());
			this->TotalLibro3 = (gcnew System::Windows::Forms::TextBox());
			this->SubTotalSinIva = (gcnew System::Windows::Forms::TextBox());
			this->SubTotalIva = (gcnew System::Windows::Forms::TextBox());
			this->TotalGeneral = (gcnew System::Windows::Forms::TextBox());
			this->eBaseImponible = (gcnew System::Windows::Forms::Label());
			this->eImpuesto = (gcnew System::Windows::Forms::Label());
			this->eTotal = (gcnew System::Windows::Forms::Label());
			this->Comprar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CantidadLibro1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CantidadLibro3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CantidadLibro2))->BeginInit();
			this->SuspendLayout();
			// 
			// CantidadLibro1
			// 
			this->CantidadLibro1->Location = System::Drawing::Point(347, 50);
			this->CantidadLibro1->Name = L"CantidadLibro1";
			this->CantidadLibro1->Size = System::Drawing::Size(46, 20);
			this->CantidadLibro1->TabIndex = 1;
			this->CantidadLibro1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->CantidadLibro1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::CantidadLibro1_ValueChanged);
			// 
			// eLibro3
			// 
			this->eLibro3->AutoSize = true;
			this->eLibro3->Location = System::Drawing::Point(30, 101);
			this->eLibro3->Name = L"eLibro3";
			this->eLibro3->Size = System::Drawing::Size(118, 13);
			this->eLibro3->TabIndex = 5;
			this->eLibro3->Text = L"Los Pilares de La Tierra";
			// 
			// eLibro2
			// 
			this->eLibro2->AutoSize = true;
			this->eLibro2->Location = System::Drawing::Point(30, 77);
			this->eLibro2->Name = L"eLibro2";
			this->eLibro2->Size = System::Drawing::Size(105, 13);
			this->eLibro2->TabIndex = 4;
			this->eLibro2->Text = L"La sombra del viento";
			// 
			// eLibro1
			// 
			this->eLibro1->AutoSize = true;
			this->eLibro1->Location = System::Drawing::Point(30, 52);
			this->eLibro1->Name = L"eLibro1";
			this->eLibro1->Size = System::Drawing::Size(99, 13);
			this->eLibro1->TabIndex = 3;
			this->eLibro1->Text = L"La Catedral del Mar";
			// 
			// CantidadLibro3
			// 
			this->CantidadLibro3->Location = System::Drawing::Point(347, 99);
			this->CantidadLibro3->Name = L"CantidadLibro3";
			this->CantidadLibro3->Size = System::Drawing::Size(46, 20);
			this->CantidadLibro3->TabIndex = 6;
			this->CantidadLibro3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->CantidadLibro3->ValueChanged += gcnew System::EventHandler(this, &MyForm1::CantidadLibro3_ValueChanged);
			// 
			// CantidadLibro2
			// 
			this->CantidadLibro2->Location = System::Drawing::Point(347, 75);
			this->CantidadLibro2->Name = L"CantidadLibro2";
			this->CantidadLibro2->Size = System::Drawing::Size(46, 20);
			this->CantidadLibro2->TabIndex = 7;
			this->CantidadLibro2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->CantidadLibro2->ValueChanged += gcnew System::EventHandler(this, &MyForm1::CantidadLibro2_ValueChanged);
			// 
			// eAutor3
			// 
			this->eAutor3->AutoSize = true;
			this->eAutor3->Location = System::Drawing::Point(177, 101);
			this->eAutor3->Name = L"eAutor3";
			this->eAutor3->Size = System::Drawing::Size(91, 13);
			this->eAutor3->TabIndex = 10;
			this->eAutor3->Text = L"Carlos Ruiz Zafón";
			// 
			// eAutor2
			// 
			this->eAutor2->AutoSize = true;
			this->eAutor2->Location = System::Drawing::Point(177, 77);
			this->eAutor2->Name = L"eAutor2";
			this->eAutor2->Size = System::Drawing::Size(91, 13);
			this->eAutor2->TabIndex = 9;
			this->eAutor2->Text = L"Carlos Ruiz Zafón";
			// 
			// eAutor1
			// 
			this->eAutor1->AutoSize = true;
			this->eAutor1->Location = System::Drawing::Point(177, 52);
			this->eAutor1->Name = L"eAutor1";
			this->eAutor1->Size = System::Drawing::Size(96, 13);
			this->eAutor1->TabIndex = 8;
			this->eAutor1->Text = L"Ildefonso Falcones";
			// 
			// ePrecioLibro3
			// 
			this->ePrecioLibro3->AutoSize = true;
			this->ePrecioLibro3->Location = System::Drawing::Point(303, 101);
			this->ePrecioLibro3->Name = L"ePrecioLibro3";
			this->ePrecioLibro3->Size = System::Drawing::Size(28, 13);
			this->ePrecioLibro3->TabIndex = 13;
			this->ePrecioLibro3->Text = L"21.2";
			// 
			// ePrecioLibro2
			// 
			this->ePrecioLibro2->AutoSize = true;
			this->ePrecioLibro2->Location = System::Drawing::Point(303, 77);
			this->ePrecioLibro2->Name = L"ePrecioLibro2";
			this->ePrecioLibro2->Size = System::Drawing::Size(28, 13);
			this->ePrecioLibro2->TabIndex = 12;
			this->ePrecioLibro2->Text = L"15.2";
			// 
			// ePrecioLibro1
			// 
			this->ePrecioLibro1->AutoSize = true;
			this->ePrecioLibro1->Location = System::Drawing::Point(303, 52);
			this->ePrecioLibro1->Name = L"ePrecioLibro1";
			this->ePrecioLibro1->Size = System::Drawing::Size(28, 13);
			this->ePrecioLibro1->TabIndex = 11;
			this->ePrecioLibro1->Text = L"19.8";
			// 
			// TotalLibro1
			// 
			this->TotalLibro1->Enabled = false;
			this->TotalLibro1->Location = System::Drawing::Point(416, 50);
			this->TotalLibro1->Name = L"TotalLibro1";
			this->TotalLibro1->Size = System::Drawing::Size(74, 20);
			this->TotalLibro1->TabIndex = 14;
			this->TotalLibro1->Text = L"0";
			this->TotalLibro1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TotalLibro2
			// 
			this->TotalLibro2->Enabled = false;
			this->TotalLibro2->Location = System::Drawing::Point(416, 75);
			this->TotalLibro2->Name = L"TotalLibro2";
			this->TotalLibro2->Size = System::Drawing::Size(74, 20);
			this->TotalLibro2->TabIndex = 15;
			this->TotalLibro2->Text = L"0";
			this->TotalLibro2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TotalLibro3
			// 
			this->TotalLibro3->Enabled = false;
			this->TotalLibro3->Location = System::Drawing::Point(416, 99);
			this->TotalLibro3->Name = L"TotalLibro3";
			this->TotalLibro3->Size = System::Drawing::Size(74, 20);
			this->TotalLibro3->TabIndex = 16;
			this->TotalLibro3->Text = L"0";
			this->TotalLibro3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// SubTotalSinIva
			// 
			this->SubTotalSinIva->Enabled = false;
			this->SubTotalSinIva->Location = System::Drawing::Point(416, 125);
			this->SubTotalSinIva->Name = L"SubTotalSinIva";
			this->SubTotalSinIva->Size = System::Drawing::Size(74, 20);
			this->SubTotalSinIva->TabIndex = 17;
			this->SubTotalSinIva->Text = L"0";
			this->SubTotalSinIva->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// SubTotalIva
			// 
			this->SubTotalIva->Enabled = false;
			this->SubTotalIva->Location = System::Drawing::Point(416, 151);
			this->SubTotalIva->Name = L"SubTotalIva";
			this->SubTotalIva->Size = System::Drawing::Size(74, 20);
			this->SubTotalIva->TabIndex = 18;
			this->SubTotalIva->Text = L"0";
			this->SubTotalIva->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TotalGeneral
			// 
			this->TotalGeneral->Enabled = false;
			this->TotalGeneral->Location = System::Drawing::Point(416, 180);
			this->TotalGeneral->Name = L"TotalGeneral";
			this->TotalGeneral->Size = System::Drawing::Size(74, 20);
			this->TotalGeneral->TabIndex = 19;
			this->TotalGeneral->Text = L"0";
			this->TotalGeneral->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// eBaseImponible
			// 
			this->eBaseImponible->AutoSize = true;
			this->eBaseImponible->Location = System::Drawing::Point(328, 128);
			this->eBaseImponible->Name = L"eBaseImponible";
			this->eBaseImponible->Size = System::Drawing::Size(82, 13);
			this->eBaseImponible->TabIndex = 20;
			this->eBaseImponible->Text = L"Base Imponible:";
			// 
			// eImpuesto
			// 
			this->eImpuesto->AutoSize = true;
			this->eImpuesto->Location = System::Drawing::Point(317, 154);
			this->eImpuesto->Name = L"eImpuesto";
			this->eImpuesto->Size = System::Drawing::Size(93, 13);
			this->eImpuesto->TabIndex = 21;
			this->eImpuesto->Text = L"Impuesto IVA 10%";
			// 
			// eTotal
			// 
			this->eTotal->AutoSize = true;
			this->eTotal->Location = System::Drawing::Point(328, 183);
			this->eTotal->Name = L"eTotal";
			this->eTotal->Size = System::Drawing::Size(71, 13);
			this->eTotal->TabIndex = 22;
			this->eTotal->Text = L"Total a Pagar";
			// 
			// Comprar
			// 
			this->Comprar->Location = System::Drawing::Point(124, 164);
			this->Comprar->Name = L"Comprar";
			this->Comprar->Size = System::Drawing::Size(110, 36);
			this->Comprar->TabIndex = 23;
			this->Comprar->Text = L"Comprar";
			this->Comprar->UseVisualStyleBackColor = true;
			this->Comprar->Click += gcnew System::EventHandler(this, &MyForm1::Comprar_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 212);
			this->Controls->Add(this->Comprar);
			this->Controls->Add(this->eTotal);
			this->Controls->Add(this->eImpuesto);
			this->Controls->Add(this->eBaseImponible);
			this->Controls->Add(this->TotalGeneral);
			this->Controls->Add(this->SubTotalIva);
			this->Controls->Add(this->SubTotalSinIva);
			this->Controls->Add(this->TotalLibro3);
			this->Controls->Add(this->TotalLibro2);
			this->Controls->Add(this->TotalLibro1);
			this->Controls->Add(this->ePrecioLibro3);
			this->Controls->Add(this->ePrecioLibro2);
			this->Controls->Add(this->ePrecioLibro1);
			this->Controls->Add(this->eAutor3);
			this->Controls->Add(this->eAutor2);
			this->Controls->Add(this->eAutor1);
			this->Controls->Add(this->CantidadLibro2);
			this->Controls->Add(this->CantidadLibro3);
			this->Controls->Add(this->eLibro3);
			this->Controls->Add(this->eLibro2);
			this->Controls->Add(this->eLibro1);
			this->Controls->Add(this->CantidadLibro1);
			this->Name = L"MyForm1";
			this->Text = L"Comprar Libro";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CantidadLibro1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CantidadLibro3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CantidadLibro2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// declaración de variables

		Double Tlibro1, Tlibro2, TLibro3, IvaL1, Ival2, IvaL3;
		Double Tbasel1, TbaseL2, TbaseL3;
		Double TIVA, TBase, TotalG;

		// tuve que generar otra vez la lista, porque al intentar vincular este formulario
		// con el otro me daba un error en el constructor de la ventana

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void CantidadLibro1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		
		Tlibro1 = (Convert::ToDouble(CantidadLibro1->Value)*19.8);
		IvaL1 = Tlibro1 * 0.1;
		Tbasel1 = Tlibro1 - IvaL1;
		TIVA = IvaL1 + Ival2 + IvaL3;
		TBase = Tbasel1 + TbaseL2 + TbaseL3;
		TotalLibro1->Text = Convert::ToString(Tlibro1);
		SubTotalSinIva->Text = Convert::ToString(TBase);
		SubTotalIva->Text = Convert::ToString(TIVA);
		TotalGeneral->Text = Convert::ToString(TIVA + TBase);

	}
private: System::Void CantidadLibro2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	Tlibro2 = (Convert::ToDouble(CantidadLibro2->Value) * 15.2);
	Ival2 = Tlibro2 * 0.1;
	TbaseL2 = Tlibro2 - Ival2;
	TIVA = IvaL1 + Ival2 + IvaL3;
	TBase = Tbasel1 + TbaseL2 + TbaseL3;
	TotalLibro2->Text = Convert::ToString(Tlibro2);
	SubTotalSinIva->Text = Convert::ToString(TBase);
	SubTotalIva->Text = Convert::ToString(TIVA);
	TotalGeneral->Text = Convert::ToString(TIVA + TBase);
}


private: System::Void CantidadLibro3_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	TLibro3 = (Convert::ToDouble(CantidadLibro3->Value) * 21.2);
	IvaL3 = TLibro3 * 0.1;
	TbaseL3 = TLibro3 - IvaL3;
	TIVA = IvaL1 + Ival2 + IvaL3;
	TBase = Tbasel1 + TbaseL2 + TbaseL3;
	TotalLibro3->Text = Convert::ToString(TLibro3);
	SubTotalSinIva->Text = Convert::ToString(TBase);
	SubTotalIva->Text = Convert::ToString(TIVA);
	TotalGeneral->Text = Convert::ToString(TIVA + TBase);
}
private: System::Void Comprar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//MessageBox::Show(L"Message Text", L"Message Box Title", MessageBoxButtons::OK, 
	// MessageBoxIcon::Information);

	System::Windows::Forms::DialogResult Result;
	Result = MessageBox::Show("Usted va a realizar la compra ?", "Comprar Libros", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	if (Result == System::Windows::Forms::DialogResult::No)
	{
		MessageBox::Show("Compra Cancelada", "Compra Cancelada", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		MessageBox::Show("Compra Aceptada\n por un monto de: \n" + TotalGeneral->Text + " Euros", "Compra Aceptada", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		exit(0);
	}

}
};
}
