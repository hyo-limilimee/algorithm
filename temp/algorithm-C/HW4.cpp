# include <stdio.h>

int main()
{
	double year= 365.2422;
	int day, hour, min;
	double sec;

	day = int(year);
	hour = int((year - day) * 24);
	min = int((((year - day) * 24) - hour) * 60);
	sec = ((((((year - day) * 24) - hour) * 60) - min) * 60);
	
	printf("%.4lf���� %d�� %d�ð� %d�� %.2lf���Դϴ�.", year, day, hour, min, sec);

	return 0;
}