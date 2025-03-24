/*
	작성일 : 2025-03-21
	작성자 : 김근호
	주제   : 구조체로 게임 만들기
*/

/*
	포인터 - 주소를 이용 할 수 있다.
	1. 포인터 변수 선언하는 방법			int* numptr
	2. 변수로 부터 주소를 호출하는 방법		int num; &num;
	3. 주소에서 값을 참조하는 방법			*numptr;
*/

/*
	포인터와 연산자 
	포인터의 덧셈 경과 : 자료형의 크기만큼 증가한다.
	배열			   : (포인터 주소 + 1) 1번째 주소를 호출하는 것
*/

/*
	구조체 : 사용자 정의 자료형
*/

/*
	게임에 사용할 함수 구현
	Player - Item - Enemy
*/

/*
	기능
	1. 이동을 구현한다.
	2. 상호작용 구현.
*/

#include "Player.h"

int main() {
	// 플레이어의 기본 데이터 설정

	COORD playerPos = { 0, 0 };
	Player player = {"모험가", playerPos}; // 이름, 좌표

	COORD itemAPos = { 6, 5 };
	Item itemA = { "롱소드", itemAPos, false }; // 이름, 좌표, 보유 유무

	COORD itemBPos = { 10, 10 };
	Item itemB = { "숏소드", itemAPos, false };

	Item GameItems[2] = { itemA, itemB };		// item 배열을 가져와서 사용하는 함수



	while (true) 
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);

		GoXYCOORD(itemAPos);
		printf("◎");
		
		GoXYCOORD(itemBPos);
		printf("◎");

		InteractWithItem(&player, &GameItems[0]);	// 주소에 데이터가 변경되지 않았다. -> Call by Value, Ref
		InteractWithItem(&player, &GameItems[1]);	// 주소에 데이터가 변경되지 않았다. -> Call by Value, Ref
		//ShowPlayerItemInfo(&itemA);
		ShowPlayerAllItemInfo(GameItems, 2);

		// 배열을 매개변수로 받아와서 각각의 데이터에 접근한다.
		
		Sleep(100);
	}
}