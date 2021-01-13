#include <windows.h>
#include "AppWindow.h"
#include "Rocket.h"
#include "FallControl.h"


// App starts here
int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR lpCmdLine, int nCmdShow)
{
	Rocket rocket = Rocket();
	IGameObject platform = IGameObject();

	FallControl gameLogic = FallControl(rocket, rocket, platform);

	// There's a cycle, so.. start it last
	CreateAppWindow(hInstance, nCmdShow, gameLogic);
}