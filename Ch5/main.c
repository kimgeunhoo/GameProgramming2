/*
	작성일 : 2025-03-19
	작성자 : 김근호
	주제   : 구조체에 대한 이해
*/

/*
	지난 시간 복습 : 배열과 포인터
		| 비교				      | 배열           | 포인터             |
		| ----				      | ----		   | ------             |
		| 이름이 존재하는가?      |	  O   		   |    O               |
		| 무엇을 저장하는가?      |   시작 주소    |    주소            |
		| 주소값이 변경 가능한가? |   X            |    O               |
*/

/*
	상수 포인터
	const 
*/

#include <stdio.h>
#include "Struct.h"

// array주소의 값을 변경하지 말아주시오
void ShowAllData(const int* array, int length) // 배열을 가져와서 데이터를 보고 싶다. 배열을 가져와서 값을 바꾸는 함수인가?
{
	for (int i = 0; i < length; i++) {
		//array[i] += 1;
		printf("%d ", array[i]);
	}
}

void ShowData(const int* num1ptr) // num1ptr 들어 있는 값을 변경 X
{ 
	int* rptr = num1ptr; // rptr, numptr 주소의 값을 저장
	*rptr += 2; // num1ptr에 들어있는 값이 변경된다.

	printf("%d \n", *rptr); // const 한정자가 다르다는 경고 발생
}

// Item에 이름을 출력하는 함수를 구현해보세요.
// 이름의 값은 변경되면 안된다.

void ShowItemData(const char* itemname) 
{
	// *itemname = "다른 이름"; itemname 접근해서 값을 변경하지 못한다.
	char* rptr = itemname;
	//rptr = 'rare';
	printf("아이템 이름 : %s\n", itemname);
	printf("아이템 등급 : %s\n", rptr);
}

int main() {

	int arr1[5] = { 0,1,2,3,4 };
	ShowAllData(arr1, 5);
	int m1 = 1;
	printf("\n");
	ShowData(&m1);
	
	char itemName1[10] = "Knife";
	ShowItemData(itemName1);

	printf("Ch5\n\n");

	printf("상수 예제\n");

	const int num1 = 10;  // num1 상수가 된다. const 값을 변경하는 것을 제한한다. (변경이 불가능하다는 소리는 아님)

	const int PI = 3.14; // 값을 고정시키고 싶다.

	int number1 = 2;
	int number2 = 3;
	const int* number1Ptr = &number1; // number1ptr 주소를 저장하는 변수에 number1의 주소를 저장한다.
	// *number1Ptr += 2;// 주소안에 들어 있는 값을 변경 에러 => 주소안의 값을 변경하지 마시오. 상수 포인터
	number1Ptr = &number2; // 주소 변경은 가능하다.

	int* const number2Ptr = &number2; // 주소를 변경하지 못하게 제한
	// number2Ptr = &number1; // 주소 변경 불가능
	*number2Ptr += 3; // 값은 변경 가능

	const int* const number3Ptr = &number2;

	// const pointer
	// 값만 변경할 수 있는 형태	// 주소만 변경할 수 있는 형태 // 값, 주소 둘다 변경 불가
	// 타입* const 이름         // const 타입* 이름           // const 타입* const 이름 

	printf("구조체 예제\n");

	StructExample();

}