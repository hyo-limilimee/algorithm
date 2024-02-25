#include<stdio.h>
#pragma warning (disable: 4996)

void inputScope(int*, int*);
void inputEvenodd(int, int, char*);
void output(int, int, char);
void myflush();

int main()
{
	int start, end;
	char a;

	inputScope(&start, &end);
	inputEvenodd(start, end, &a);
	output(start, end, a);

	return 0;
}

void inputScope(int* start, int* end)
{

	while (1)
	{
		printf("# ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", start);

		if (*start >= 0 && getchar() == '\n')
		{
			break;
		}

		else
		{
			myflush();
		}
	}

	while (1)
	{
		printf("# �� ���� �Է��Ͻÿ� : ");
		scanf("%d", end);

		if (*end > *start && getchar() == '\n')
		{
			break;
		}

		else
		{
			myflush();
		}

	}


}


void inputEvenodd(int start, int end, char* a)
{
	while (1)
	{
		printf("* %d~%d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o): ", start, end, a);
		scanf("%c", a);

		if ((*a == 'e' || *a == 'o') && getchar() == '\n')
		{
			break;
		}

		else
		{
			myflush();
		}
	}


}

void output(int start, int end, char a)
{
	int i;
	int sum = 0;

	if (a == 'e')
	{
		printf("  %d~%d������ ¦��(", start, end);

		for (i = start; i <= end; i++)
		{
			if (i % 2 == 0)
			{
				printf("%d ", i);

				sum = sum + i;
			}
		}

		printf(")�� ���� %d�Դϴ�.", sum);
	}

	else if (a == 'o')
	{
		printf("  %d~%d������ Ȧ��(", start, end);

		for (i = start; i <= end; i++)
		{
			if (i % 2 == 1)
			{
				printf("%d ", i);

				sum = sum + i;
			}
		}

		printf(")�� ���� %d�Դϴ�.", sum);
	}

	else
	{
		;
	}
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}