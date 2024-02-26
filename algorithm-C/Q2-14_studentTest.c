#include <stdio.h>
#include <math.h>
int main()
{
	char name[7] = "홍길동", num[6] = "19123";
	int lang, algo;
	float lang2, algo2;

	lang = 95;
	algo = 82;
	lang2 = 95;
	algo2 = 82;

	printf("성명 : %s\n", name);
	printf("학번 : %s\n",num);
	printf("C언어 : %d\n", lang);
	printf("알고리즘 : %d\n", algo);
	printf("합계 : %d\n", lang + algo);
	printf("평균 : %lf\n", floor((lang2 + algo2)/2));

	return 0;

}