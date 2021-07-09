#include<stdio.h>
#pragma warning(disable:4996)

//TODO - input() 함수 선언부
int input(void);

int main()
{
	int number;
	number = input();

	//TODO - 계산결과 출력하기
	printf("입력된 값은 8진수로 %#o입니다.\n", number);
	printf("입력된 값은 16진수로 %#x입니다.", number);

	return 0;

}

int input()
{
	int in_number;

	printf("정수값을 입력하시오 : ");
	scanf("%d", &in_number);

	return in_number;
}