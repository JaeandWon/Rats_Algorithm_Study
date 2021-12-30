#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 101  
#define ALPHABET 26

int main()
{
    char S[SIZE] = " ";
    int alphabet[ALPHABET] = { 0 };
    int length, index;

    scanf("%s", S);
    length = strlen(S); // sizeof(S)/sizeof(int)하면 틀림 

    for (int i = 0; i < ALPHABET; i++) 
    {
        alphabet[i] = -1;
    }

    for (int j = 0; j < length; j++)
    {
        index = S[j] - 'a';
        if (alphabet[index] == -1)
        {
            alphabet[index] = j;
        }
    }

    for (int i = 0; i < 26; i++) 
    { 
        printf("%d", alphabet[i]);
    
        if (i < 25) 
            printf(" "); 
    }

}