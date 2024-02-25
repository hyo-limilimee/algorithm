#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int n, v, cnt;
	int a[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &v);
	
	cnt = 0;

	for (int j = 0; j < n; j++)
	{
		if (a[j] == v)
			cnt++;
	}

	printf("%d", cnt);
}