#include <stdio.h>
int main()
{
	printf("ch1의 문자 상수 : %s, ASCII code : %d\n", "'A'", 'A');
	printf("ch2의 문자 상수 : %s, ASCII code : %d\n", "'a'", 'a');
	printf("ch2-ch1 = %d", 'a' - 'A');

	return 0;
}