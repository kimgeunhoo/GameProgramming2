// ������ ���� ���ΰ�?
#include "playerInput.h"

int main() {
	int playerX = 3;
	int playerY = 3;
	
	while (1)  // ���α׷� ��� ���� ��Ű��
	{
		setCursorVisible(false);
		setCursorPos(playerX, playerY);
		printf("��");
		GetInput(&playerX, &playerY);
		
	}
}