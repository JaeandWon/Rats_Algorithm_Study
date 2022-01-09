#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char num[100000] = { 0 };

void print(char num)
{
    if (num >= 10)
    {
        printf("%c", num + 55);
    }
    else
    {
        printf("%d", num);
    }
}
int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    int i = 0;
    while (n != 0 && n != 1)
    {
        num[i++] = n % b;
        n /= b;
    }
    if (n == 1)
    {
        num[i] = n;
        for (int j = i; j >= 0; j--)
        {
            print(num[j]);
        }
    }
    else if (n == 0)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            print(num[j]);
        }
    }
}