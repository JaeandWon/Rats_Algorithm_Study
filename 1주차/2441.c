#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++) //공백 출력 same as for (int j = 0; j < i; k++)
        {
            printf(" ");
        }

        for (int k = n; k > i; k--) //별 출력
        {
            printf("*");
        }
        printf("\n");
    }
}
