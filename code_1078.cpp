#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{

    int num, sum;
    scanf("%d", &num);
    sum = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}