#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[10001]; 

int main()
{   
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = 0; j < arr[i]; j++)
                printf("%d\n", i);
        }         
    }
}