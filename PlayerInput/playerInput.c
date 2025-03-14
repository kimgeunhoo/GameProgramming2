#include "playerInput.h"

void GetInput(int* playerX, int* playerY) {
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))  // ���� ȭ��ǥ �Է� ��
		{
			playerX -= 2;
		}
		if (GetAsyncKeyState(VK_RIGHT))  // ������ ȭ��ǥ �Է� ��
		{
			playerX += 2;
		}
		if (GetAsyncKeyState(VK_UP))  // ���� ȭ��ǥ �Է� ��
		{
			playerY -= 1;
		}
		if (GetAsyncKeyState(VK_DOWN))  // �Ʒ��� ȭ��ǥ �Է� ��
		{
			playerY += 1;
		}
	}
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