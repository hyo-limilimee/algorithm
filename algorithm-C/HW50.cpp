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
			printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� �������� �ʽ��ϴ�.\n\n", str, ch);
		}

		else
		{
			printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� %d�� ��ġ�� �����մϴ�.\n\n", str, ch, count);
		}
	}

	return 0;
}

void input(char* str, char* ch)
{
	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", str);

	if (strcmp(str, "end") == 0)
	{
		exit(0);
	}

	else
	{
		printf("# ���ڸ� �Է��Ͻÿ� : ");
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


