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

	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	 scanf("%lf", &cal_kw);

	 return cal_kw;
}

void output(double fee)
{
	printf("���� ������� %lf�� �Դϴ�.", fee);
	return;
}

