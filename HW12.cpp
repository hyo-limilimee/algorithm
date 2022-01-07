//이름을 영문으로 입력 받아 특이한 형태로 출력하기

#include<stdio.h>

int main()
{
	char name[100];

	printf("ÀÌ¸§À» ÀÔ·ÂÇÏ½Ã¿À : ");
	gets_s(name);
	printf("\"%s\"\n\"%20s\"\n\"%-20s\"", name, name, name);

	return 0;
}
