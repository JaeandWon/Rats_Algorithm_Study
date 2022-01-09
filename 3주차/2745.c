#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int getdec(int num)
{
    if (num >= '0' && num <= '9') 
    {
        return(num - '0');
    }
    else if (num >= 'A' && num <= 'Z')
    {
        return(num - 55);
    }
    return 0;
}
int ppow(int a, int b)
{
    int res = 1;
    while (b != 0)
    {
        res *= a;
        b--;
    }
    return res;
}
int main()
{
    char n[10000];
    int b, res = 0;
    scanf("%s %d", &n, &b);

    int len = strlen(n);

    for (int i = 0; i < len; i++)
    {
        res += getdec(n[i]) * ppow(b, (len - 1 - i));
    }
    printf("%d", res);
}