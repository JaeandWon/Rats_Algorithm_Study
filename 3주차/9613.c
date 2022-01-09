#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int GETGCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        return GETGCD(num2, num1 % num2);
}
int main()
{
    GETGCD(12, 18);
    int t, n;
    long long res; // long long 
    int arr[101];

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    { 
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d" ,&arr[j]);
        }
        res = 0;
        for (int k = 0; k < n; k++)
        {
            for (int i = k + 1; i < n; i++)
            {
                res += GETGCD(arr[k], arr[i]);
            }
        }
        printf("%lld\n", res);
    }
}