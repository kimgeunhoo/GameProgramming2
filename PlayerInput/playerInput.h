#pragma once
#include <stdio.h>
#include <conio.h> // _getch()
#include <Windows.h> // _kbhit(), GetAsyncKeyState(VK_LEFT,RIGT,...)
#include <stdbool.h>

void GetInput(int* playerX, int* playerY);
void setCursorPos(int x, int y);
void setCursorVisible(bool enable);
