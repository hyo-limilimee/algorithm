//나에 대한 정보를 출력하는 프로그램을 작성하시오.
	
#include<stdio.h>

void printAge(int);        //printAge() 함수의 선언부
void printHeight(double); //printHeight() 함수의 선언부


int main()
{
	char name[20] = "강효림";
	int age = 21;
	double height = 165.8;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

//printAge() 함수의 정의부
void printAge(int age)
{
	printf("나이 : %d\n", age);
	return;

}

//printHeight() 함수의 정의부
void printHeight(double height)
{
	printf("키 : %.1lf", height);
	return;
}
