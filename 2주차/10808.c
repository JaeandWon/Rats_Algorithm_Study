#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101  //�ܾ��� ���̴� 100 
#define ALPHABET 26 //���ĺ� ������ �� 26�� 

int main()
{
    char S[SIZE]= " "; // = " "; �� ���ϸ� ��� ���� ���� ��.. why?
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