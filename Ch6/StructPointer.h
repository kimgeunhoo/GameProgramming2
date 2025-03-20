#pragma once
#include <stdio.h>
#include <Windows.h>

// '플레이어', 이름, 좌표, 소유 아이템

typedef struct _POS 
{
	int posX;
	int posY;
}POS;


typedef struct _Player
{
	char* playerName; // "홍길동"
	POS  playerPos; // posX, posY
}Player;

void Ch6Example();

void ShowPlayerInfo1(Player player); // 24byte  => * 사용시 16byte

void ShowPlayerInfo2(const Player* playerPtr);

void ShowPlayerInfo3(const Player* playerPtr);

void ChangePlayerPos(Player* playerPtr);