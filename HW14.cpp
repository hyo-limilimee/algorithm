#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int main()
{
	char str[100];
	int len;
	int i;
	for(i=1; i<5; i++)
	{ 
		printf("*문자열 입력 : ");
		scanf("%s", str);

		len = strlen(str);

		printf("[%*.*s...]\n", len, len / 2, str);
	}
	

	return 0;
}