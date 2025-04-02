#include "Rank.h"


void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	// fputc
	//fputc('a', fp);
	//fputc('\n', fp);
	//fputc('a', fp);
	//fputc('a', fp);
	// fputs
	//fputs("aaa", fp);

	// fprintf
	fprintf(fp, "%d %d %s", 1, 100, "Alice");
	fclose(fp);
}

void FileSave(const char* fileName, Rank rank[], int count)
{
	FILE* fptr = fopen(fileName, "w");

	for (int i = 0; i < count; i++) {
		fprintf(fptr, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);
	}

	fclose(fptr);
}

void FileLoadTemp()
{
	FILE* fp2 = fopen("Text.txt", "r");

	//char mstring[12];
	//fgets(mstring ,12, fp2);
	//printf("%s\n", mstring);

	int order = 0;
	int score = 0;

	char name[MAXLENGTH];

	fscanf(fp2, "%d %d %s", &order, &score, name);

	printf("순서 : %d, 점수: %d, 이름: %s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL) {
		printf("파일 출력 에러");
		return;
	}

	while (1) // 파일이 끝날 때 까지 읽어오기
	{
		if (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) == EOF) 
		{
			break;
		}
		count++;
	}

	fclose(fptr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	
	// count 횟수만큼 반복하는 코드가 필요하다.


	// 테두리 만들기
	printf("+------+------+------------------+\n");
	printf("| 순서 | 점수 | 이름             |\n");
	printf("+------+------+------------------+\n");


	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, rank[i].score, rank[i].name);
	}

	printf("+------+------+------------------+\n");

}

void AddRank(Rank rank[], int* order/*score라고 생각*/, const char* name, int score)
{
	if (*order < MAXPLAYER) {
		rank[*order].order = *order + 1;
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH -1] = '\0';
		(*order)++;
	}
	else {
		printf(" !최대 플레이어 저장 수를 초과하였습니다!\n");
	}
	
}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER) { // 값 호출해야 한다면 역참조* 주소참조는 &, 
		printf("새로운 플레이어의 이름을 입력하세요 : ");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요 : ");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore); // 이미 order 가 주소이기에 주소값 &를 안쓴다
	}
}

void DeleteRankData(Rank rank[], int* order, int index)
{
	// 1. order 배열의 순서 , -1 해줘야 한다 (0부터 시작)
	// 2. 지우고 싶은 순서를 전달해 줘야 한다. order이다.
	//

	if (index < 0)
	{
		printf("랭킹에 데이터가 등록되어 있지 않습니다.");
		return;
	}
	if (index >= *order) {
		printf("잘못된 인덱스 값\n");
		return;
	}
	for (int i = index; i < *order - 1; i++) { // 인덱스 번호를 선택하면 인덱스 번호 이하의 번호는 변화 x
		rank[i] = rank[i + 1];

	}
	(*order)--; // 데이터를 삭제했기 때문에 현재 데이터의 총 갯수를 -1

}

int FindMaxIndex(Rank rank[], int size)
{
	int index = 0;
	// Rank 데이터 안에서 정수가 가장 큰 인덱스를 찾아서 Index 변수에 저장하고 반환한다.
	//if (rank[0].score > rank[1].score); // 0인덱스 값이 더 크면?
	//if (rank[0].score > rank[2].score); // 임시로 저장할 변수가 필요하다.

	int maxValue = rank[0].score; // 처음 데이터를 읽어왔을 때 가장 큰수는 당연히 처음의 데이터

	for (int i = 1; i < size; i++) {
		if (rank[i].score > maxValue) {
			maxValue = rank[i].score;
			index = i;
		}
	}
	
	return index;
}
