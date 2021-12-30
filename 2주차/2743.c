#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char string[101] = " ";
    int len = 0;
    scanf("%s", string);
    for (int i = 0; i < 101; i++)
    {
        if (string[i] >= 'A')
            len++;
    }
    printf("%d", len);
}