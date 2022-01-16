#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char arr[100001];

int main()
{
    int bar = 0, res = 0;
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 1; i <= len; i++)
    {
        if (arr[i - 1] == '(' && arr[i] == ')') //Lazer 
        {
            i++; //레이저는 괄호 두 개를 차지하므로 index를 두 칸 이동시켜야함
            res += bar;
            continue;
        }
        else if (arr[i - 1] == '(')
            bar++;
        else if (arr[i - 1] == ')')
        {
            bar--;
            res++;  // 막대기 끝나면 조각 한 개 추가. 
        }
    }
    printf("%d", res);
}
