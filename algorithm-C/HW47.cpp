#include<stdio.h>
#pragma warning(disable : 4996) 

void input();
double calcMax(double* number);
double calcMin(double* number);
void output(double* number);

int main()
{
    input();
    return 0;
}

void input()
{
    double number[5];
    int i;
    for (i = 0; i <= 4; i++)
    {
        while (1)
        {
            double a;
            printf("%d번 방 값 : ", i);
            a = scanf("%lf", &number[i]);
            while (getchar() != '\n');
            if (a == 1)
                break;
        }
    }
    output(number);
}

double calcMax(double* number)
{
    int i;

    double max = number[0];
    for (i = 1; i <= 4; i++)
    {
        if (max < number[i])
            max = number[i];
    }
    return max;
}

double calcMin(double* number)
{
    int i;

    printf("number[0] : %.2lf\n",  number[0]);
    printf("number[1] : %.2lf\n",  number[1]);
    printf("number[2] : %.2lf\n",  number[2]);
    printf("number[3] : %.2lf\n",  number[3]);
    printf("number[4] : %.2lf\n",  number[4]);


    double min = number[0];
    for (i = 1; i < 5; i++)
    {
        if (min > number[i])
            min = number[i];
    }

     return min;
   
}

void output(double* number)
{
    printf("가장 큰 값 : % .2lf\n", calcMax(number));
    printf("가장 작은 값 : % .2lf ", calcMin(number));
}