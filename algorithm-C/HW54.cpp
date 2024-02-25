#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#pragma warning (disable:4996) 

int random(int);
void numInput(int(*)[4], int);
void output(int(*)[4], int);
void myflush();

int main() {
    srand((unsigned int)time(NULL));

    int num[3][4];
    int row = sizeof(num) / sizeof(num[0]);
    int col = sizeof(num[0]) / sizeof(num[0][0]); 
    numInput(num, row);
    output(num, row);
    return 0;
}


int random(int n) {
    int res;
    res = rand() % n + 1;
    return res;
}


void numInput(int(*p)[4], int row) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 4; j++) {
            p[i][j] = random(10);
        }

    }

}

void output(int(*p)[4], int row) {
    int i, j, sum;
    for (i = 0; i < row; i++) {
        sum = 0; 
        printf("%d행    : " , i);
        for (j = 0; j< 4; j++) {
            printf("%3d" , p[i][j]);
            sum += p[i][j];
        }
        printf(" %3d행의 합 : % d\n" , i, sum);

     }
    printf("열의 합: ");

   for (i = 0; i < 4; i++) {
       sum = 0;
        for (j = 0; j < row; j++) {
          sum += p[j][i];
         }
          printf("%3d", sum);
            
    }printf(" \n");
    return;
}

void myflush()
{
    while (getchar() != '\n')
    {
        ;
    }
    return;
}