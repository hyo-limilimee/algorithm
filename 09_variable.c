/* 변수 기본구조*/
#include<stdio.h>
int main()
{
	// 1. 변수 선언문
	unsigned short age; // 나이 2 byte 0~ 65535
	double height;     // 키 8 byte
	char blood = 'B'; // 혈액형 1byte 변수 선언문 + 2. 변수 초기화

	//2.변수초기화
	age = 20;
	height = 180.5;
	//height = 180.5F; 
	//height =  (float)180.5; 도 가능        //casting

	//3. 변수 실행문
	printf("나이 : %hu\n", age);
	printf("키 : %.1lf\n", height);
	printf("혈액형 : %c\n", blood);

	return 0;
}