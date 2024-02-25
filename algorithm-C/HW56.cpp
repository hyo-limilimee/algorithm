#include<stdio.h> 
#include<string.h>
#pragma warning(disable: 4996) 

void input(char(*p)[20]);
void sort(char(*p)[20]);
void output(char(*p)[20]);

int main()
{
    char str[5][20];
    input(str);
    sort(str);
    output(str);
    return 0;

}

void input(char(*p)[20])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("# % d번 문자열을 입력하시오 : ", i + 1);
        scanf("%s", p[i]);
    }
    return;

}

void sort(char(*p)[20])
{

    int i, j;
    char temp;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            int n = strcmp(p[i], p[j]);
            if (n > 0)
            {
                temp = *p[i];
                *p[i] = *p[j];
                *p[j] = temp;

            }
        }
    }
    return;
}

void output(char(*p)[20])
{
    int i;
    for (i = 0; i< 5; i++)
    {

        printf("str[% d] = % s\n", i, p[i]);
    }
    return;
}

