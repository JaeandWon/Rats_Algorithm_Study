#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = (n-1); k > i; k--) //���� ��� 
        {
            printf(" ");
        }

        for (int j = (-i); j <= i; j++) //�� 2n-1�� ��� (n�� 1����)
        {
            printf("*");
        }
        printf("\n");
    }
}