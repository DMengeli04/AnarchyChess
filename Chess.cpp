//
#include "Chess.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]



void main(array<String^>^ args) {

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Chess::Chess form;

    Application::Run(% form);
}