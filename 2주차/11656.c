#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char S[1001] = { 0 };
char arr[1001][1001] = { 0 };
char temp[1001] = { 0 };

int main()
{
    int len;
    scanf("%s", S);

    len = strlen(S);
    
    for (int i = 1; i <= len; i++) //접미사 저장 
    {
        for (int j = 0; j <= i; j++)
        {
            arr[i - 1][j] = S[len - i + j];
        }
    }
    
    for (int i = 0; i < len - 1; i++) //정렬
    {
        for (int j = 1; j < len; j++) 
        {
            if (strcmp(arr[j - 1], arr[j]) > 0)
            {
                strcpy(temp, arr[j - 1]);
                strcpy(arr[j - 1], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    
    for (int i = 0; i < len; i++) //출력 
    {
        printf("%s\n", arr[i]);
    }   
}
