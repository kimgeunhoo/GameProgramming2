#include "ConsoleGame.h"
#include "Stage.h"

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

	// 플레이어의 다음 위치가 특정 문자인 경우
	
	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{
		system("cls");	// 전체 화면 지우기
		ShowStage(Stage2, stagePos2); // 선택한 화면 출력한다.
		GoToXY(7+37, 21); // 커서 위치를 이동한다.
		printf("♥");	// 플레이어 출력
	}

	// 플레이어의 위치를 이동
	while (true) 
	{
		if (_kbhit) {
			GoToXY(playerX, playerY);
			printf("  ");
			// 화살표의 입력을 인식시켜야 함

			if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
			{
				playerX += 1;
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
			{
				playerX += 1;
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 왼쪽
			{
				playerX += 1;
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 오른쪽
			{
				playerX += 1;	
			}

			else
			{
				// 그 자리 그대로
			}
		}
	}
}