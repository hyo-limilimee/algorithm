/* �ڷ���(��������, ������ Ÿ��, datatype)�� ����
������ ���� Ȯ���ϴ� ���α׷� */
#include <stdio.h>
int main()
{
	char a = -100;  //signed char ���� : -128~127
	unsigned char b = 200;  //u.s char ���� : 0~255

	printf("a= %d\n", a);
	printf("b =%u\n", b);

	printf("%d\n", CHAR_MAX);
	printf("%d\n", CHAR_MIN);

	return 0;
}