/* 자료형(데이터형, 데이터 타입, datatype)에 따른
데이터 범위 확인하는 프로그램 */
#include <stdio.h>
int main()
{
	char a = -100;  //signed char 범위 : -128~127
	unsigned char b = 200;  //u.s char 범위 : 0~255

	printf("a= %d\n", a);
	printf("b =%u\n", b);

	printf("%d\n", CHAR_MAX);
	printf("%d\n", CHAR_MIN);

	return 0;
}