#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /* i = ⑷營 類
    *  n = 識 類曖 偃熱 
    * n擊 殮溘ж賊 識 類擎 2n -1 類 
    *              陝 還擎 2n 
    */
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // 1睡攪 n類 梱雖 
    {
        for (int j = 1; j <=  2 * n; j++) 
        {
            if ((j <= i) || (j > 2 * n - i)) //滌 轎溘 
            {
                printf("*");
            }
            else //奢寥 轎溘 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for (int k = n - 1 ; k > 0; k--) // n+1類 睡攪 2n -1 類 
    {
        for (int w = 1; w <= 2 * n; w++)
        {
            if ((w <= k ) || (w > 2 * n - k ))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}