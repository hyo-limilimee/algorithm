#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	printf("8������ �Է��ϼ���.");
	scanf("%o", &a);

	printf("8���� %#o�� 10���� : %d\n", a, a);
	printf("8���� %#o�� 16���� : %#x\n", a, a);

	return 0;
}