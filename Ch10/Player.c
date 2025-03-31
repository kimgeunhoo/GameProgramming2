#include "Player.h"

void GetPlayerName(Player player)
{
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	printf("플레이어의 이름을 작성해 주세요.\n");
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
	//GoToXY(playerX, playerY);
	//printf("♥");	// 플레이어 출력
	//Sleep(50);

}


void SetPlayerRace(Player* playerPtr) 
{
	printf("플레이어의 종족을 선택해 주세요.\n");
	printf("1_Human 2_ORC 3_TROLL\n");
	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	switch (inputNumber)
	{
	case 1:
		playerPtr->race = HUMAN;
		return;
	case 2:
		playerPtr->race = ORC;
		return;
	case 3:
		playerPtr->race = TROLL;
		return;
	default:
		return;
		SetPlayerRace(playerPtr);
	}
	
}

void SetPlayer(Player* playerPtr)
{
	SetPlayerName(playerPtr);
	SetPlayerRace(playerPtr);

	printf("플레이어 설정이 완료되었습니다.\n진행하려면 아무 버튼이나 눌러주세요.\n");
	_getch();
	system("cls");
}


void ShowPlayerInfo(Player* playerPtr, COORD uiPos)
{
	GoToXY(uiPos.X, uiPos.Y);
	printf("플레이어의 정보");
	GoToXY(uiPos.X, uiPos.Y + 1);
	printf("이름 : %s", playerPtr->name);
	GoToXY(uiPos.X, uiPos.Y + 2);
	printf("좌표 : [%d,%d]", playerPtr->pos.X, playerPtr->pos.Y);
	GoToXY(uiPos.X, uiPos.Y + 3);
	printf("종족에 해당하는 숫자 출력 (1:HUMAN,2:ORC,3:TROLL) %d", playerPtr->race);
}

