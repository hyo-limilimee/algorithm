#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 100

int main()
{

	char name[MAX]; 
	char address[MAX];
	char gender[2];
	unsigned int number;

	printf("*이름 입력 : ");
	gets(name);

	printf("*주소 입력 : ");
	gets(address);

	printf("*성별 입력 : ");
	scanf("%s", gender);

	printf("*연락처 입력 : "); 
	scanf("%d", &number);

	printf("======================\n");
	printf("이름 : %s\n", name); 
	printf("주소 : %s\n", address);
	printf("성별 : %s\n", gender);
	printf("연락처 : %d\n", number);

	return 0;
}