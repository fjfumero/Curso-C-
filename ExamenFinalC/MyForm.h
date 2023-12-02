#pragma once
#include "MyForm1.h"
//#include "MyForm2.h"

#include <stdlib.h>  // Incluimos librerias necearias
#include <iostream>  // esta libreria nos permite utilizar la funcion time 
#include <stdio.h>
#include <string>
#include <cstring>
#include <conio.h>
#include <locale.h>
#include <windows.h>

//using namespace std;  Al usar esta sentencia aqui me da un error el MYForm.cpp en el constructor





namespace ExamenFinalC {

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
	private: System::Windows::Forms::Label^ eLibro1;
	private: System::Windows::Forms::Label^ eLibro2;
	private: System::Windows::Forms::Label^ eLibro3;

	private: System::Windows::Forms::Button^ carrito;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->eLibro1 = (gcnew System::Windows::Forms::Label());
			this->eLibro2 = (gcnew System::Windows::Forms::Label());
			this->eLibro3 = (gcnew System::Windows::Forms::Label());
			this->carrito = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// eLibro1
			// 
			this->eLibro1->AutoSize = true;
			this->eLibro1->Location = System::Drawing::Point(78, 29);
			this->eLibro1->Name = L"eLibro1";
			this->eLibro1->Size = System::Drawing::Size(99, 13);
			this->eLibro1->TabIndex = 0;
			this->eLibro1->Text = L"La Catedral del Mar";
			this->eLibro1->Click += gcnew System::EventHandler(this, &MyForm::eLibro1_Click);
			// 
			// eLibro2
			// 
			this->eLibro2->AutoSize = true;
			this->eLibro2->Location = System::Drawing::Point(78, 54);
			this->eLibro2->Name = L"eLibro2";
			this->eLibro2->Size = System::Drawing::Size(105, 13);
			this->eLibro2->TabIndex = 1;
			this->eLibro2->Text = L"La sombra del viento";
			// 
			// eLibro3
			// 
			this->eLibro3->AutoSize = true;
			this->eLibro3->Location = System::Drawing::Point(78, 78);
			this->eLibro3->Name = L"eLibro3";
			this->eLibro3->Size = System::Drawing::Size(118, 13);
			this->eLibro3->TabIndex = 2;
			this->eLibro3->Text = L"Los Pilares de La Tierra";
			// 
			// carrito
			// 
			this->carrito->Location = System::Drawing::Point(81, 126);
			this->carrito->Name = L"carrito";
			this->carrito->Size = System::Drawing::Size(96, 45);
			this->carrito->TabIndex = 4;
			this->carrito->Text = L"Ver el Carrito";
			this->carrito->UseVisualStyleBackColor = true;
			this->carrito->Click += gcnew System::EventHandler(this, &MyForm::carrito_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(262, 201);
			this->Controls->Add(this->carrito);
			this->Controls->Add(this->eLibro3);
			this->Controls->Add(this->eLibro2);
			this->Controls->Add(this->eLibro1);
			this->Name = L"MyForm";
			this->Text = L"Libros disponibles";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void IdiomaEspanol() // Funcion para trabajar con caracteres en español
		{
			setlocale(LC_ALL, "ES_es.UTF-8");
			SetConsoleOutputCP(1252);
			SetConsoleCP(1252);
			return;
		}
#pragma endregion
		
		
		// Declaramos los array y llenamos datos en las variables
		public:
			void Test1(int x)
			{
				array<String^>^ Titulo= gcnew array<String^>(3);
				array<String^>^ Autor = gcnew array<String^>(3);
				array<int>^ Precio = gcnew array<int>(3);
				array<int>^ Cantidad = gcnew array<int>(3);
				
				Titulo[0] = "La Catedral del Mar";
				Autor[0] = "Ildefonso Falcones";
				Precio[0] = 19.80;
				Cantidad[0] = 0;

				Titulo[1] = "La sombra del viento";
				Autor[1] = "Carlos Ruiz Zafón";
				Precio[1] = 15.20;
				Cantidad[1] = 0;

				Titulo[2] = "Los Pilares de La Tierra";
				Autor[2] = "Carlos Ruiz Zafón";
				Precio[2] = 21.20;
				Cantidad[2] = 0;
				
			}
		

	private: System::Void eLibro1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
private: System::Void carrito_Click(System::Object^ sender, System::EventArgs^ e)
{
	// cerramos la ventana actual y abrimos la segunda
	MyForm1^ V = gcnew MyForm1();
	this->Hide();
	V->ShowDialog();
	this->Show();

}
};
}
