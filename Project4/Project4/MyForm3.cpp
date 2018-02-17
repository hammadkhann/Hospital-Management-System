#include "MyForm3.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project4::MyForm3 form;
	Application::Run(%form);
}
