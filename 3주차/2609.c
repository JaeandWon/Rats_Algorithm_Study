#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*��Ŭ���� ȣ���� */
int main()
{
    int a, b;
    int min = 0, max;
    scanf("%d %d", &a, &b);

    for (int i = 1; (i <= a) && (i <= b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            min = i;
    }
    max = a * b / min; // LCM = �� �ڿ��� �� / GCD
    printf("%d\n%d", min, max);
}
