#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a, b, c, d;
	int a3, a2, a1, b3, b2, b1;

	scanf("%d %d", &a, &b);

	a3 = a / 100;
	a2 = (a % 100) / 10;
	a1 = (a % 100) % 10;

	b3 = b / 100;
	b2 = (b % 100) / 10;
	b1 = (b % 100) % 10;

	c = 100 * a1 + 10 * a2 + a3;
	d = 100 * b1 + 10 * b2 + b3;

	if (c > d)
	{
		printf("%d", c);
	}

	else
	{
		printf("%d", d);
	}

	return 0;
}