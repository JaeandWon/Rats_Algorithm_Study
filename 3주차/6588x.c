#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int arr[1000001] = { 1,1 };

int main()
{
    for (int i = 2; i <= sqrt(100000); i++)
    {
        for (int j = i * i; j <= 100000; j += i)
        {
            arr[j] = 1;
        }
    }

    for (int i = 3; i <= 100000; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }

}