#include<stdio.h>
#pragma warning(disable: 4996)

int main() 
{
    int arr[24] = { };

    int num;
    int num2;

    scanf("%d", &num); //�⼮ ��ȣ �θ� Ƚ�� �Է¹ޱ�

    for (int i = 1; i <= num; i++) // �⼮ ��ȣ �θ� Ƚ�� ��ŭ �ݺ�
    {
        scanf("%d", &num2); // �⼮��ȣ �Է¹ޱ�

        arr[num2] += 1; //�Ҹ� Ƚ�� ����
    }

    for (int i = 1; i <= 23; i++) 
    {
        printf("%d ", arr[i]);  //Ƚ�� ���
    }

    return 0;
}