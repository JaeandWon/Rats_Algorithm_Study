#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101  //단어의 길이는 100 
#define ALPHABET 26 //알파벳 개수는 총 26개 

int main()
{
    char S[SIZE]= " "; // = " "; 로 안하면 출력 형식 에러 뜸.. why?
    int alphabet[ALPHABET] = { 0 }; 

    scanf("%s", S);

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < ALPHABET; j++)
        {
            if (S[i] == 'a' + j)
            {
                alphabet[j]++;
            }
        }   
    }
    for (int j = 0; j < ALPHABET; j++)
    {
        if (j == ALPHABET - 1)
        {
            printf("%d", alphabet[j]);
        }
        else 
        {
            printf("%d ", alphabet[j]);
        }      
    }
}