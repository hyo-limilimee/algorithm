#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int day, a, b, c;
	day = 1;

	scanf("%d %d %d", &a, &b, &c);

	while (day % a != 0 || day % b != 0 || day % c != 0)
	{
		day++;
	}

	printf("%d", day);

	return 0;
}