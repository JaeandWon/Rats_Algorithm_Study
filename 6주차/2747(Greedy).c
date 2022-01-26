#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_FIBO 50
int value[MAX_FIBO] = { 1,1 };

int main()
{
    int i = 0;


    int n;
    scanf("%d", &n);
    printf("%d", Fibonacci(n));



    return 0;
}
int Fibonacci(int n)
{
    if (n < 1)
    {
        return 0;
    }
    if (value[n - 1])
    {
        return value[n - 1];
    }
    value[n - 1] = Fibonacci(n - 2) + Fibonacci(n - 1);
    return value[n - 1];
}