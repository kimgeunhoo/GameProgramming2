#pragma once

#include "ConsoleGame.h"
#include "Player.h"

void GameStart();


































#define ITEM_WIDTH 11
#define ITEM_HEIGHT 12

char Sword[ITEM_HEIGHT][ITEM_WIDTH + 1];
// GetAsync키로 이동하는 것

// item.h
// item 2차원 배열을 가져와서 특정 좌표에 출력하기


typedef enum _GRADE {
	COMMON, UNCOMMON, RARE, UNIQUE
}GRADE;

typedef struct _Item {
	char ItemName;
	char(*item)[ITEM_WIDTH + 1];
	COORD pos;
	int atPoint;
	GRADE grade;
}Item;

void ShowItem(char(*item)[STAGE_WIDTH + 1], COORD pos);

// GotoXY

// 특정 좌표에 이미지 출력하기 - 함수

// 특별한 이벤트 발생 시 아이템 정보 출력함수 구현

// 문자를 입력받아서 조건문으로 비교 한 후, 이벤트 실행 scanf, _getch

// 특정 아이템을 획득 시, 메뉴 키 통해서 아이템 정보를 확인한다.
