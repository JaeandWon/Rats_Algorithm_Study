#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int arr[1000001] = { 1,1 };

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);

    for (int i = 2; i <= sqrt(N); i++)
    {
        for (int j = i * i; j <= N; j += i)
        {
            arr[j] = 1;
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }
}