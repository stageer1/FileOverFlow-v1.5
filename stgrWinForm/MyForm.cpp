#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();

    DialogResult result = MessageBox::Show("This application can put a lot of stress on your computer, which will make it feel bad. Are you sure you want to launch?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

    if (result == DialogResult::Yes) {
        stgrWinForm::MyForm form;
        Application::Run(% form);
    }
    else {
        return 0;
    }
}
