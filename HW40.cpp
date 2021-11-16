#include<stdio.h>
#pragma warning (disable :4996)

int main()
{
	int arr[10][10] = { 0, };
	int i = 0, j = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = k;
				k += 10;
				printf("%3d", arr[i][j]);
		}
		k = i + 1;

		printf("\n");
	}
	
	return 0;
	
}