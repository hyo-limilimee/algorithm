#include<stdio.h>
#pragma warning(disable:4996)

//TODO - input() �Լ� �����
int input(void);

int main()
{
	int number;
	number = input();

	//TODO - ����� ����ϱ�
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.", number);

	return 0;

}

int input()
{
	int in_number;

	printf("�������� �Է��Ͻÿ� : ");
	scanf("%d", &in_number);

	return in_number;
}