#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	char a[16];
	scanf("%s", &a);

	int n = 0;

	int i = 0;
	while (a[i]) {
		n += (a[i] - 'A') / 3 + 3;
		if (a[i] == 'S' || a[i] == 'V' || a[i] == 'Y' || a[i] == 'Z') n -= 1;
		++i;
	}

	printf("%d\n", n);

	return 0;
}