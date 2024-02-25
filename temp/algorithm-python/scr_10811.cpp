#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int arr[100] = { 0, };

	int n, m;

	scanf("%d %d", &n, &m);

	for (int x = 1; x < n + 1; x++)
	{
		arr[x] = x;
	}

	int i, j;
	int temp = 0;

	for (int y = 0; y < m; y++)
	{
		scanf("%d %d", &i, &j);


		int size = (j - i + 1)/2;

		for (int z = 0; z < size; z++)
		{
			temp = arr[i + z];
			arr[i + z] = arr[j - z];
			arr[j - z] = temp;

		}
		
	}

	for (int k = 1; k < n + 1; k++)
	{
		printf("%d ", arr[k]);
	}
}