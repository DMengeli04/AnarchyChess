//https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-gui
#include "MyForm.h"
using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Chess::MyForm form;

    Application::Run(% form);

}

