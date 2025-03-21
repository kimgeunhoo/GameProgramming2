#include "Player.h"

void GetPlayerInput(Player* playerPtr)
{
	if (_kbhit()) 
	{
		if (GetAsyncKeyState(VK_LEFT)) 
		{
			// player의 pos x값을 변경
			playerPtr->pos.X -= 2;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			// player의 pos x값을 변경
			playerPtr->pos.X += 2;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			// player의 pos x값을 변경
			playerPtr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			// player의 pos x값을 변경
			playerPtr->pos.Y += 1;
		}
		
	}
}

// Windows.h //

void ShowPlayer(const Player* playerPtr)
{
	// x, y 좌표로 이동해서 printf한다
	

	//GoXY(playerPtr->pos.X, playerPtr->pos.Y);
	GoXYCOORD(playerPtr->pos);
	printf("★");
}

void InteractWithItem(Player* playerPtr, Item* itemPtr)
{
	// player, Item 좌표 각각의 x,y 비교해서 두 좌표가 같으면 Item 안에 있는 HasItem True변경해주는 코드 작성

	// 1. player 주소로 부터 좌표를 가져온다. playerPtr->pos
	// 2. item 주소로 부터 좌표를 가져온다.	  itemPtr->pos

	if (CompareCOORD(playerPtr->pos, itemPtr->pos)) {
		itemPtr->hasItem = true;	
		
	}

	
	
}

void ShowPlayerItemInfo(Item* itemPtr)
{
	// 모든 아이템을 탐색해서 HasItemTrue인 녀석들만 정보를 보여줘
	if (itemPtr->hasItem) {
		GoXY(50, 10);
		printf("%s 아이템을 획득하였습니다. \n", itemPtr->itemName);
	}
}

void ShowPlayerAllItemInfo(Item* ItemArray, int length)
{
	for (int i = 0; i < length; i++) {

		//(ItemArray + i) // 현재 배열의 시작 주소에서 i 데이터 크기만큼 더해라
						//item. hasitem == true 실행
						// itemArray[i] , (itemArray + i
		if ((ItemArray + i)->hasItem == true) {
			GoXY(50, 10);
			printf("%s 아이템을 획득하였습니다. \n", (ItemArray + i)->itemName);
		}
		else {
			printf("%s 아이템 미보유 상태. \n", (ItemArray + i)->itemName);
		}
	}
}

void GoXY(int posX, int posY)
{
	COORD pos = { posX, posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// GoXY를 간력하게 표현
void GoXYCOORD(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

BOOL CompareCOORD(COORD pos1, COORD pos2)
{
	// pos1.x pos2.x 비교 - if
	// pos1.y pos2.y 비교 - if
	// 둘다 같으면 true - &&
	// 아니면 false - return true, false
	if (pos1.X == pos2.X && pos1.Y == pos2.Y) {
		return true;
	}
	else {
		return false;
	}	
}




