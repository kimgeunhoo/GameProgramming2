#pragma once
#include "PointerOperator.h"

void PointerExample()
{
	// sizeof()

	int number1 = 0;
	int* number1ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumber1ptr = &doubleNumber1;

	printf("\n\n");
	printf("������ ���� ����\n");
	printf("int �������� ũ�� : %d\n", sizeof(number1));
	printf("double �������� ũ�� : %d\n", sizeof(doubleNumber1));

	// ������ ũ�Ⱑ 4
	// �ּ��� ũ��� ��� �ɱ�?
	printf("Int �ּ��� ũ��: %d\n", sizeof(number1ptr));
	printf("double  �ּ��� ũ��: %d\n", sizeof(doubleNumber1ptr));

	// x86(32��Ʈ) �ּ��� ũ�� ���� �� 4����Ʈ
	// x64(64��Ʈ) �ּ��� ũ�� ���� �� 8����Ʈ
	// �ּҴ� ũ�Ⱑ �����ϴ�. �����Ǿ� �ִ�. ���� �Ҵ�

	// �ּҸ� ���غ���

	// �ּ� ��ü�� ���ϱ� vs �ּҸ� �����ؼ� ���ϱ�
	// ������ ����ϴµ�, ��ǻ�Ͱ� ��򰡿� ����ϰ� �ֽ��ϴ�. �ּҶ�� �̸����� ����ϰ� �ִ�.
	// ������ �̸����� ���� ������ �� �ְ�, �ּҷκ��� ���� ������ �� �� �ִ�.

	// �ּ� ���·� �������� ���(���� ����)		-  ���α׷��� ����ǰų�, ���� �޸𸮸� �����ϱ� ������ ��� �����ϴ�. - ��(heap) ����
	// ������ �̸����� �������� ���(�� ����)   -  {} �ڵ� ������ ������ ������ �޸𸮰� �����ȴ�.					   - ����(stack) ����

	// ��� �ڵ带 �׻� �����ϸ� �ȵɱ��?
	// ���� ������ ���� ����ŭ ������Ű�� �ڵ带 �ۼ��ϰ� �ʹ�.
	// ����Ǿ���� ������ : ���� ����, 
	// �� ���� ����ϰ� ����� ���� �� ���� : ���� ������ �����ϰ� ���� ����ġ
	// 10�� ����ȴ�. 

	// ��� �ڵ带 �� ���� ����ϰ� ������ ���ϸ�?
	// GameScore �����ͷ� �����ؼ� �����ϴ� ����� ���� �� �� ���� �ȴ�.

	// Call by Value, Call by Reference �����ؼ� ����ؾ� �� ����


	printf("number1ptr�� ���� ��� : %d\n", (*number1ptr) + 1);
	
	// �ּҸ� ���غ���

	printf("�ּҸ� ����غ��� \n");
	printf("���� �ּ�: %p\n", number1ptr);
	number1ptr = number1ptr + 1;
	// �ּҸ� ���Ѵٸ�? ���� ũ���� 4��ŭ ����
	printf("���� �ּ�: %p\n\n", number1ptr);

	printf("double �ּ�: %p\n", doubleNumber1ptr);
	doubleNumber1ptr = doubleNumber1ptr + 1;
	// �ּҸ� ���Ѵٸ�? ���� ũ���� 4��ŭ ����
	printf("double �ּ�: %p\n\n", doubleNumber1ptr);

	// �ּҸ� ���ϸ�, �ּ��� ���� ������ �ִ� ũ�� ��ŭ �����Ѵ�.
	// �迭�� �������� ����� �ſ� �߿�(��)

	
}
