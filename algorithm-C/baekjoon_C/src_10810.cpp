#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int n, m;

	int i, j, k;

	int a[100] = {0,};

	scanf("%d %d", &n, &m);

	for (int x = 0; x < m; x++)
	{
		scanf("%d %d %d", &i, &j, &k);

		for (int y = i ; y < j + 1; y++)
		{
			a[y-1] = k;
		}
	}

	for (int z = 0; z < n; z++)
	{
		printf("%d ", a[z]);
	}

	return 0;
}