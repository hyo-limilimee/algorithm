#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	for(int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			printf("%d %d\n", i,j);
		}
	}
	return 0;
}