#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int i, j;
	char ch;

	while (1)
	{
		printf("\n*  영문자 대문자 입력('A' ~ 'Z') : ");
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
			printf("\n프로그램을 종료합니다.\n");
			break;
		}
	
		while (getchar() != '\n')
		{
			;
		}
	}
	
	return 0;
}
