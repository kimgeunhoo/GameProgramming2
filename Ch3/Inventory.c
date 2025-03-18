#include "Inventory.h"

int* inventoryPtr;

void ShowInventoryCount(int* inventory)
{
	if (inventory == NULL) 
	{
		printf("인벤토리의 주소가 할당되어 있지 않습니다.\n");
	}
	else 
	{
		printf("현재 인벤토리의 최대 수 : %d\n", *inventory);
	}
	
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	
	*inventory += increaseCount;
}

void InventoryExample()
{
	inventoryPtr = malloc(sizeof(int));
	*inventoryPtr = 0;
	ShowInventoryCount(inventoryPtr);

	free(inventoryPtr);
}
