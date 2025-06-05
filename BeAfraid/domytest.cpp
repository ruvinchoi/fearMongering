#include <Windows.h>
#include <tchar.h> 

int DisplayResourceNAMessageBox()
{
    int msgboxID = MessageBox(
        NULL,
        _T("Resource not available\nDo you want to try again?"),
        _T("NATURAL DISASTER IMMINENT!!!"),
        MB_ICONWARNING | MB_HELP
    );

    return msgboxID;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    DisplayResourceNAMessageBox(); 
    return 0;
}


