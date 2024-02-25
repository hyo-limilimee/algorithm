#include<stdio.h>

void Sort(int *a, int n);
void output(int *a);

int main()
{
	int a[6] = { 8, 2, 4, 11,  1, 6 };
	int n;
	int i;
	n = sizeof(a) / sizeof(int);



	printf("# 소트 전 데이터 : ");

	for (i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}

	Sort(a, n);
	output(a);



}

void Sort(int *a , int n)
{
	int min;
	int minindex;
	int i, j,k;

	for (i = 0; i < n - 1; i++)
	{
		minindex = i;
		min = a[i];
		for (j = i + 1; j < n; j++)
		{
			if (min > a[j])
			{
				min = a[j];
				minindex = j;
			}
		}

		a[minindex] = a[i];
		a[i] = min;


	}
}

void output(int *a)
{
	int i;

	printf("\n# 소트 후 데이터 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
}

