/*
	작성자: 김근호
	작성일: 2025-03-31
	주제  : File Stream & File Input outpot 파일 입출력
*/

/*
	파일을 생성하기 위한 단계
	1. 파일이 저장될 경로를 지정해준다.
	2. 어떤 파일을 생성할지 지정해준다.(확장자 ex) .txt .png 등)
	3. 파일을 열어서 데이터를 저장한다
*/

/*
	특정 환경체제에서 파일을 생성한다. 컴퓨터의 장치에 접근 해야한다.
*/
#define _CRT_SECURE_NO_WARNINGS // scanf_s버전을 사용해야 하는데, 안정성 문제
#include <stdio.h> // printf, scanf (콘솔 입출력)
				   // 파일 입출력, 파일 구조체
#include "FileHandler.h"

/*
	파일을 저장하는 함수
	fopen - 불러올 경로를 지정해준다. 어떻게 가져올 것인지 선택("r", "w", "a")
*/

/*
	유튜브 스트리밍
	- 스트림 : 어떤 행위를 연속적으로 실행하는 것
	- 버퍼   : 미리 미리 임시 공간을 부여해서 그 임시 데이터를 보여준다. 유튜브의 흰색 바 

	비트 스트림, 파일 스트림이 무엇인가?
	비트: 0, 1로 이루어진 단위, 바이트 : 파일의 기본 단위
	스트림을 연결해야 파일을 다룰 수 있다.
	fopen: 파일 스트림을 연결해주는 함수이다. 'w', 'r'
*/


// 캐릭터의 이름과 점수를 저장하는 구조체 생성


/*
	C:\Users\Administrator\Desktop\gameProgramming2\GameProgramming2\Ch11\이름.txt
	fopen("이름") 이 코드가 작성되고 있는 현재 주소를 반환한다.
	파일 이름 경로를 제어해보기
	폴더를 생성해서 데이터를 저장하고 싶다면, 폴더 이름\\파일이름.확장자
*/

/*
	File 구조체 사용하면 코드를 이용해서 데이터를 외부에 저장할 수 있다.
	File 형태의 주소를 연결해야 파일을 저장 또는 읽어올 수 있다.
	fopen(), fclose()

	fputs(); fprintf(); 파일 모드가 "w" 데이터를 저장할 수 있다.
	fgets(); fscanf(); 파일 모드가 "r" 데이터를 읽어 올 수 있다.

	"w" 모드를 선택하면 기존 데이터가 전부 삭제된다.
	"a" 모드를 선택하면 기존 데이터에 이어서 추가된다. (기존 랭킹에 새로운 점수가 등록될 수 있다.)
*/
int main()
{
	printf("파일 생성 및 입출력 구현\n");

	// 경로, 모드 선택

	FILE* fp = fopen("Example\\Example2.txt", "w");

	// 1. 데이터를 문자열로 직접 연결한 것
	fputs("BBB 100\n", fp);
	

	// 2. 변수를 불러와서 저장해야 한다.

	People people1 = {"CCC", 15};
	fprintf(fp, "%s %d\n", people1.Name, people1.age);


	// 3. 실습, 점수 구조체를 만들어서 메모장에 저장
	// 4. 함수로 표현해볼 것 SaveScore
	Score myScore = { "DDD", 1000 };
	SaveScore(myScore.Name, myScore.score);

	printf("경로 안에 있는 파일을 읽어오기\n");
	fprintf(fp, "%s %d\n", myScore.Name, myScore.score);
	fclose(fp);
	FILE* fp2 = fopen("Example\\Example2.txt", "r");

	char name[4];
	int age;
	int maxNumber = 3;

	for (int i = 0; i < maxNumber; i++) {
		fscanf(fp, "%s %d", name, &age);
		printf("이름: %s, 점수: %d\n", name, age);
	}
	
	fclose(fp2);

	printf("함수로 데이터 저장하기\n");

	// 1. 변수를 미리 만들기
	// 2. scanf 데이터를 입력 후 해당 데이터를 저장하기
	// 3. 함수로 만들기

	char mName[4] = "FFF";
	int mScore = 2500;
	SaveScore(mName, mScore);
	LoadRank();
	
}