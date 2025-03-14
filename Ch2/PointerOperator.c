#pragma once
#include "PointerOperator.h"

void PointerExample()
{
	// sizeof()

	int number1 = 0;
	int* number1ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumber1ptr = &doubleNumber1;

	printf("\n\n");
	printf("포인터 연산 예제\n");
	printf("int 데이터의 크기 : %d\n", sizeof(number1));
	printf("double 데이터의 크기 : %d\n", sizeof(doubleNumber1));

	// 정수의 크기가 4
	// 주소의 크기는 어떻게 될까?
	printf("Int 주소의 크기: %d\n", sizeof(number1ptr));
	printf("double  주소의 크기: %d\n", sizeof(doubleNumber1ptr));

	// x86(32비트) 주소의 크기 실행 시 4바이트
	// x64(64비트) 주소의 크기 실행 시 8바이트
	// 주소는 크기가 일정하다. 고정되어 있다. 동적 할당

	// 주소를 더해보자

	// 주소 자체를 더하기 vs 주소를 참조해서 더하기
	// 변수를 사용하는데, 컴퓨터가 어딘가에 기억하고 있습니다. 주소라는 이름으로 기억하고 있다.
	// 변수의 이름으로 값을 가져올 수 있고, 주소로부터 값을 가져올 수 도 있다.

	// 주소 형태로 가져오는 방식(참조 형식)		-  프로그램이 종료되거나, 직접 메모리를 해제하기 전까지 계속 남습니다. - 힙(heap) 영역
	// 변수의 이름으로 가져오는 방식(값 형식)   -  {} 코드 영역이 끝나는 시점에 메모리가 해제된다.					   - 스택(stack) 영역

	// 모든 코드를 항상 저장하면 안될까요?
	// 게임 점수를 일정 값만큼 증가시키는 코드를 작성하고 싶다.
	// 저장되어야할 데이터 : 게임 점수, 
	// 한 번만 사용하고 지우면 좋을 것 같다 : 게임 점수를 증가하고 싶은 가중치
	// 10분 실행된다. 

	// 모든 코드를 한 번만 사용하고 저장을 안하면?
	// GameScore 포인터로 변경해서 저장하는 기능을 구현 할 수 없게 된다.

	// Call by Value, Call by Reference 구별해서 사용해야 할 이유


	printf("number1ptr의 값을 출력 : %d\n", (*number1ptr) + 1);
	
	// 주소를 더해보자

	printf("주소를 출력해보자 \n");
	printf("현재 주소: %p\n", number1ptr);
	number1ptr = number1ptr + 1;
	// 주소를 더한다면? 정수 크기인 4만큼 차감
	printf("현재 주소: %p\n\n", number1ptr);

	printf("double 주소: %p\n", doubleNumber1ptr);
	doubleNumber1ptr = doubleNumber1ptr + 1;
	// 주소를 더한다면? 정수 크기인 4만큼 차감
	printf("double 주소: %p\n\n", doubleNumber1ptr);

	// 주소를 더하면, 주소의 값이 가지고 있는 크기 만큼 증가한다.
	// 배열과 포인터의 관계는 매우 중요(★)

	
}
