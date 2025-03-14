#include "lecture.h"

// ���� ����

int GameScore = 0;

void ShowLecture()
{
	printf("���� ���� 1\n");

	// ������ �����ϰ� �ּҸ� ����غ�����
	int num1 = 10;
	int* numptr = &num1;		// �ּ�		= ��

	printf("���� ��� : %d\n", num1);
	printf("�ּҸ� ��� : %p\n\n", numptr);

	printf("���� �ǽ� 1\n");// �� ������ ���� �����ϴ� �Լ��� �����Ѵ�.

	// int* 2�� �ʿ��ϴ�. Int�� �ּҰ� 2�� �ʿ��ϴ�.
	int numA = 5;
	int numB = 6;
	printf("numA�� ��: %d, numB�� ��: %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA�� ��: %d, numB�� ��: %d\n\n", numA, numB);

	printf("���� ���� 1\n"); // ���� ȹ�� �ý����� ���� // Ư�� �ൿ, �ð��� ���� ����
		
	IncreaseScore(&GameScore, 10);
	IncreaseTemp(GameScore, 10);
	printf("���� ���� : %d\n\n", GameScore);

	printf("���� �ǽ� 2\n");

	// ���� 3�� ����
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	// ���� ���ݷ��� ������Ű�� �Լ�
	// ���� �Լ��� ������ �� ������?
	printf("����ġ : %.1f, ���� : %d, �⺻ ���ݷ� %d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("����ġ : %.1f, ���� : %d, �⺻ ���ݷ� %d\n\n", weight, weaponLv, baseAP);

	// ����
	// �Լ��� �̿��ؼ� ���� �����Ѵ�. �ּҸ� �̿��ؼ� ���� ������ �� �ִ�.
	// ���� �ּҸ� ����ұ�? 1. �ܺ��� ���� �����ؾ� �� �� 2. �����;� �� ������ Ÿ���� �ʹ� Ŭ �� �ּҹ�ȣ�� ������ �� �ִ�.(�迭, ����ü���� �ڼ��� ����)

	// �������� ������ ������Ű�� �Լ� �����
	int item = 30;
	printf("���� ������ ����: %d\n", item);
	GetItem(&item);
	printf("���� ������ ����: %d\n\n", item);


	// �÷��̾��� ��ǥ�� �̵���Ű�� �Լ�
	float playerX = 30.1f;
	float playerY = 50.5f;
	float playerZ = 10.4f;
	printf("�÷��̾��� ��ġ: %.1f, %.1f, %.1f \n", playerX, playerY, playerZ);
	PlayerMoveLocation(&playerX, &playerY, &playerZ);
	printf("�÷��̾��� ��ġ: %.1f, %.1f, %1.f \n\n", playerX, playerY, playerZ);
}

void Swap(int* a, int* b)
{
	int temp = *a; // a�� �ּ��ε�, �ּҷκ��� ���� �������� ������(&) temp�� ����, 5���ڰ� ����
	*a = *b; // *�� ������ ���� = �� : a�� �ּҿ� ���� �����ض�.
	*b = temp; // *b : b�� �ּҿ� ����Ǿ� �ִ� ���� �ҷ��Ͷ�
				// 1. (*b -> 6) 2. *a = 6 3. numA = 6
}

void IncreaseScore(int* score, int points)
{
	// GameScore �ּҸ� �޾ƿ�
	// *�ּ� ���� = ��; �ܺο� �ִ� GameScore ���� ����ȴ�.

	*score += points;
	
}

void IncreaseTemp(int score, int points) {
	score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	// ������ 1 ����
	// ����ġ�� Ư�� �������� ����
	
	*weaponLv += 1;
	if (*weaponLv % 5 == 0) {
		*weight = *weight * 1.5f;
	}
	
	printf("���� ���� ���ݷ� : %.1f\n", (*weaponLv) * (*weight) * baseAP);
}

void GetItem(int* item)
{
	int getItem = 10;
	printf("�������� %d�� ȹ���Ͽ���.\n", getItem);
	*item += getItem;
}

void PlayerMoveLocation(float* playerX, float* playerY, float* playerZ)
{
	printf("�÷��̾ X�� 1, Y�� 2��ŭ �̵�\n");
	*playerX += 1;
	*playerY += 2;
}

void SwapLocation(float* LocA, float* LocB)
{
	printf("A�� B�� ��ġ�� ���� �ٲپ���.\n");
	int temp = *LocA; 
	*LocA = *LocB; 
	*LocB = temp;
}

