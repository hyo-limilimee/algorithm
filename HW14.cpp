//문자열 생략하여 출력하기
//문자열을 입력 받아 입력 받은 문자열을 앞에서부터 반만 출력

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
		printf("*¹®ÀÚ¿­ ÀÔ·Â : ");
		scanf("%s", str);

		len = strlen(str);

		printf("[%*.*s...]\n", len, len / 2, str);
	}
	

	return 0;
}
