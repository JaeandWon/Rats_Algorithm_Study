#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, num, cnt = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        
        for (int j = 2; j <= num; j++)
        {
            if (num % j == 0)
            {
                if (num == j)
                    cnt++;
                else
                    break;
            }
        }
    }
    
    printf("%d", cnt);
}