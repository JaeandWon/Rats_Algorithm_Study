#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) //�� ����: 2n - 1 ��
    {
        for (int j = n - i; j > 0; j--) //���� ���� n - 1 ~ 0�� 
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) //�� ����: 1 ~ n ��
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++) //���� ����: 1 ~ n -1 ��
        {
            printf(" ");
        }
        for (int k = n - i; k > 0; k--) //�� ���� n-1 ~ 1�� 
        {
            printf("*");
        }
        printf("\n");
    }
}