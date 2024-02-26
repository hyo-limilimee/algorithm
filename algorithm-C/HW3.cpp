//초를 입력받고, 시, 분, 초 단위로 환산하는 프로그램

#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int time, sec, min, hour;

	printf("초를 입력하세요 : ");
	 scanf("%d", &time);
	
	sec = time;
	min = sec / 60;
	hour = min / 60;
	min = min % 60;
	sec = sec % 60;
	
	printf("%d초는 %d시간 %d분 %d초 입니다.", time, hour, min, sec);
	
	return 0;
}
