#include <stdio.h>
#include <stdbool.h>
#include "lecture.h"
/*
	�ۼ���: 2025-03-13
	�ۼ���: ���ȣ
	����  : �����Ϳ� ���� ����
*/

/*
	�����Ͱ� �����ΰ�?
	�����ʹ� �ּ��̴�
	������ ���� : � �����͸� �����ϴ°�, �������� ũ��� ��� �Ǵ°�?
	��ǻ���� ���� : �̸����� ������ ȣ���Ѵ�. �ּҸ� ����Ѵ�.

*/

/*
	������ ����
	int number; number ������ ���� ������ �� �ִ�. number�� �ּҸ� ���� �ִ�.
	�ּ� �����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number;
	������ �� : �ּ� �����ڴ� ������ ����ǰ� �� ���Ŀ� ����ؾ� �Ѵ�.

	������ ������ ������ �� ����ϴ� ��ȣ
	������ ������ : int* pointerNumber;
	������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��ȣ
	������ ������ : *pointerNumber
*/

/*
	�����͸� ��� ����ϸ� ������?
	
	��ǻ�� �ȿ� �޸𸮸� �����ϴ� ����. �޸� �ּҷ� ������ �ϰ� �־���.
	�ּҸ� �˰� ������ ���� ��𼭳� ���� ���� �� �� �ִ�.

	- ����? ������ ����� �ΰ� ����� �߾�� �Ѵ�. ���α׷� ���� �߿� �޸𸮸� �Ҵ��ϰ� ����ϴ� ���
	- ���? �Լ����� ����� ���� �ܺο� ������ �ȵȴ�. Call By Reference


*/

/*
	����
	��ǻ���� �ּ� ��� ���
	1. ������ ������ �����ϴ� ��� int* ������ ���� �̸�;
	2. ������ ���� �ּҸ� �������� ��� - �ּ� ������ int_number = 10; &number;
	3. �ּҷ� ���� ���� �������� ��� int* numptr;	*numPtr
*/

void CallValue(int number) {
	number = 100;
}

void CallReference(int* numberPtr) {
	//		|-Value				'='	R-Value
	//		int �ּ�				int
	//		16���� 0x01945ABC		10���� �Լ�
	// �� ���� Ÿ���� �ٸ���. ���������� ���� �������� �Ѵ�.
	*numberPtr = 100;
}

void SwapPreview(int numA, int numB) {
	int temp; // ������ �ӽ� ���� �Լ�
	temp = numA; // A temp�� �ӽ� ����
	numA = numB; // A�� B�� ������ ����
	numB = temp; // B�� A�� ������ ����

	// �̸� ���� ����
	printf("Swap �� �� �����\n");
	printf("����� numA�� ��: %d\n", numA);
	printf("����� numB�� ��: %d\n", numB);
}

// ���� ������ �Ŀ� �ܺο��� ������ ���� ������ �ְ� �ʹ�... �ּ��� ���� �����Ѵ�.
void Swap(int* numA, int* numB) {
	int* temp; // ������ �ӽ� ���� �Լ�
	temp = *numA; // A temp�� �ӽ� ����
	*numA = *numB; // A�� B�� ������ ����
	*numB = temp; // B�� A�� ������ ����

	// �̸� ���� ����
	printf("Swap �� �� �����\n");
	printf("����� numA�� ��: %d\n", numA);
	printf("����� numB�� ��: %d\n", numB);
}



int main() 
{
	printf("�����Ͱ� �����ΰ�?\n");


	// �ǽ� 1. �����Ͱ� �����ΰ�?
	int number = 10;
	printf("���� ���: %d\n", number);
	// ������ ���, �ּ�(�����)�� ��ġ�� ���� ������ ���Ѵ�
	printf("������ ���: %p\n", &number);

	// �ǽ� 2. ������ ���
	// *: ������ , &: �ּ� ������
	// ������ ����
	int* pointerNumber; // ������ ������ ����
	int num1 = 10; // ������ ���� - �ּҰ� ���� ����
	pointerNumber = &num1; // ������ ������ ������ �ּҰ��� ����
	printf("������ ���: %p\n", pointerNumber);
	printf("���� ���: %d\n", *pointerNumber);

	// ��������. ������ �ǽ�

	// float�� ������ �����ϰ� �� ������ �ּҸ� ����غ�����.
	// �ּҿ� ����ִ� ���� ������ �����ڷ� ȣ���غ�����.

	float floatNum = 0.1f;
	float* floatPointer = &floatNum;
	// �ּҰ� ���
	// 0.1���� ��������;
	printf("�ּҰ��� ����Ѵ� : %p\n", &floatNum);
	printf("�ּҷκ��� �� ����ϱ�: %.1f\n", *floatPointer);

	// double��
	double doubleNum = 0.3;
	double* doublePointer = &doubleNum;
	printf("�ּҰ��� ����Ѵ� : %p\n", &doubleNum);
	printf("�ּҷκ��� �� ����ϱ�: %.1f\n", *doublePointer);


	// bool�� ���� 204�� �������ִ�
	bool boolNum;
	bool* boolPointer = &boolNum;
	printf("�ּҰ��� ����Ѵ� : %p\n", &boolNum);
	printf("�� ����ϱ�: %d\n", boolNum);
	printf("�ּҷκ��� �� ����ϱ�: %d\n", *boolPointer);

	int num2 = 5;
	int* num2ptr = &num2;

	long long longNum = 100;
	long long* longNumptr = &longNum;
	printf("long long ����\n");
	printf("�ּҷκ��� �� ����ϱ�: %lld\n", *longNumptr);

	// char��
	char charNum = 'A';
	char* charPointer = &charNum;
	printf("�ּҰ��� ����Ѵ� : %p\n", &charNum);
	printf("�ּҷκ��� �� ����ϱ�: %c\n", *charPointer);

	
	// Call by Value, Call by Reference
	printf("CallValue, CallReference ����\n");
	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;
	CallValue(exampleNumber);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallReference ���� �� exampleNumberPtr�� �� : %d\n", *exampleNumberPtr);

	// swap�� �����غ���
	// num1 , num2 , temp
	// ������ ��ȭ�Ǿ� �ִ� ���¸� ����ϰ� �ʹ�.
	// �ѹ� �� �� �ֵ��� ��� �����ϱ�

	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	int weaponPower = weaponLv * weight + weaponBaseAP;

	int* saveWeaponData = &weaponPower;

	// 2���� ������� weaponPower ������ �� �� �ֽ��ϴ�.
	printf("���� ���ݷ� : %d\n", weaponPower);
	printf("���� ���ݷ� : %d\n", *saveWeaponData);

	// Swap ����

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);

	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

	Swap(&numA, &numB);

	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

}