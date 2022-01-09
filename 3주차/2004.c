#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_five(int num)
{
    int cnt = 0;
    for (long long i = 5; num / i >= 1; i *= 5)
        cnt += num / i;

    return cnt;

}
int get_two(int num) 
{
    int cnt = 0;

    for (long long i = 2; num / i >= 1; i *= 2)
        cnt += num / i;

    return cnt;
}

int main()
{ 
    int n, k;
    scanf("%d %d", &n, &k);
    int five = 0, two = 0;

    five += get_five(n);
    five -= get_five(k);
    five -= get_five(n - k);

    two += get_two(n);
    two -= get_two(k);
    two -= get_two(n - k);

    two < five ? printf("%d", two) : printf("%d", five);
    
}