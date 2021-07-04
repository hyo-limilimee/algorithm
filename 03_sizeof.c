/* 자료형의 크기 (byte)를 알아보는 프로그램 -  sizeof 연산자 */
#include <stdio.h>
int main()
{
	printf("signed char = %dByte\n", sizeof(char));
	printf("unsigned short = %dByte\n", sizeof(unsigned short));
	printf("signed int = %uByte\n", sizeof(int));
	printf("float = %uByte\n", sizeof(float));
	printf("double = %dByte\n", sizeof(double));
	return 0;
}