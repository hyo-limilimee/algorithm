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
			
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &cal_ft);

	return cal_ft;
	
}

void output(double ct)
{
	printf("���� �µ��� %.1lf���Դϴ�.", ct);
	return;
}