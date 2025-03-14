// 무엇을 만들 것인가?
#include "playerInput.h"

int main() {
	int playerX = 3;
	int playerY = 3;
	
	while (1)  // 프로그램 계속 실행 시키기
	{
		setCursorVisible(false);
		setCursorPos(playerX, playerY);
		printf("♥");
		GetInput(&playerX, &playerY);
		
	}
}