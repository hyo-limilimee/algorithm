#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double a;
	printf("cm�� �Է��ϼ��� :");
	scanf("%lf", &a);
	printf("%.2fcm�� %.2lf��ġ�Դϴ�.", a, a/2.54 );
	return 0;
}