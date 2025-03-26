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
		printf("다음 스테이지로 이동합니다. \n");
		return true;
	}
	else 
	{
		printf("이동 할 수 없습니다. \n");
		return false;
	}
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}