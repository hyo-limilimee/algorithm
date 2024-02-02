#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main()
{
	char str[1000001];
	scanf("%[^\n]", &str);

	int count = 1;
	
	if (strlen(str) == 1)
	{
		if (str[0] == ' ')
		{
			count = 0;
		}
	}

	else
	{
		for (int i = 1; i < strlen(str) - 1; i++)
		{
			if (str[i] == ' ')
			{
				count++;
			}
		}

	}

	printf("%d", count);

	return 0;
}