#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.*/

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d\n", i);
            n /= i;
        }
    }
}