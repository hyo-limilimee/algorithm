/* ���� �⺻����*/
#include<stdio.h>
int main()
{
	// 1. ���� ����
	unsigned short age; // ���� 2 byte 0~ 65535
	double height;     // Ű 8 byte
	char blood = 'B'; // ������ 1byte ���� ���� + 2. ���� �ʱ�ȭ

	//2.�����ʱ�ȭ
	age = 20;
	height = 180.5;
	//height = 180.5F; 
	//height =  (float)180.5; �� ����        //casting

	//3. ���� ���๮
	printf("���� : %hu\n", age);
	printf("Ű : %.1lf\n", height);
	printf("������ : %c\n", blood);

	return 0;
}