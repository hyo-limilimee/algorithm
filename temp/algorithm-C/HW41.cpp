#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i, j, line;

	while (1)
	{
		printf("# ��� ���μ��� �Է��Ͻÿ� : ");

		if (scanf("%d", &line) ==  0)
		{
			printf("\n���ڸ� �Է��Ͽ� �����մϴ�\n");
			return 0;
		}

		for (i = 0; i < line; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}

			for (j = 0; j < (line - i) * 2; j++)
			{
				printf(" ");
			}

			for (j = 0; j <= i; j++)
			{
				printf("*");
			}

			printf("\n");

		}
	
		printf("\n");
		
	}
	
	return 0;
}

