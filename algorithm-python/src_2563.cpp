#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int arr[100][100] = {0, };
	int num;
	int width, height;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &width, &height);

		for (int j = width; j < width + 10; j++)
		{
			for (int k = height; k < height + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	int cnt = 0;

	for (int x = 0; x < 100; x++)
	{
		for (int y = 0; y < 100; y++)
		{
			if (arr[x][y] == 1)
			{
				cnt++;
			}
		}
	}

	printf("%d", cnt);

}