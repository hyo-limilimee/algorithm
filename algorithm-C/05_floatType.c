/* 실수형 상수 출력하는 프로그램 */
#include <stdio.h>
int main()
{
	int inum = 123.456;      // 실수 상수를 정수형 변수 저장
	float fnum = 123.456F;   // 실수 상수를 실수형 변수 저장 
	double dnum1 = 123.456, dnum2 = 0.00123456; // 실수 상수를 실수형 변수 저장

	printf("inum = %d\n", inum);
	printf("fnum = %f\n", fnum);
	printf("dnum1 = %lf, dnum2 = %1f\n", dnum1, dnum2);
	printf("fnum = %.0f\n", fnum);
	
	return 0;
}