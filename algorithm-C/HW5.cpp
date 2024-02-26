#include <stdio.h>
#pragma warning(disable:4996)

double input(void);
void output(double);

int main()
{
	double kw;
	double fee;
	
	kw = input();

	fee = 1.09 * (660 + 88.5 * kw);

	output(fee);

	return 0;
}

double input()
{
	double cal_kw;

	printf("전기 사용량을 입력하세요(kw) : ");
	 scanf("%lf", &cal_kw);

	 return cal_kw;
}

void output(double fee)
{
	printf("전기 사용요금은 %lf원 입니다.", fee);
	return;
}

