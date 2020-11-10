#include "Menu1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab04DavidRodríguez1164619::Menu1 mainForm;
	Application::Run(% mainForm);
	return 0;

}

