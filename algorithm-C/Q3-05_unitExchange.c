#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double a;
	printf("cm를 입력하세요 :");
	scanf("%lf", &a);
	printf("%.2fcm는 %.2lf인치입니다.", a, a/2.54 );
	return 0;
}