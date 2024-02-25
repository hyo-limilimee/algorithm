#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main()
{
	char word[100] = " ";

	scanf("%s",&word);

	int count = 0;

	for (int i = 0; i< strlen(word); i++)
	{
		count++;
	}

	printf("%d", count);

	return 0;

}