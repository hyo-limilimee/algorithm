#include <stdio.h>

int main()
{
	printf("  <2중 for 문을 이용한 출력>\n");
	
	int i, j, k;
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 5; j++)
		{
			printf("%3d * %d = %2d", j, i, (i * j));
			
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			printf("%3d * %d = %2d", j, i, (i * j));

		}
		printf("\n");
	}

	printf("\n");
	printf("-----------------------------------------------------\n");

	printf("  <3중 for 문을 이용한 출력>\n");

	for (i = 1; i < 3; i++) 
	{
		for (j = 1; j <=9; j++) {
			for (k = 4 * i - 2; k < 4 * i + 2 ; k++)
			{
				printf("%3d * %d = %2d", k, j, k * j);
			}
			printf("\n");
		}
		printf("\n");
	}


	return 0;

}

