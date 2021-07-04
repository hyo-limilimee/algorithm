#include <stdio.h>
#define TAX 0.1  
int main()
{
	printf("품번 : %d\n", 1);
	printf("제품명 : %s\n", "사과");
	printf("단가 : %d\n", 1000);
	printf("세금 : %lf\n", 1000 * TAX);
	return 0;
}

/*
메크로 상수 문자열을 0.2로 변경하여 실행 결과를 확인하면,
마지막 결과 값이 세금 : 200.000000으로 바뀌어서 나타난다.
*/