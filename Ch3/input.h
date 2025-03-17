#pragma once
#include <stdio.h>
#include <Windows.h>

// 플레이어의 좌표
// 왼쪽 화살표키를 누르면 x좌표를 -1
void GetPlayerInput(int* playerX, int* playerY, int maxX);

void InputExample();