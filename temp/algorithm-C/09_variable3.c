/* ���� �⺻���� - �߸��� ���α׷� */
#include <stdio.h>
int main()
{
	char pnum[5] = "AB01";
	char pname[6] = "apple";

	
	printf("��ǰ��ȣ : %s\n", pnum);
	printf("��ǰ�� : %s\n", pname);

	printf("��ǰ��ȣ �迭(pnum)�� ũ�� : %u\n", sizeof(pnum));
	printf("��ǰ�� �迭(pnuame)�� ũ�� : %u\n", sizeof(pname));

	return 0;
}