#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 100

int main()
{

	char name[MAX]; 
	char address[MAX];
	char gender[2];
	unsigned int number;

	printf("*�̸� �Է� : ");
	gets(name);

	printf("*�ּ� �Է� : ");
	gets(address);

	printf("*���� �Է� : ");
	scanf("%s", gender);

	printf("*����ó �Է� : "); 
	scanf("%d", &number);

	printf("======================\n");
	printf("�̸� : %s\n", name); 
	printf("�ּ� : %s\n", address);
	printf("���� : %s\n", gender);
	printf("����ó : %d\n", number);

	return 0;
}