#include "IntroMenu.h"
#include "coordinate.h"
#include "border.h"

void IntroMenu()
{
	system("cls");
	setCursorVisible(true);
	printMainStage();
	setCursorPos(30, 18);
	printf("1_ 게임 시작\n");
	setCursorPos(30, 19);
	printf("2_ 게임 종료\n");
}
