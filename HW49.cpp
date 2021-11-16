#include <stdio.h>
#pragma warning (disable: 4996)

void swap(int*, int*);

int main()
{
	int ary[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int i;

	printf("처음 배열에 저장된 값 : ");

	for (i = 0; i < size; i++)
	{
		printf("%2d", ary[i]);
	}
	printf("\n");

	for (i = 0; i < size / 2; i++)
	{
		swap(&ary[i], &ary[(size - i - 1)]);
	}

	printf("바뀐 배열에 저장된 값 : ");
	
	for (i = 0; i < size; i++)
	{
		printf("%2d", ary[i]);
	}

	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	return;
}