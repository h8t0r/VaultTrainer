#include "MyForm.h"
#include <Windows.h>


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VaultTrainer::MyForm form;
	Application::Run(% form);
}