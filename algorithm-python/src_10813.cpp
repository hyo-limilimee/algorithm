#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int n, m;
	

	int arr[100] = { 0, };

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

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	}


	for (int z = 1; z < n + 1; z++)
	{
		printf("%d ", arr[z]);
	}


}