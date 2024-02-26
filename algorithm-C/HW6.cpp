#include<stdio.h>
#pragma warning(disable:4996)

int input(void);
void output(double);

int main()
{
	double ft;
	double ct;

	ft = input();

	ct = (ft - 32) * 5 / 9 ;

	output(ct);

	return 0;
}

int input()
{
	int cal_ft;
			
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &cal_ft);

	return cal_ft;
	
}

void output(double ct)
{
	printf("섭씨 온도는 %.1lf도입니다.", ct);
	return;
}