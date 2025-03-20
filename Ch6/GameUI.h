#pragma once

#include <stdio.h> // 입출력 printf, scanf
#include <Windows.h> // 콘솔 관련 함수
#include <conio.h> // getch
#include <time.h> // time
#include <stdlib.h> // srand rand (랜덤함수)
#include <stdbool.h> // True, False
#include "StructPointer.h" // 이미 만든 player 구조체 가져옴

/*
	아이템 구조체
	아이템 이름
	아이템의 좌표
	아이템 레벨
	아이템 공격력 강화보너스
*/

// 아이템의 좌표 플레이어의 좌표 비교해서 itemX, playerX 비교 둘다 같으면 -> 아이템 획득한다.

typedef struct _Item {
	int* itemNum;
	char* itemName;
	POSItem itemPos;
	int* itemLevel;
	int* itemAttackPt;
}Item;

typedef struct _POSItem {
	int posX;
	int posY;
}POSItem;


void GameStart();

void InputPlayerKey(Player* playerPtr); // 플레이어 입력 좌표

void GotoXY(int x, int y); // 이동 좌표

void ShowPlayerInfo(const Player* playerPtr);