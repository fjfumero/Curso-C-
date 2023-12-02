#include "MyForm.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ExamenFinalC::MyForm form;
	Application::Run(% form);

	array<String^>^ Titulo = gcnew array<String^>(3);

}

