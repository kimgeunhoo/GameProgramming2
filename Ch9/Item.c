#include "Item.h"

void ItemSet(Item* ItemPtr, int index)
{
	switch (index)
	{
	case 1:
		// 스테이지 1번을 선택한다. -> Stage1 가져온다.
		ItemPtr->itemImage = SwordImage;
		break;
	case 2:		
		ItemPtr->itemImage = ShieldImage;
		break;
	default:
		printf("잘못된 아이템 번호\n");
		break;
	}
}
