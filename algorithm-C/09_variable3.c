/* 변수 기본구조 - 잘못된 프로그램 */
#include <stdio.h>
int main()
{
	char pnum[5] = "AB01";
	char pname[6] = "apple";

	
	printf("제품번호 : %s\n", pnum);
	printf("제품명 : %s\n", pname);

	printf("제품번호 배열(pnum)의 크기 : %u\n", sizeof(pnum));
	printf("제품명 배열(pnuame)의 크기 : %u\n", sizeof(pname));

	return 0;
}