#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = n - i; j > 0; j--) //공백 출력 
        {
            printf(" ");
        }
        if (i == n) //바닥
        {
            for (int k = 1; k <= 2 * n - 1; k++) // 2n-1 개
            {
                printf("*");
            }
        }
        else
        {
            for (int a = 1; a <= 2 * i - 1; a++)
            {
                if ((a == 1) || (a == 2 * i - 1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        
        printf("\n");
    }
}