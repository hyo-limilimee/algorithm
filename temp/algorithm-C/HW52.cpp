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
	printf("# �ܾ� �Է� : ");
	scanf("%s", word);
}

int palCheck(char *word)
{
	int length;
	int i, compare = 0;
	
	compare = strcmp(word, "end");

	/***
	-1	:string1�� string2���� ����
	0	:string1�� string2�� ����
	+1	:string1�� string2���� ŭ
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
		printf("\"%s\" : ȸ���Դϴ�!\n\n", word);
	}

	else
	{
		printf("\"%s\" : ȸ���� �ƴմϴ�!\n\n", word);
	}
}