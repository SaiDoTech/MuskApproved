#include <windows.h>
#include "AppWindow.h"


// App starts here
int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR lpCmdLine, int nCmdShow)
{
	// Rocket();
	// Platform(); 
	// FallControl(Rocket, Platform);
	// CreateAppWindow(hInstance, nCmdShow, FallControl);

	// There's a cycle, so.. start it last
	CreateAppWindow(hInstance, nCmdShow);
}