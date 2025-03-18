#include "item.h"
#define ITEMALLCOUNT 10


void ShowAllItemInfo()
{
	int itemCount[ITEMALLCOUNT] = { 1,2,3,4,5 };
	int itemIndexs[ITEMALLCOUNT] = { 1,2,3,4,5 };
	char* itemName[ITEMALLCOUNT] = { "AAA", "BBB", "CCC", "DDD", "EEE" };
	char* itemType[ITEMALLCOUNT] = { "장비 아이템", "소비 아이템", "기타 아이템", "설치 아이템", "유물 아이템" };
	int itemValue[ITEMALLCOUNT] = { 10, 5, 2, 8, 20 };
	char* itemRare[ITEMALLCOUNT] = { "일반", "고급", "희귀", "영웅", "전설" };
	printf("모든 아이템을 열람한다.\n");
	for (int i = 0; i < ITEMALLCOUNT; i++) {
		printf("아이템 번호 : %d 아이템 이름 : %s, 아이템 갯수: %d, 아이템 타입 : %s 아이템 가치 : %d, 아이템 등급: %s\n", 
			itemIndexs[i], itemName[i], itemCount[i], itemType[i], itemValue[i], itemRare[i]);
	}
}

// 아이템 이름 배열과 포인터를 이용해서 출력해보기
  
// const(상수) 포인터

// 아이템 이름
// 아이템 설명
// 1번 인덱스에 있는 아이템의 이름과 설명을 출력하는 기능 구현

void ItemExample()
{
	// 배열 타입으로 이름 선언
	char itemName[3] = {1, 2, 3};
	char itemDescribe[3] = {1, 2, 3};
	// 포인터 타입으로 이름 선언
	char* itemNamePtr = "Long Sword";
	char* itemDescribePtr = "A Long-edged Sword";

	//itemName[0] = *itemNamePtr;
	//itemDescribe[0] = *itemDescribePtr;

	printf("%d\n", itemName[0]);
	printf("%d\n", itemDescribe[0]);
	printf("%c\n", itemNamePtr[0]);
	printf("%c\n", itemDescribePtr[0]);
}
