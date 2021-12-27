#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) //층 개수: 2n - 1 층
    {
        for (int j = n - i; j > 0; j--) //공백 개수 n - 1 ~ 0개 
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) //별 개수: 1 ~ n 개
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++) //공백 개수: 1 ~ n -1 개
        {
            printf(" ");
        }
        for (int k = n - i; k > 0; k--) //별 개수 n-1 ~ 1개 
        {
            printf("*");
        }
        printf("\n");
    }
}