#include "2DimensionArray.h"
#include "Stage.h"

char stage1[STAGE_COL][STAGE_ROW + 1] =
{
	{"######"},			// '\0'
	{"#    #"},
	{"#    #"},
	{"#    #"},
	{"######"}
};
	

char stage2[STAGE_COL][STAGE_ROW + 1] =
{
	{"######"},			// '\0'
	{"# #  #"},
	{"#  # #"},
	{"#    #"},
	{"######"}
};

void SetStage(STAGE* stagePtr, int index)
{
	switch (index) 
	{
		case 1:
			// 스테이지 1번을 선택한다. -> Stage1 가져온다.
			stagePtr->name = "호수";
			stagePtr->map = stage1;
			break;
		case 2:
			stagePtr->name = "대삼림";			//
			stagePtr->map = stage2;
			break;
		default:
			printf("잘못된 스테이지 번호\n");
			break;
	}
}


void StageMap1()
{
	char map1[MAP1_COL][MAP1_ROW] =
	{
		{"####################"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"#                  #"},
		{"####################"}
	};

}
