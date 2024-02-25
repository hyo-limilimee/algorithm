#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#pragma warning (disable: 4996)

void input(char*, char*);
int strcheck(char*, char);

int main()
{
	int count;
	char str[100], ch;

	while (1)
	{
		input(str, &ch);
		
		count = strcheck(str, ch);
		if (count == -1)
		{
			printf("\"%s\"문자열 안에 '%c'문자는 존재하지 않습니다.\n\n", str, ch);
		}

		else
		{
			printf("\"%s\"문자열 안에 '%c'문자는 %d번 위치에 존재합니다.\n\n", str, ch, count);
		}
	}

	return 0;
}

void input(char* str, char* ch)
{
	printf("# 문자열을 입력하시오 : ");
	scanf("%s", str);

	if (strcmp(str, "end") == 0)
	{
		exit(0);
	}

	else
	{
		printf("# 문자를 입력하시오 : ");
		scanf("%s", ch);
	}
	
	return;
}


int strcheck(char* str, char ch)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i++)
	{
		if (str[i] == ch)
		{
			return i;
		}

		else
		{
			;
		}
	}

	return -1;
}


