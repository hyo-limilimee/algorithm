/* ���� �⺻����*/
#include<stdio.h>
int main()
{
	//1.���� ���
	int mit, nop;
	double nup;

	//2.���� �ʱ�ȭ
	mit = 11;
	nop = 23;
	nup = mit * nop / 2;  // ������ ��� ����� nup ������ ����

	//3. ���� ���๮
	printf("�ظ� : %d, ���� : %d, ���� : %.2lf\n", mit, nop, nup);
	
	return 0;
}