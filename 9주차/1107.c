#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[6]; //수빈이 채널
int button[10] = { 1,1,1,1,1,1,1,1,1,1};
int main()
{
    int n,i = 0;
    scanf("%d", &n);
    
    int div = 1000000, k = n;
    while (k)
    {
        if (k % div == n)
        {
            div /= 10;
            continue;
        }
       
        arr[i++] = k / div;
        k %= div;
        div /= 10;
    }

    int m, idx;
    scanf("%d", &m);x
    while (m--)
    {
        scanf("%d", &idx);
        button[idx] = 0;
    }

    int j = 0, cnt = 0;
    while (1)
    {
        if (button[arr[j++]] == 1)  //버튼 존재
        {
            cnt++;
            continue;
        }
        else
        {

        }
    }
}