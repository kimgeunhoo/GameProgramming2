#include "lecture.h"

// 전역 변수

int GameScore = 0;

void ShowLecture()
{
	printf("강의 예제 1\n");

	// 변수를 선언하고 주소를 출력해보세요
	int num1 = 10;
	int* numptr = &num1;		// 주소		= 값

	printf("값을 출력 : %d\n", num1);
	printf("주소를 출력 : %p\n\n", numptr);

	printf("강의 실습 1\n");// 두 숫자의 값을 변경하는 함수를 구현한다.

	// int* 2개 필요하다. Int형 주소가 2개 필요하다.
	int numA = 5;
	int numB = 6;
	printf("numA의 값: %d, numB의 값: %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA의 값: %d, numB의 값: %d\n\n", numA, numB);

	printf("응용 예제 1\n"); // 점수 획득 시스템을 구현 // 특정 행동, 시간에 따라 증가
		
	IncreaseScore(&GameScore, 10);
	IncreaseTemp(GameScore, 10);
	printf("현재 점수 : %d\n\n", GameScore);

	printf("강의 실습 2\n");

	// 변수 3개 선언
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	// 무기 공격력을 증가시키는 함수
	// 같은 함수로 구현할 수 없을까?
	printf("가중치 : %.1f, 레벨 : %d, 기본 공격력 %d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("가중치 : %.1f, 레벨 : %d, 기본 공격력 %d\n\n", weight, weaponLv, baseAP);

	// 정리
	// 함수를 이용해서 값을 변경한다. 주소를 이용해서 값을 변경할 수 있다.
	// 언제 주소를 사용할까? 1. 외부의 값을 변경해야 할 때 2. 가져와야 할 데이터 타입이 너무 클 때 주소번호로 가져올 수 있다.(배열, 구조체에서 자세히 설명)

	// 아이템의 갯수를 증가시키는 함수 만들기
	int item = 30;
	printf("현재 아이템 갯수: %d\n", item);
	GetItem(&item);
	printf("현재 아이템 갯수: %d\n\n", item);


	// 플레이어의 좌표를 이동시키는 함수
	float playerX = 30.1f;
	float playerY = 50.5f;
	float playerZ = 10.4f;
	printf("플레이어의 위치: %.1f, %.1f, %.1f \n", playerX, playerY, playerZ);
	PlayerMoveLocation(&playerX, &playerY, &playerZ);
	printf("플레이어의 위치: %.1f, %.1f, %1.f \n\n", playerX, playerY, playerZ);
}

void Swap(int* a, int* b)
{
	int temp = *a; // a는 주소인데, 주소로부터 값을 가져오는 연산자(&) temp에 저장, 5숫자가 저장
	*a = *b; // *는 포인터 변수 = 값 : a의 주소에 값을 저장해라.
	*b = temp; // *b : b의 주소에 저장되어 있는 값을 불러와라
				// 1. (*b -> 6) 2. *a = 6 3. numA = 6
}

void IncreaseScore(int* score, int points)
{
	// GameScore 주소를 받아옴
	// *주소 변수 = 값; 외부에 있는 GameScore 값이 변경된다.

	*score += points;
	
}

void IncreaseTemp(int score, int points) {
	score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	// 레벨을 1 증가
	// 가중치를 특정 레벨에서 변경
	
	*weaponLv += 1;
	if (*weaponLv % 5 == 0) {
		*weight = *weight * 1.5f;
	}
	
	printf("현재 무기 공격력 : %.1f\n", (*weaponLv) * (*weight) * baseAP);
}

void GetItem(int* item)
{
	int getItem = 10;
	printf("아이템을 %d개 획득하였다.\n", getItem);
	*item += getItem;
}

void PlayerMoveLocation(float* playerX, float* playerY, float* playerZ)
{
	printf("플레이어가 X로 1, Y로 2만큼 이동\n");
	*playerX += 1;
	*playerY += 2;
}

void SwapLocation(float* LocA, float* LocB)
{
	printf("A와 B가 위치를 서로 바꾸었다.\n");
	int temp = *LocA; 
	*LocA = *LocB; 
	*LocB = temp;
}

