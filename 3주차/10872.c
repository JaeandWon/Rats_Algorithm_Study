#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fac(int num) //팩토리얼 계산 
{
    int res = 1;
    while (1)
    {
        if (num == 0)
            break;
        res *= num--;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fac(n));
}