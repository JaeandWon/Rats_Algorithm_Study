#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101  //�ܾ��� ���̴� 100 
#define ALPHABET 26 //���ĺ� ������ �� 26�� 
/*
* �Է�
* �������� �ƴ��� �Ǵ�
* ���ĺ��̸� 
*/
int main()
{
    char S[SIZE] = " ";
    int index[ALPHABET] = { 0 }; //�迭�� 0�� �ƴ� ���� n���� �ʱ�ȭ ����. 

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