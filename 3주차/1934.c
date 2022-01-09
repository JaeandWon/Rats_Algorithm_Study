#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int T, A, B, res = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);

        for (int i = 1; i <= A && i <= B; i++)
        {
            if (A % i == 0 && B % i == 0)
                res = i;
        }
        printf("%d\n", A * B / res);
    }
}