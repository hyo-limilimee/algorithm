#include<stdio.h>
#pragma warning (disable:4996)

int input();

int main()
{
	int num;
	int i;
	printf("�������� �Է��ϼ��� : ");
	num = input();

	for (i = 1; i < num + 1; i++)
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}

		else
		{
			printf("*");
		}
	}

	return 0;
}

int input()
{
	int in_num;

	scanf("%d", &in_num);

	return in_num;

}
