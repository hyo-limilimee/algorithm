#include<stdio.h>
#pragma warning (disable: 4996)

int main()
{
    int n;
    scanf("%X", &n);

    for (int i = 1; i <= 15; i++) 
    {
        printf("%X*%X=%X\n", n, i, n * i);

    }

    return 0;
}