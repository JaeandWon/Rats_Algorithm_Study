#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /* i = ���� ��
    *  n = �� ���� ���� 
    * n�� �Է��ϸ� �� ���� 2n -1 �� 
    *              �� ���� 2n 
    */
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // 1���� n�� ���� 
    {
        for (int j = 1; j <=  2 * n; j++) 
        {
            if ((j <= i) || (j > 2 * n - i)) //�� ��� 
            {
                printf("*");
            }
            else //���� ��� 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for (int k = n - 1 ; k > 0; k--) // n+1�� ���� 2n -1 �� 
    {
        for (int w = 1; w <= 2 * n; w++)
        {
            if ((w <= k ) || (w > 2 * n - k ))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}