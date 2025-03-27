#include "Player.h"

void GetPlayerName(Player player)
{
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10); // '\0'

	(*playerPtr).name = inputName;
}

void SelectColor(COLOR color) 
{
	switch (color)
	{
	case RED:
		printf("RED 입니다.");
		break;
	case GREEN:
		printf("GREEN 입니다.");
		break;
	case BLUE:
		printf("BLUE 입니다.");
		break;
	}
}


void SetPlayerInput(Player* playerPtr)
{
	// 플레이어의 입력을 판별한다. 4방향 return
	// 방향 enum  0 : 왼쪽, 1 : 오른쪽, 2 : 위쪽, 3 : 아래쪽
	// enum 값

	if (_kbhit) {
		if (GetAsyncKeyState(VK_LEFT)) 
		{
			(*playerPtr).pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			(*playerPtr).pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			(*playerPtr).pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			(*playerPtr).pos.Y += 1;
		}
	}

}


void ShowPlayerInfo(Player* playerPtr)
{
	// 이름, 좌표, 종족

	Player tempPlayer = *playerPtr;

	if (playerPtr == NULL) 
	{
		return;
	}

	printf("%s ", playerPtr->name);
	// 아직 정의 안함
	//GetPlayerPos(*playerPtr);
	//GetPlayerRace(*playerPtr);

}
