#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i;
	double height, sum, average;

	sum = 0;

		for (i = 1; i < 6; i++)
		{
			printf("%d�� �л��� Ű��? ", i);
			scanf("%lf", &height);
	
			sum = sum + height;

		}

	average = sum / 5;

	printf("�ټ� ���� ��� Ű�� %.1lfcm�Դϴ�.", average);

	return 0;
}