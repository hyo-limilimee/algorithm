#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int arr[31] = { 0, };

	int n;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		arr[n] = n;
	}

	for (int j = 1; j < 31; j++)
	{
		if (arr[j] == 0)
		{
			printf("%d\n", j);
		}
	}

	return 0;
}