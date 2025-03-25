#pragma once


/*
	1. 2차원 배열을 많이 사용하는 것
	2. 구조체 안에 이차원 배열을 포함시켜서 호출한다.
*/

/*
	직접 맵 만들기 벽, 몬스터, 아이템, 출구
	int wallX, wallY, playerX, playerY
	map1[세로][가로] == '벽' --> 무엇인가 해라
	_kbhit GetAsyncKeyState(VK_);
	map1[새 플레이어의 Y][새 플레이어의 X] = 벽 => 해당 코드 실행 X
	옆에 벽이 있다 BOOL, 각 벽을 구조체
*/

// (1) 스테이지 2개 만들기
// (2) stage 구조체 선언, 이름
// (3) 함수 만들어서 2차원 배열을 호출

// 세로 20 가로 20

// 예시안

#define STAGE_COL 5
#define STAGE_ROW 6
#include <stdio.h>

// 이름.name = "숲"

/*
	1차원 배열 선언 방법 : 타입* 이름;
	2차원 배열 선언 방법 : [2][4],	[4][2] 다르기 때문에 아래처럼 표현할 수 없다.
	포인터의 배열 선언 방법 : 타입** 이름; -> 포인터의 배열	char* name[10]

	2차원 배열 어떻게 표현하는가? 세로 : 주소(포인터) 가로 : 배열
	char (*map)[가로의 길이];

*/
typedef struct _STAGE
{
	char* name;
	char(*map)[STAGE_ROW+1];
	// 2차원 배열을 저장할 수 있는 타입 선언
}STAGE;

void SetStage(STAGE* stagePtr, int index);

// 실습안

#define MAP1_COL 24
#define MAP1_ROW 20

typedef struct {
	char wall;
	char spike;
}StMap;

void StageMap1();


