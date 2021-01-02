#include <windows.h>
#include "AppWindow.h"
#include "Rocket.h"


// App starts here
int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR lpCmdLine, int nCmdShow)
{
	
	// There's a cycle, so.. start it last
	CreateAppWindow(hInstance, nCmdShow);
}