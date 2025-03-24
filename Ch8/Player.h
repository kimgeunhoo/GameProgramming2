#pragma once


#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

// 구조체
// Player
// char name[이름의 최대 길이]

typedef struct 
{
	char name[NAMELENGTH];
}Player;

void SetPlayerName(char* playerNamePtr); // 플레이어 이름 정하기(주소를 전달해 줘야 함)

void SetPlayer(Player* player, const char* name); // Player*

void ShowPlayerInfo(Player* player);