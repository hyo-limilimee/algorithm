//아스키코드를 입력받아 해당 문자 출력하기

#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num;
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &num);
	printf("%d은 '%s'의 ASCII code 입니다.", num, &num);

	return 0;
}
