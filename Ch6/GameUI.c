#include "GameUI.h"

/*
	구현 목표 : 플레이어의 좌표를 키보드로 부터 입력받아 실행되는 함수를 만들기

	1. 플레이어 좌표 정의 - 구조체로 정의
	2. 키보드를 입력받는 함수 - 플레이어 좌표를 매개 변수로 받는 함수 Player*
	3. 커서 위치를 변경해서 UI를 출력한다.
*/

void GameStart()
{

	// 플레이어의 정보를 입력
	POS playerPos = { 0,0 };
	Player myPlayer = { "플레이어", playerPos };
	POSItem itemPos = { 24, 10 };
	Item weaponItem = {"1", "롱소드", itemPos, "1", "5"};

	while (true) 
	{
		// 1. 유저의 입력을 받는다.
		// 2. 변경된 정보를 화면에 출력한다.
		// 3. sleep(100)

		InputPlayerKey(&myPlayer);
		ShowPlayerInfo(&myPlayer);
		Sleep(100);

	}
}

void InputPlayerKey(Player* playerPtr)
{
	if (_kbhit) // 키보드 입력 했을때 true, false
	{
		if (GetAsyncKeyState(VK_LEFT)) // 키보드의 왼쪽 키 x좌표를 -1
		{
			// playerPtr 사용해서 x 좌표를 -1
			playerPtr->playerPos.posX -= 2;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			// playerPtr 사용해서 x 좌표를 +1
			playerPtr->playerPos.posX += 2;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			// playerPtr 사용해서 Y 좌표를 -1
			playerPtr->playerPos.posY -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->playerPos.posY += 1;
			// playerPtr 사용해서 Y 좌표를 +1
		}
	}
}

void GotoXY(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void ShowPlayerInfo(const Player* playerPtr, Item* itemPtr)
{
	GotoXY(50, 1);				// x 오른쪽 50, y 아래 1
	printf("플레이어의 정보");

	GotoXY(50, 3);
	printf("플레이어의 이름 : %s", playerPtr->playerName);

	GotoXY(50, 4);
	printf("플레이어의 위치 : {%d, %d}", playerPtr->playerPos.posX, playerPtr->playerPos.posY);

	GotoXY(playerPtr->playerPos.posX, playerPtr->playerPos.posY);
	printf("★");
	if (playerPtr->playerPos.posX, playerPtr->playerPos.posY && itemPtr->itemPos.posX, itemPtr->itemPos.posY) {
		GotoXY(50, 6);
		printf("무기 획득: {%s} \n 무기 레벨: {%d} \n 무기 공격력: {%d}", itemPtr->itemName, itemPtr->itemLevel, itemPtr->itemAttackPt);
	}

}
