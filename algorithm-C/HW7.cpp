#include<stdio.h>
#pragma warning (disable:4996)

double input1(void);
double input2(void);
void output(double, int, int, double);

int main()

{
	double distance, velocity, time, sec;
	int min, hour;
	
	int i;
	for (i = 1; i < 4; i++)
	{
		distance = input1();
		velocity = input2();

		time = distance / velocity;

		hour = int(time);
		min = ((time - hour) * 60);
		sec = (((time - hour) * 60) - min) * 60;

		output(distance, hour, min, sec);
	}

	return 0;


}

	double input1(void)
	{

		double cal_distance;

		printf("*�Ÿ��� �Է��Ͻÿ�(km����) : ");
		scanf("%lf", &cal_distance);

		return cal_distance;

	}

	double input2(void)
	{
		double cal_velocity;

		printf("*�ü��� �Է��Ͻÿ�(km/h����) : ");
		scanf("%lf", &cal_velocity);

		return cal_velocity;

	}

	void output(double distance, int hour, int min, double sec)
	{

		printf(" %.2lfkm =>%d�ð� %d�� %.3lf�� �ҿ��\n\n", distance, hour, min, sec);

		return;

	}
