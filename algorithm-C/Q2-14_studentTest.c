#include <stdio.h>
#include <math.h>
int main()
{
	char name[7] = "ȫ�浿", num[6] = "19123";
	int lang, algo;
	float lang2, algo2;

	lang = 95;
	algo = 82;
	lang2 = 95;
	algo2 = 82;

	printf("���� : %s\n", name);
	printf("�й� : %s\n",num);
	printf("C��� : %d\n", lang);
	printf("�˰��� : %d\n", algo);
	printf("�հ� : %d\n", lang + algo);
	printf("��� : %lf\n", floor((lang2 + algo2)/2));

	return 0;

}