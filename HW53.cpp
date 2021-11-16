#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

void input(char*);
int calcNum(char*);
void output(char*, int);

int main() 
{
	int res;
	char str[100];

	while (1)
	{
		input(str);

		if (strcmp(str, "end") == 0)
		{
			break;
		}

		res = calcNum(str);
		output(str, res);
	}
}

void input(char *str)
{
	printf("#문장을 입력하시오 : ");
	scanf("%s", str);
}

int calcNum(char *str)
{
	int length;
	int i, j;
	int k = 1;
	int sum = 0;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			for (j = i + 1; j < length; j++)
			{
				if (str[j] >= 48 && str[j] <= 57)
				{
					k *= 10;
				}

				else
				{
					break;
				}
			}

			sum += (str[i] - 48) *k;
			k = 1;

		}

	}
		
	return sum;
}

void output(char *str, int sum)
{
	printf("\"%s\"내의 총 숫자는 [%d]입니다.\n\n", str, sum);
}