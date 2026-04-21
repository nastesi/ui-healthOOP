#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    uihealth::MyForm form;
    Application::Run(% form);

    return 0;
}