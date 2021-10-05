#include<stdio.h>
#pragma warning (disable:4996)

char a;

int main(void)
{

	while(a != 'q')
	{
		scanf("%c",&a);
		printf("%c",a);
	}
}