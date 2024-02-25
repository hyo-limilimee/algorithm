/*
	05. 강효림 : 1001lily@naver.com
*/

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int weight;
	printf("사과 무게를 입력하세요 : ");
	scanf("%d", &weight);
	if (weight >= 500) printf("단가 : 2000원");
	else if (300<= weight < 500) printf("단가 : 1000원");
	else if (weight < 300) printf("단가 : 500원");

	return 0;
}