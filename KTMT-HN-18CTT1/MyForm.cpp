#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(cli::array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    KTMTHN18CTT1::MyForm form;
    Application::Run(% form);
}

