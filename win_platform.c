#include <windows.h>

int WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR lpCmdLine,
  int nShowCmd) {

	WNDCLASSA window_class = [0];
	UINT      style;
	WNDPROC   lpfnWndProc;
	int       cbClsExtra;
	int       cbWndExtra;
	HINSTANCE hInstance;
	HICON     hIcon;
	HCURSOR   hCursor;
	HBRUSH    hbrBackground;
	LPCSTR    lpszMenuName;
	LPCSTR    lpszClassName;

	RegisterClassA(
			const WNDCLASSA *lpWndClass
);
	HWND CreateWindowExA(
			DWORD	  dwExStyle,
			LPCSTR    lpClassName,
			LPCSTR    lpWindowName,
			DWORD     dwStyle,
			int       X,
			int       Y,
			int       nWidth,
			int       nHeight,
			HWND      hWndParent,
			HMENU     hMenu,
			HINSTANCE hInstance,
			LPVOID    lpParam
			);
	return 0;
}
