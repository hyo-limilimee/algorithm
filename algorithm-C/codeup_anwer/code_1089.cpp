#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a, d, n, result;
	scanf("%d %d %d", &a, &d, &n);

	result = a + d * (n - 1);
	printf("%d", result);

	return 0;
}