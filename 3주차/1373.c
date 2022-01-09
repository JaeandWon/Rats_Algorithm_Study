#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char bin[1000001] = { 0 };

int main()
{
    scanf("%s", bin);

    int len = strlen(bin);

    if (len % 3 == 1)
        printf("%d", bin[0] - 48);
    else if (len % 3 == 2)
        printf("%d", 2 * (bin[0] - 48) + bin[1] - 48);

    for (int i = len % 3; i < len; i += 3)
    {
        printf("%d", 4 * (bin[i] - 48) + 2 * (bin[i + 1] - 48) + bin[i + 2] - 48);
    }
}