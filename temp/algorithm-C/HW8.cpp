#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int history, literacture, art;
	double average, sum;

	printf("����, ����, ���� �� ������ ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &history, &literacture, &art);

	sum = history + literacture + art;
	average = sum / 3;
	printf("������ %.0f �̰� ����� %.2lf�Դϴ�.", sum, average);

	return 0;
}

