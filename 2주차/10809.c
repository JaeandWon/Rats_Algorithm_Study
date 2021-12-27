#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101  //단어의 길이는 100 
#define ALPHABET 26 //알파벳 개수는 총 26개 
/*
* 입력
* 공백인지 아닌지 판단
* 알파벳이면 
*/
int main()
{
    char S[SIZE] = " ";
    int index[ALPHABET] = { 0 }; //배열을 0이 아닌 숫자 n으로 초기화 못함. 

    scanf("%s", S);

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < ALPHABET; j++)
        {
            if (S[i] == 'a' + j);
            {
                index[j] = j;
            }
            else if (S[i] == NULL)
            {
                index[j] = -1;
            }
        }

    }

    for (int j = 0; j < ALPHABET; j++)
    {
        printf("%d ", index[j]);
    }
}