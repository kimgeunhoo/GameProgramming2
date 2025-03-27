#include "ConsoleGame.h"
#include "Stage.h"
#include "Player.h"
#include "MyGame.h"

/*
	플레이어가 Stage1 탈출구 위치에 도달하면 현재 Stage를 지우고, 다음 Stage2를 그린다.
*/

int main() 
{
	/*for (int i = 0; i < STAGE_HEIGHT; i++) 
	{
		printf("%s\n", Stage2[i]);
	}*/
	COORD stagePos1 = {7, 3};

	ShowStage(Stage1, stagePos1);

	COORD stagePos2 = { 37, 3 };

	// 플레이어의 위치를 표현하는 것
	int playerX = 8;
	int playerY = 21;
	GoToXY(playerX, playerY);
	printf("♥");

	
	// 스테이지에 포함된 문자를 출력하는 예시
	COORD tempPos = {1, 1};
	char tempChar = ReturnValueFromStage(Stage1, tempPos);
	printf("스테이지의 특정 좌표 문자 값 : %c\n", tempChar);
	
	// 2개의 구조체를 덧셈
	COORD tempPos1 = { 0, 2 };
	COORD tempPos2 = { 3, 4 };

	COORD tempResult = PlusCOORD(tempPos1, tempPos2);
	printf("두 구조체의 덧셈 값 : [%d, %d]", tempResult.X, tempResult.Y);

	// 플레이어의 구조체 함수를 사용 (1. 이름 설정)

	Player player;

	SetPlayerName(&player);
	GetPlayerName(player);

	// Enum 예제
	system("cls");
	COLOR currentColor = RED;
	SelectColor(currentColor);

	ShowPlayerInfo(&player);

	// 플레이어의 다음 위치가 특정 문자인 경우

	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{
		//system("cls");	// 전체 화면 지우기
		ShowStage(Stage2, stagePos2); // 선택한 화면 출력한다.
		GoToXY(7+37, 21); // 커서 위치를 이동한다.
		printf("♥");	// 플레이어 출력
	}

	COORD itemPos = { 80, 21 };
	ShowItem(Sword, itemPos);
	//플레이어의 위치를 이동

	while (true) 
	{
		if (_kbhit) {
			GoToXY(playerX, playerY);
			printf("  ");
			// 화살표의 입력을 인식시켜야 함

			if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
			{
				playerY -= 1;
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
			{
				playerY += 1;
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
			{
				playerX -= 1;
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
			{
				playerX += 1;	
			}

			else
			{
				// 그 자리 그대로
			}
			GoToXY(playerX, playerY);
			printf("♥");	// 플레이어 출력
			Sleep(50);
		}
	}
}