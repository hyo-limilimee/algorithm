//이름의 글자 수 출력

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char f_name[100], name[100];

	printf("#성을 입력하시오 : ");
	scanf("%s", f_name);
	printf("#이름을 입력하시오 :");
	scanf("%s", name);

	printf("% s % s\n", f_name, name);
	printf("%*d", strlen(f_name), strlen(f_name));
	printf(" %*d", strlen(name), strlen(name));

	return 0;
}
