#include<stdio.h>

int main()
{
	char name[100];

	printf("이름을 입력하시오 : ");
	gets_s(name);
	printf("\"%s\"\n\"%20s\"\n\"%-20s\"", name, name, name);

	return 0;
}