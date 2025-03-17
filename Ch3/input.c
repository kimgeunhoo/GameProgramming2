#include "input.h"

/*
	while(1)
	{
		if(_kbhit)(if(GetKeyState...))
	}
*/

void GetPlayerInput(int* playerX, int* playerY, int maxX)
{
	if (_kbhit()) {

		// xÁÂÇ¥
		if (GetAsyncKeyState(VK_LEFT)) 
		{
			// playerX ÁÂÇ¥¸¦ -2
			*playerX -= 2;
			if (*playerX <= 0) {
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT)) 
		{
			// playerX ÁÂÇ¥¸¦ +2
			*playerX += 2;
			if (*playerX >= maxX) {
				*playerX = maxX;
			}
		}

		// yÁÂÇ¥
		else if (GetAsyncKeyState(VK_UP))
		{
			// playerY ÁÂÇ¥¸¦ -1
			*playerY -= 1;
			if (*playerY <= 0) {
				*playerY = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			// playerY ÁÂÇ¥¸¦ +1
			*playerY += 1;
		
		}
	}
	
}

void InputExample()
{
	int playerX = 0;
	int playerY = 0;
	int maxX = 10;

	while (1)
	{
		GetPlayerInput(&playerX, &playerY, maxX);

		printf("X, Y ÁÂÇ¥: %d, %d\n", playerX, playerY);

		Sleep(100);
	}
}
