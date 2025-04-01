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
	fputs("a\naa", fp);

	// fprintf
	fprintf(fp, "%d %s %d", 1, "Alice", 100);
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

	char mstring[12];
	fgets(mstring ,12, fp2);

	printf("%s\n", mstring);

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

	while (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF) // 파일이 끝날 때 까지 읽어오기
	{
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
		printf("| %4d | %4d | %-16s |\n", rank[i].order, rank[i].score, rank[i].name);
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
