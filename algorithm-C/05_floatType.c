/* �Ǽ��� ��� ����ϴ� ���α׷� */
#include <stdio.h>
int main()
{
	int inum = 123.456;      // �Ǽ� ����� ������ ���� ����
	float fnum = 123.456F;   // �Ǽ� ����� �Ǽ��� ���� ���� 
	double dnum1 = 123.456, dnum2 = 0.00123456; // �Ǽ� ����� �Ǽ��� ���� ����

	printf("inum = %d\n", inum);
	printf("fnum = %f\n", fnum);
	printf("dnum1 = %lf, dnum2 = %1f\n", dnum1, dnum2);
	printf("fnum = %.0f\n", fnum);
	
	return 0;
}