#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fiv(int a, int b, int cnt)
{
    if (cnt == 0)
    {
        printf("%d", a);
    }
    else
    {
        a = a + b;
        fiv(b, a, --cnt);
    }   
}

int main()
{
    int n;
    scanf("%d", &n);
    
    fiv(0, 1, n);
}