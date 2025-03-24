#include "Player.h"


// 1. 문자 주소
// 2. 구조체 -> 문자 주소 전달


void SetPlayerName(char* playerNamePtr)
{
	printf("플레이어의 이름을 입력해주세요\n");

	char input[50];

	scanf_s("%s", input, 50);

	// string.h

	strcpy_s(playerNamePtr, 50, input); // 저장될 문자열의 주소, 저장될 문자열의 크기, 가져올 문자열의 주소
	
}

void SetPlayer(Player* player, const char* name)
{
	// 예외 처리
	// 사용하는 사람이 실수하는 것을 방지
	if (player == NULL) 
	{
		printf("[경고] 플레이어에 주소를 입력해주세요.");
		return;
	}

	strcpy_s(player->name, NAMELENGTH, name);

}

void ShowPlayerInfo(Player* player)
{
	printf("플레이어의 이름 : %s\n", player->name);
}
