#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	printf("산술 연산할 두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;
}