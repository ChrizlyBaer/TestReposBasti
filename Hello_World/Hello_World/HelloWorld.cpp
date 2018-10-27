#include <Windows.h>
#include <stdio.h>

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {

}

int WINAPI WinMain( HINSTANCE hInst, HINSTANCE hPrev, LPSTR szCmdLine, int iCmdShow) {
	
	WNDCLASS wc;

	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);


	return 0;
}