#include "playerInput.h"

void GetInput(int* playerX, int* playerY) {

	setCursorPos(&playerX, &playerY);
	printf("♥");

	if (_kbhit())
	{
		setCursorVisible(false);
		setCursorPos(&playerX, &playerY);
		printf("  ");

		if (GetAsyncKeyState(VK_LEFT))  // 왼쪽 화살표 입력 시
		{
			playerX -= 2;
		}
		if (GetAsyncKeyState(VK_RIGHT))  // 오른쪽 화살표 입력 시
		{
			playerX += 2;
		}
		if (GetAsyncKeyState(VK_UP))  // 위쪽 화살표 입력 시
		{
			playerY -= 1;
		}
		if (GetAsyncKeyState(VK_DOWN))  // 아래쪽 화살표 입력 시
		{
			playerY += 1;
		}
		else 
		{

		}
		
	}
	setCursorPos(&playerX, &playerY);
	printf("♥");
	Sleep(50);
}

void setCursorPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}