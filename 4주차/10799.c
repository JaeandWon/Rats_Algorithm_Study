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
            i++; //�������� ��ȣ �� ���� �����ϹǷ� index�� �� ĭ �̵����Ѿ���
            res += bar;
            continue;
        }
        else if (arr[i - 1] == '(')
            bar++;
        else if (arr[i - 1] == ')')
        {
            bar--;
            res++;  // ����� ������ ���� �� �� �߰�. 
        }
    }
    printf("%d", res);
}
