#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char arr[51];
int main()
{
    int t, cnt;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", arr);

        int len = strlen(arr);
        cnt = 0;

        for (int j = 0; j < len; j++)
        {
            if (cnt < 0)
                break;
            else if (arr[j] == '(')
                cnt++;
            else if (arr[j] == ')')
                cnt--;
        }
        if (cnt == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}