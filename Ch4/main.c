/*
	작성일 : 2025-03-18
	작성자 : 김근호
	주제   : 포인터와 배열
*/

/*
	1. 배열(Array) : 왜? 언제 어떻게 사용하나?
	예시		   : 성적표, (국어, 영어, 수학)
	사용 목적      : 많은 자료를 간단하게 정리하기 위해서
*/

/*
	문자(charactor) - '단어', 'a''p''p''l''e' 컴퓨터 시점
*/

#include <stdio.h>
#include "item.h"
//#include <cstring>

int main() {
	printf("배열과 포인터\n");

	printf("배열 예시 : 성적표 만들기\n");
	int scoreA = 90; // 국
	int scoreB = 80; // 영 
	int scoreC = 70; // 수

	// 변수 : "데이터 타입"으로 선언한 저장소 - 메모리의 저장된 크기, 010101해석하는 방법, 시작하는 메모리 주소
	// 같은 타입의 변수를 하나의 이름으로 표현하는 방법

	int scores[3] = { 90, 80, 70 }; // 배열을 선언 : int 데이터 타입을 3개 지정하는 scores 이름의 변수

	scores[0]; // (scores 주소 + 0) == 자기 자신(1번째 주소)
	scores[1]; // (scores + 1) == 다음 주소(2번째 주소)
	scores[2];


	printf("성적을 순서대로 출력하시오\n");
	for (int i = 0; i < 3; i++) {

		printf("점수: %d\n", scores[i]);
	}

	//printf("국어: %d, 영어: %d, 수학: %d\n", scoreA, scoreB, scoreC);

	// 아이템 정의 
	// 아이템 이름(문자열), 아이템 갯수, 아이템 Index(번호)

	char itemname1[10] = "AAA"; // char A x 3  문자들의 배열 - 문자열
	int item1Count = 1;
	int itemIndex = 1;

	printf("아이템 1번의 정보\n");
	printf("아이템 번호 : %d 아이템 이름 : %s, 아이템 갯수: %d\n", itemIndex, itemname1, item1Count);

	// 아이템을 데이터 설정한다. (게임 고유 데이터, 세이브 데이터)


	ShowAllItemInfo();

	printf("문자열에 대한 이해\n\n");

	// 사과(apple) 문자열 출력하기

	char char1 = 'a';
	char char2 = 'p';
	char char3 = 'p';
	char char4 = 'l';
	char char5 = 'e';

	// appleis 띄어쓰기
	// apple is red
	// 문자열에서 마지막에 공백문자를 사용해서 이 문장이 끝났음을 알림
	printf("%c%c%c%c%c\n", char1, char2, char3, char4, char5);

	char chars[5] = {'a', 'p', 'p', 'l', 'e'};

	for (int i = 0; i < 5; i++) {
		printf("%c", chars[i]);
	}
	printf("\n\n");

	char scoreName[10] = "국어"; // 포인터의 의미가 숨겨져 있음		16진수 주소로 저장하고 있었다.

	printf("%s\n", scoreName); // string

	char scoreName2[10] = "English"; // 배열을 선언했을 때, 저장할 공간이 남으면 어떻게 되는가? int -> 0

	printf("%c\n", scoreName2[0]);
	printf("%c\n", scoreName2[1]);
	printf("%c\n", scoreName2[2]);
	printf("%c\n", scoreName2[3]);
	printf("%c\n", scoreName2[4]);
	printf("%c\n", scoreName2[5]);
	printf("%c\n", scoreName2[6]);

	// "국어" - 문자열		메모리 주소 | 국	| 어	|
	// 메모리의 첫 번째 주소를 알고, 메모리의 크기를 알면 글자를 한번에 출력할 수 있다.
	// "국" 문자 주소
	// 배열도 포인터 주소이다.

	char* scorePtr = "Math";
	printf("이름: %s\n", scorePtr);
	printf("%c", *(scorePtr + 0)); // Math		"M" 시작 주소 == scorePtr(1바이트)
	printf("%c", *(scorePtr + 1));
	printf("%c", *(scorePtr + 2));
	printf("%c", *(scorePtr + 3));
	printf("\n\n");

	// 왜 배열은 주소로 데이터를 저장하고 있을까?
	// 최대한의 효율로 메모리를 사용하기 위해서이다.
	// 주소 +1 2 3 4 5 ( 50단어 )

	int number[10]; // 4x10 할당	16바이트

	// 데이터의 이름을 표현하는 방법
	// 단어의 배열을 표현하는 방법

	char itemName[10] = "이름";
	char* itemNamePtr = "이름2";

	printf("%s, %s", itemName, itemNamePtr);
	printf("\n\n");

	ItemExample();
}