#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int var1, var2;

	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &var1, &var2);

	printf("%d + %d = %d\n", var1, var2, var1 + var2); 
	printf("%d - %d = %d\n", var1, var2, var1 - var2); 
	printf("%d * %d = %d\n", var1, var2, var1 * var2);
	printf("%d / %d = %.2f\n", var1, var2, (double)var1 / var2);

	return 0;
}