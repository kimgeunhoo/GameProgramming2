#include "Item.h"

void ItemSet(Item* ItemPtr, int index)
{
	switch (index)
	{
	case 1:
		// 스테이지 1번을 선택한다. -> Stage1 가져온다.
		ItemPtr->itemImage = SwordImage;
		ItemPtr->atPoint = 4;
		ItemPtr->dfPoint = 1;
		ItemPtr->dulable = 10;
		ItemPtr->price = 50;
		break;
	case 2:		
		ItemPtr->itemImage = ShieldImage;
		ItemPtr->atPoint = 1;
		ItemPtr->dfPoint = 8;
		ItemPtr->dulable = 20;
		ItemPtr->price = 100;
		break;
	default:
		printf("잘못된 아이템 번호\n");
		break;
	}
}
