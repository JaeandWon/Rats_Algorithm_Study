#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* DP�� �̿��� ǰ. 
   �� i��° �׵��� �迭�� ������ �������� ������ ���ʿ��� ��� ����*/
int arr[45] = { 0,1 };
void fib(int num)
{
    int i;
    if (num == 0)
        printf("0");
    else if (num == 1)
        printf("1");
    else // num >= 2
    {
        for (i = 2; i <= num; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];         
        }
        printf("%d", arr[i - 1]); // for���� �� �� �� ���Ƽ� -1 �������
    }    
}
int main()
{
    int n;
    scanf("%d", &n);
    fib(n);
}