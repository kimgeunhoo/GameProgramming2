/*
	작성일 : 2025-03-17
	작성자 : 김근호
	주제   : 메모리의 사용 (동적 할당)
*/

/*
	포인터 : 주소 다루는 방법
	포인터 변수 선언 : int* numptr;
	포인터 주소로부터 값을 변경 : *numptr;
	변수 : int num; &num; 변수에 할당된 주소를 가져 올 수 있다.
	
*/

/*
	함수 사용 - 매개 인자 위치에 값이 오느냐 주소가 오느냐
	void Function(int A, int B);
	플레이어의 위치(x, y 좌표) 값을 설정해주는 함수를 만들어 보기.
	개인 프로젝트에서 main 구현 코드를 함수로 바꾸기
*/

/*
	포인터 변수 형태를 사용해 본다.
	동적 할당 예시
	메모리를 직접 할당해 준다. 동적할당으로 할당된 메모리는 스스로 해제할 수 없다. == 메모리에 계속 남는다
	지역 변수 - 함수가 종료 될 때 같이 해제된다
	함수 안에서 동적 할당된 메모리는 해제되지 않는다.
	해당 메모리의 사용이 끝이나면 직접 수동으로 해제해 줘야 한다.
	free(포인터 변수)
	Inventory.h
*/

#include <stdio.h>
#include "input.h"
#include "Inventory.h"

int* inventoryPtr;

void SetMemoryAndValue(int amount)  // 주소를 하나 받아와서 주소의 값을 amount값으로 변경한다
{
	int* num1ptr = NULL;           // 정수(4바이트 정수 값을 저장하는 형태)

								  // numptr 메모리 변수(지역 변수), 주소의 값을 변경한다
	num1ptr = malloc(sizeof(int)); // 새로운 주소를 할당해줄 수 있지 않을까? memory allocate // malloc 함수

	*num1ptr = amount;

	printf("할당한 메모리 주소의 값: %p\n", num1ptr);
	printf("할당한 메모리의 값을 호출: %d\n", *num1ptr);

	free(num1ptr); // free()함수를 선언하지 않으면 num1ptr이 메모리 상에 게속 남게된다.
}

int main() {

	printf("Ch3\n");

	//InputExample();
	
	printf("포인터 변수 사용\n");

	int number = 1;
	int* numberptr = &number;

	//int* num1ptr = NULL; // 정수(4바이트 정수 값을 저장하는 형태)
	//num1ptr = malloc(sizeof(int)); // 새로운 주소를 할당해줄 수 있지 않을까? memory allocate // malloc 함수
	

	// 컴퓨터의 메모리 공간에값을 저장할 수 있는 주소를 할당했다.
	// 조건문, 특정 상황에서만 코드를 실행
	// 인벤토리 최대 크기 4칸( 정수를 4개 저장 )
	// 업그레이드 최대 크기 증가( 저장할 수 있는 정수의 개수가 늘어난다 )

	//*num1ptr = 10;

	SetMemoryAndValue(10);

	inventoryPtr = malloc(sizeof(int));
	*inventoryPtr = 0;

	// scanf
	// ctrl + k + s

	/*
		throw : 읽기 예외 발생. 변수를 넣어야 할 자리에 주소를 넣거나, 
		주소를 넣어야 할 자리에 변수를 넣으면 발생하는 예외
		함수 선언 후 사용시 꼭 주의할 것
		함수 선언( * 주소,
		ptr - 주소
	*/

	while (1)
	{
		printf("1_ 인벤토리의 수가 증가된다.\n");
		printf("2_ 현재 인벤토리의 크기를 열람한다.\n");

		int inputNumber = -1;
		printf("키를 입력해주세요.\n");
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			IncreaseInventoryCount(*inventoryPtr, 4);
		}
		else
		{
			ShowInventoryCount(*inventoryPtr);
		}
		
	}
	free(inventoryPtr);
	
}