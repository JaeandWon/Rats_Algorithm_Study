#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX 1000000
#define MIN 1
long long check(long long num1, long long cnt)
{
    while (num1 > 0)
    {
        num1 /= 10;
        cnt++;
    }
    return cnt;
}

long long ppow(long long new_num) //math.h에서 지원하는 pow함수는 double형이라 그냥 따로 만듦.
{
    long long a = 1;
    for (int i = 0; i < new_num; i++)
    {
        a *= 10;
    }
    return a;
}
int main()
{
    long long a, b, c, d;
    long long new_b, new_d, res;
    while (1)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if (a > MAX || a < MIN || b > MAX || b < MIN || c > MAX || c < MIN || d > MAX || d < MIN)
        {
            printf("Out of Range\n");
            continue;
        }
        else
        {
            new_b = check(b, 0), new_d = check(d, 0);
            res = (ppow(new_b) * a + b) + (ppow(new_d) * c + d);
            printf("%lld\n", res);
            break;
        }
    }
}