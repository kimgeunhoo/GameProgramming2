#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

typedef struct _People
{
	char Name[4];
	int age;
}People;

typedef struct _Score
{
	char Name[4];
	int score;
}Score;


void SaveScore(char* name, int score);

void LoadRank();


