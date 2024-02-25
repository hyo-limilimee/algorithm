#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	long long a, m, d, n, result;
	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	for (int i = 1; i < n; i++)
	{
		a = a * m + d;
	}

	printf("%lld", a);

	return 0;
}