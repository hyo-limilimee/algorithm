/* �ڷ����� ũ�� (byte)�� �˾ƺ��� ���α׷� -  sizeof ������ */
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