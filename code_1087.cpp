#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int num;
	int sum = 0;
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;
		
		if (sum >= num)
		{
			printf("%d", sum)
				;
			break;
		}
	}

	return 0;
}