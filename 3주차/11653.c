#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* ���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d\n", i);
            n /= i;
        }
    }
}