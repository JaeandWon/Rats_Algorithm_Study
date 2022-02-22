#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 15
int dp[SIZE] = { 0,1,2,4 };
int get_num(int n)
{
    for (int i = 4; i < SIZE; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n];
}
int main()
{
    int t, n;  
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", get_num(n));

    }

}