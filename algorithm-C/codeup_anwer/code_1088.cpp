#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}

		else
		{
			printf("%d ", i);
		}
	}
	return 0;
}