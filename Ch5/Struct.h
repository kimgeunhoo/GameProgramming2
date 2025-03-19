#pragma once

/*
	목표 : 아이템을 직접 정의해서 사용한다
	정수, 실수, 글자 표현하는 방법 - C언어
	아이템을 구현했다. ( 이름, 수량, 번호, 타입 ) #define ITEMCOUNT 5 등을 임시정의
	아이템이 많이 존재한다.
	구조체는 하나의 배열로 모든 아이템을 표현할 수 있다.
	아이템을 정의해서 정의한 데이터를 배열로 표현한다.
*/


/*
	구조체
	- Struct : 사용자가 직접 정의한 자료형
	- 왜 데이터를 직접 정의할까? (why)
*/

/*
	2차원 좌표 - int형 x좌표,int y좌표;
	int x;
	int y;
	항상 2개의 좌표로 이루어져 있다. 우리가 직접 좌표를 의미하는 자료형을 만들 수 없을까?
*/

/*
	1. 구조체 표현 방법  struct 이름 { int x, int y, int z } 
	2. 구조체 안에 구조체를 넣을 수 있을까?		원 : 원점, 반지름 원의 넓이, 호의 길이
*/

#include <stdio.h>

typedef struct Pos 
{
	int xPos;
	int yPos;
}Pos; // 간단히 사용할 이름 지정

/*
	구조체를 선언할 때 마다 struct 키워드를 붙여주는 것이 번거롭다.
	typedef 사용하면 ~~~~ 타입 이름을 () 타입 재정의 가능
	typedef struct 타입의 이름을 생략할 수 있다.
	만약 struct 타입 이름을 생략하면,struct Pos
*/

/*
	구조체를 이용해서 함수를 만드는 것
*/

typedef struct Circle		// 원점과 반지름으로 구성된 도형이다. => 원의 넓이와 호의 길이를 구할 수 있다.
{
	Pos origin;
	double radius;
}Circle;

void StructExample();

void CalculateCircleInfo(Circle circle);

// 플레이어의 정보를 출력하는 함수를 만들기. 좌표, 스탯, 아이템

typedef struct Player {
	char* playerName;
	// 1. 좌표
	Pos playerPos;
	// 2. 스탯
	int stat;
	// 3. 아이템
	char* item;
}Player;

void ShowPlayerCurrentPos(Player player);
void MovePlayer(Player player);
void ShowPlayerCurrentPos2(Player* player);