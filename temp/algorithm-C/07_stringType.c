/* 문자열 상수 표현*/
#include <stdio.h>
int main()
{
	printf("문자열 apple의 길이 : %d\n", sizeof("apple")); //apple+Null 문자
	printf("문자열 sandwitch의 길이 : %d\n", sizeof("sandwitch")); //sandwitch+Null 문자

	return 0;
}