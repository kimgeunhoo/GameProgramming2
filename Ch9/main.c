#include "2DimensionArray.h"
#include "Stage.h"
#include "Item.h"

int main() 
{
	// ShowLecture();
	STAGE stage1; // STAGE타입의 빈 상자
	SetStage(&stage1, 1);
	STAGE stage2; // STAGE타입의 빈 상자
	SetStage(&stage2, 2);
	printf("스테이지 이름 출력 : %s\n", stage1.name);
	printf("스테이지 이름 출력 : %s\n", stage2.name);
	printf("스테이지 1 맵 출력\n");
	
	for (int i = 0; i < STAGE_COL; i++) {
		printf("%s\n", stage1.map[i]);
	}
	

	printf("스테이지 2 맵 출력\n");

	for (int i = 0; i < STAGE_COL; i++) {
		printf("%s\n", stage2.map[i]);
	}

	printf("아이템 이미지 출력\n");

	Item sword;
	Item shield;
	ItemSet(&sword, 1);
	ItemSet(&shield, 2);
	for (int i = 0; i < ITEM_COL; i++) {
		printf("%s\n", sword.itemImage[i]);
	}
}