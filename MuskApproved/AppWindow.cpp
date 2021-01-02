#include <windows.h>

LRESULT CALLBACK wndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_DESTROY:
		{
			PostQuitMessage(EXIT_SUCCESS);
		}
		break;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

int CreateAppWindow(HINSTANCE hInstance, int nCmdShow)
{
	MSG msg{};
	HWND hwnd{};

	WNDCLASSEX wcex{ sizeof(WNDCLASSEX) };
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hbrBackground = nullptr;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wcex.hIconSm = wcex.hIcon;
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"MyClass";
	wcex.style = CS_VREDRAW | CS_HREDRAW;
	wcex.lpfnWndProc = wndProc;

	if (!RegisterClassEx(&wcex))
		return EXIT_FAILURE;

	if (hwnd = CreateWindow(wcex.lpszClassName,
		L"MuskApproved",
		(WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX),
		550, 200, 640, 480,
		nullptr, nullptr, wcex.hInstance, nullptr);
		hwnd == INVALID_HANDLE_VALUE)
		return EXIT_FAILURE;

	//SetTimer(hwnd, 1337, 1000 / 30, NULL);

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, nullptr, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return static_cast<int>(msg.wParam);
}