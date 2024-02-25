#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main()
{
	char subject[50] = {'\0', };
	double rate;
	char grade[3] = { '\0', };
	double score;

	double gradescore;
	double sum = 0;
	double cnt = 0;

	for (int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", &subject, &rate, &grade);

		if (strcmp(grade, "A+") == 0)
		{
			gradescore = 4.5;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "A0") == 0)
		{
			gradescore = 4.0;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "B+") == 0)
		{
			gradescore = 3.5;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "B0") == 0)
		{
			gradescore = 3.0;
			sum +=(rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "C+") == 0)
		{
			gradescore = 2.5;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "C0") == 0)
		{
			gradescore = 2.0;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "D+") == 0)
		{
			gradescore = 1.5;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "D0") == 0)
		{
			gradescore = 1.0;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else if (strcmp(grade, "F") == 0)
		{
			gradescore = 0.0;
			sum += (rate * gradescore);
			cnt += rate;
		}

		else
		{
			continue;
		}
	}
 
	if (cnt == 0)
	{
		score = 0;
	}

	else
	{
		score = sum / cnt;
	}

	printf("%lf", score);

	return 0;
}