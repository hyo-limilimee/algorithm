/* scanf 함수의 구조 -  값을 입력 받는 프로그램 */
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num1, num2;     // 변수 선언문

	// 변수 초기화
	printf("정수1 입력 : ");
	scanf("%d", &num1);

	printf("정수2 입력 : ");
	scanf("%d", &num2);

	//변수 실행문
	printf("정수1 %d + 정수2 %d\n = %d\n", num1, num2, num1 + num2);

	return 0;

}
