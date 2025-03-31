#include "ConsoleGame.h"

void GoToXY(int x, int y) // 콘솔 창의 x, y좌표로 커서의 위치를 이동시킨다.
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
	
}

void ShowStage(char(*stage)[STAGE_WIDTH+1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT; i++) 
	{
		GoToXY(pos.X, pos.Y + i);
		printf("%s", stage[i]);
	}

}

char ReturnValueFromStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	char returnValue = ' ';

	returnValue = stage[pos.Y][pos.X];

	return returnValue;
}

BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter)
{
	char stageChar = ReturnValueFromStage(stage, playerPos);

	if (stageChar == exitCharacter) 
	{
		//GoToXY(60, 0);  // 디버깅용
		//printf("다음 스테이지로 이동합니다. \n");
		return true;
	}
	else 
	{
		//GoToXY(60, 0);
		//printf("이동 할 수 없습니다. \n");
		return false;
	}
}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{
	// 콘솔창을 지워주는 함수
	system("cls");
	// 다음 스테이지를 좌표를 이용해서 그린다.
	ShowStage(stage, stagePos); // 선택한 화면 출력한다.
	GoToXY(7 + 37, 21); // 커서 위치를 이동한다.
	printf("♥");	// 플레이어 출력
	

}

COORD PlusCOORD(COORD pos1, COORD pos2)
{
	SHORT newPosX = pos1.X + pos2.X;
	SHORT newPosY = pos1.Y + pos2.Y;

	COORD resultPos = { newPosX , newPosY};

	return resultPos;
}

COORD Wall(COORD pos1, COORD pos2)
{
	SHORT wallPosX = pos1.X;
	SHORT wallPosY = pos1.Y;

	COORD resultPos = { , };

	return resultPos;
}


// 아이템 끼리 더한다.
// 스테이지 2개.

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}