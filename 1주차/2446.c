#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, space = 0;

    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) //2n-1 ÃþºÎÅÍ nÃþ±îÁö 
    {
        if (n > i)
        {
            space++;
        }
        else
        {
            space--;
        }
        for (int k = 1; k < space; k++)
        {
            printf(" ");
        }
        if (n > i)
        {
            for (int j = 1; j < 2 * n - i * 2; j++)
            {
                printf("*");
            }
        }
        else  
        {
            for (int h = 1; h <= 2*(i - n + 1) + 1; h++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}