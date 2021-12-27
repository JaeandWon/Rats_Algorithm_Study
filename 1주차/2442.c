#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = (n-1); k > i; k--) //공백 출력 
        {
            printf(" ");
        }

        for (int j = (-i); j <= i; j++) //별 2n-1번 출력 (n은 1부터)
        {
            printf("*");
        }
        printf("\n");
    }
}