/*
	05. ��ȿ�� : 1001lily@naver.com
*/

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int weight;
	printf("��� ���Ը� �Է��ϼ��� : ");
	scanf("%d", &weight);
	if (weight >= 500) printf("�ܰ� : 2000��");
	else if (300<= weight < 500) printf("�ܰ� : 1000��");
	else if (weight < 300) printf("�ܰ� : 500��");

	return 0;
}