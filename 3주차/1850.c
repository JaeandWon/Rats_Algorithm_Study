#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long getGCD(long long  num1, long long  num2) //Euclidean Algorithm 
{
    if (num2 == 0)
        return num1;
    else
        return getGCD(num2, (num1 % num2));
}

int main()
{
    long long a, b, res1 = 0, res2 = 0;
    scanf("%lld %lld", &a, &b);

    res1 = getGCD(a, b);

    while (res1--)
    {
        printf("1");
    }
}