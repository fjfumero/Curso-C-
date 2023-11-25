#include "MyForm.h"
#include <fstream>
#include "msclr/marshal_cppstd.h"
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]


void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UsuarioContrasena::MyForm form;
	Application::Run(% form);
}

