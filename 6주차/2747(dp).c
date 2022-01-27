#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* DP를 이용해 품. 
   각 i번째 항들을 배열에 저장해 꺼내쓰는 식으로 불필요한 계산 생략*/
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
        printf("%d", arr[num]); // for문이 한 번 더 돌아서 -1 해줘야함
    }    
}
int main()
{
    int n;
    scanf("%d", &n);
    fib(n);
}
