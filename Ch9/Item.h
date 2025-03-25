#pragma once
#include <stdio.h>
// 아이템 구조체
// 1. 아이템 이름
// 2. 아이템 스탯 (공격력, 가격, 내구도, 방어력)...
// 3. 2차원 배열 

#define ITEM_COL 5
#define ITEM_ROW 6

char SwordImage[ITEM_COL][ITEM_ROW] =
{
	"  *  ",
	" *** ",
	" *** ",
	"*****",
	"  *  ",
};

char ShieldImage[ITEM_COL][ITEM_ROW] =
{
	"*****",
	"*   *",
	"*   *",
	"** **",
	"  *  ",
};

typedef struct {
	int atPoint;
	long price;
	int dfPoint;
	int dulable;
	char (*itemImage)[ITEM_ROW+1];
}Item;

void ItemSet(Item* ItemPtr, int index);