#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char string[101] = " ";
    char print[101];
    int len;
    while (gets(string) != NULL)
    {
        len = strlen(string);
        for (int i = 0; i < len; i++)
        {
            if (string[i] > 'm') //소문자 초과 (~m)
            {
                print[i] = string[i] - 13; 
            }
            else if (string[i] > 'M' && string[i] < 97) //대문자 초과 (~M)
            {
                print[i] = string[i] - 13;
            }
            else if(string[i] == ' ') //공백
            {
                print[i] = string[i];
                continue;
            }
            else if (string[i] >= 48 && string[i] <= 57) //숫자 
            {
                print[i] = string[i];
                continue;
            }
            else
            {
                print[i] = string[i] + 13;
            }
        }     
        for (int j = 0; j < len; j++)
        {
            printf("%c", print[j]);
        }
    }
}