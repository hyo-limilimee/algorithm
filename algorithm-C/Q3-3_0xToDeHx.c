#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	printf("8진수를 입력하세요.");
	scanf("%o", &a);

	printf("8진수 %#o의 10진수 : %d\n", a, a);
	printf("8진수 %#o의 16진수 : %#x\n", a, a);

	return 0;
}