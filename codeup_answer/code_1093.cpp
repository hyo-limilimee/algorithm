#include<stdio.h>
#pragma warning(disable: 4996)

int main() 
{
    int arr[24] = { };

    int num;
    int num2;

    scanf("%d", &num); //출석 번호 부른 횟수 입력받기

    for (int i = 1; i <= num; i++) // 출석 번호 부른 횟수 만큼 반복
    {
        scanf("%d", &num2); // 출석번호 입력받기

        arr[num2] += 1; //불린 횟수 세기
    }

    for (int i = 1; i <= 23; i++) 
    {
        printf("%d ", arr[i]);  //횟수 출력
    }

    return 0;
}