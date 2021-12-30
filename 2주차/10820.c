#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 소문자 대문자 숫자 공백 개수 

int main()
{
    char S[101];
    int space, large, small, num;
 
    while (gets(S) != '\0')  //scanf("%[]")..? 
    {
        space = 0, large = 0, small = 0, num = 0;
        for (int i = 0; i < strlen(S); i++)
        {
            if ((S[i] >= 'A') && (S[i] <= 'Z'))
                large++;
            else if ((S[i] >= 'a') && (S[i] <= 'z'))
                small++;
            else if ((S[i] >= '0') && (S[i] <= '9'))
                num++;
            else if (S[i] == ' ')
                space++;
        }
        printf("%d %d %d %d\n", small, large, num, space);
    }
}

