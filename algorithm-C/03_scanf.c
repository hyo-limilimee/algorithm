/* scanf �Լ��� ���� -  ���� �Է� �޴� ���α׷� */
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num1, num2;     // ���� ����

	// ���� �ʱ�ȭ
	printf("����1 �Է� : ");
	scanf("%d", &num1);

	printf("����2 �Է� : ");
	scanf("%d", &num2);

	//���� ���๮
	printf("����1 %d + ����2 %d\n = %d\n", num1, num2, num1 + num2);

	return 0;

}
