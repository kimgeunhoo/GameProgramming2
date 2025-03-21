#pragma once

#include <stdio.h> // 입출력 printf, scanf
#include <Windows.h> // 콘솔 관련 함수
#include <conio.h> // getch
#include <time.h> // time
#include <stdlib.h> // srand rand (랜덤함수)
#include <stdbool.h> // True, False

typedef struct
{
	char* playerName;
	COORD pos;

}Player;

typedef struct {
	char* itemName;
	COORD pos;
	BOOL* hasItem;
	// 이미지
}Item;

// 구조체 stage - 2차원 배열

void GetPlayerInput(Player* playerPtr);
void ShowPlayer(const Player* playerPtr);

void InteractWithItem(Player* playerPtr, Item* itemPtr);
void ShowPlayerItemInfo(Item* itemPtr);
void ShowPlayerAllItemInfo(Item* ItemArray, int length);


void ShowAllItem(Item itemArray[], int length);

void GoXY(int posX, int posY);
void GoXYCOORD(COORD pos);

// 두 개의 좌표를 매개변수로 받아와서 비교하는 함수

BOOL CompareCOORD(COORD pos1, COORD pos2);
