#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i;
	double height, sum, average;

	sum = 0;

		for (i = 1; i < 6; i++)
		{
			printf("%d번 학생의 키는? ", i);
			scanf("%lf", &height);
	
			sum = sum + height;

		}

	average = sum / 5;

	printf("다섯 명의 평균 키는 %.1lfcm입니다.", average);

	return 0;
}