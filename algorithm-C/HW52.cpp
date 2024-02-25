#include<stdio.h>
#include<ctype.h>
#include<string.h>
#pragma warning (disable: 4996)

void input(char *word);
int palCheck(char *word);
void output(int res, char *word);

int main()
{
	char word[30];
	int res;

	while (strcmp(word, "end"))
	{
		input(word);

		res = palCheck(word);

		//printf("res : %d \n", res);

		if (res == 2)
		{

		}
		else
		{
			output(res, word);

		}

	}
		
	return 0;
}

void input(char *word)
{
	printf("# 단어 입력 : ");
	scanf("%s", word);
}

int palCheck(char *word)
{
	int length;
	int i, compare = 0;
	
	compare = strcmp(word, "end");

	/***
	-1	:string1이 string2보다 작음
	0	:string1이 string2와 같음
	+1	:string1이 string2보다 큼
	***/
	
	//printf("compare : %d \n", compare);


	if (compare == 0)
	{
		return 2;
	}
	else 
	{
		length = strlen(word);
	
		for (i = 0; i < length / 2; i++)
		{
			if (tolower(word[i]) == tolower(word[length - 1 - i]))
			{
				return 1;
			}

			else
			{
				return 0;
			}
		}
	}
}

void output(int res, char *word)
{
	if (res == 1)
	{
		printf("\"%s\" : 회문입니다!\n\n", word);
	}

	else
	{
		printf("\"%s\" : 회문이 아닙니다!\n\n", word);
	}
}