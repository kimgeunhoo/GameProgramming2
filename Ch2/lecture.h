#pragma once
#include <stdio.h>

void ShowLecture();

void Swap(int* a, int* b); // �Լ��� ���ڿ� � ��쿡 �����͸� ����ؾ� �ұ�?

void IncreaseScore(int* score, int points); // score �ּ�, points ��

void IncreaseTemp(int score, int points);

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight);

// �Լ� �̸� ��������

void GetItem(int* item);

void PlayerMoveLocation(float* playerX, float* playerY, float* playerZ);

void SwapLocation(float* LocA, float* LocB);

