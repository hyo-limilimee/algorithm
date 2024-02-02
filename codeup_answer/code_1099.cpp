#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int a[11][11] = {};
	int x = 2;
	int y = 2;
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

    while (1)
    {
        if (a[x][y] == 0)
        {
            a[x][y] = 9;

            if (a[x][y + 1] == 1 && a[x + 1][y] == 1)
            {
                break;
            }

            else
            {
                y++;
            }

        }

        else if (a[x][y] == 1)
        {
            y--;
            x++;
        }

        else
        {
            a[x][y] = 9;
            break;
        }
    }

	for (int i = 1; i <= 10; i++) 
    {
		for (int j = 1; j <= 10; j++)
        {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}