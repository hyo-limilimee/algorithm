#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int i, j;
	char ch;

	while (1)
	{
		printf("\n*  ������ �빮�� �Է�('A' ~ 'Z') : ");
		scanf("%c", &ch);

		if (ch <= 90 && ch>= 65)
		{
			for (i = 0; i <= (ch - 'A'); i++)
			{
				for (j = 0; j <= i; j++)
				{
					printf("%c", ch - j);
				}

				printf("\n");

			}
		}

		else
		{
			printf("\n���α׷��� �����մϴ�.\n");
			break;
		}
	
		while (getchar() != '\n')
		{
			;
		}
	}
	
	return 0;
}
