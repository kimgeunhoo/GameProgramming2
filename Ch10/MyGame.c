#include "MyGame.h"

char Sword[ITEM_HEIGHT][ITEM_WIDTH + 1] =
{
	"     *     ",
	"     *     ",
	"  *******  ",
	"    ***    ",
	"    ***    ",
	"    ***    ",
	"    ***    ",
	"    ***    ",
	"    ***    ",
	"    ***    ",
	"     *     ",
	"           ",
};

void ShowItem(char(*item)[STAGE_WIDTH + 1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		GoToXY(pos.X, pos.Y + i);
		printf("%s", item[i]);
	}

}

