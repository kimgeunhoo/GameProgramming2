#include "MyString.h"

void ArrayExample()
{
	printf("1.문자 배열 예제 \n\n");

	char name1 = 'a', name2 = 'p', name3 = 'p', name4 = 'l', name5 = 'e';

	printf("%c%c%c%c%c\n", name1, name2, name3, name4, name5);

	char words[5] = { name1, name2, name3, name4, name5 };

	// 배열 : 주소 + 1

	for (int i = 0; i < 5; i++) {
		printf("%c", words[i]);
	}
	printf("\n\n");

	// 배열은 주소, 포인터 이용해서 표현 할 수 있나?

	printf("%s\n", "apple");
	printf("%p\n", "apple");

	// "apple" << 문법적으로 해석
	// %s char 배열의 주소를 가져오겠다.
	// "apple" - 주소로 호출하는 것

	// 함수를 이용해서 문자 배열을 출력
	// scanf_s : 문자열을 출력할 때 최대 수를 전달해 줘야 한다.

	// 문자 배열의 주소를 변수로 저장하고 싶다
	
	char inputArray[6] = "apple"; // a,p,p,l,e,'\0'
	char* inputWord = inputArray;
	printf("단어를 입력해주세요.\n");
	scanf_s("%s", inputArray, 6); // 주소를 전달받아서 저장한다.
	printf("%s\n", inputArray);

	// 주인공으 이름을 설정해주세요

	// 플레이어 구조체 - char* 주소를 전달받고 저장

	char input[10];

	printf("주인공의 이름을 입력해주세요.\n");
	scanf_s("%s", input, 10);

	char* playerName = input; // 문자열 복사

	printf("%s\n", playerName);


}
