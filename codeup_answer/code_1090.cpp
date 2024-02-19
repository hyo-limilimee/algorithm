#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	long long a, r, n;
	scanf("%lld %lld %lld", &a, &r, &n);

	for (int i = 1; i < n; i++)
	{
		a *= r;
	}

	printf("%lld", a);

	return 0;
}