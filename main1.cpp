#include "main1.h"
using namespace System;
using namespace System::Windows::Forms;


int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DATADICTIONARY::main1 form;
	Application::Run(% form);
}

