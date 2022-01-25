#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, cnt = 0;
    scanf("%d %d", &n, &k);
    int* arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (k != 0)
    {
        if (k >= arr[n - 1])
        {
            k -= arr[n - 1];
            cnt++;
        }
        else
            n--;

    }
    printf("%d", cnt);
}