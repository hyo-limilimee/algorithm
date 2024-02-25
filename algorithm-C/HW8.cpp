#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int history, literacture, art;
	double average, sum;

	printf("역사, 문학, 예능 세 과목의 점수를 입력하세요 : ");
	scanf("%d %d %d", &history, &literacture, &art);

	sum = history + literacture + art;
	average = sum / 3;
	printf("총점은 %.0f 이고 평균은 %.2lf입니다.", sum, average);

	return 0;
}

