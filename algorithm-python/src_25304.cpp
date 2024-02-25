#include <stdio.h>
#pragma warning(disable :4996)

int main()
{
	int x, n, a, b;

	scanf("%d", &x);
	
	scanf("%d", &n);

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);

		sum += a * b;
	}

	if (sum == x)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;

}