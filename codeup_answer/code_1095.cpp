#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int arr[10000] = {0, };
	int num;
	int temp;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]); // 입력받을 횟수 받기
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("%d", arr[0]);

	return 0;
}