#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char res[10000000];
int i = 0;
int ppow(int a, int b)
{
    int res = 1;
    while (b != 0)
    {
        res *= a;
        b--;
    }
    return res;
}
void print(char num)
{

    if (num >= 10)
    {
        printf("%c ", num + 55);
    }
    else
    {
        printf("%d ", num);
    }

}
//10진수로 변환
int A_to_Ten(int m, int a) //parameter explanaion: 자릿수, A
{
    int num, sum = 0;
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &num);

        sum += ppow(a, (m - i)) * num; 
    }
   
    return sum;
}
//B진수로 변환
void Ten_to_B(int n, int b) //parameter explanaion: 10진수, B
{
    int i = 0;
    while (n != 0 && n != 1)
    {
        res[i++] = n % b;
        n /= b;
    }
    if (n == 1)
    {
        res[i] = n;
        for (int j = i; j >= 0; j--)
        {
            print(res[j]);
        }
    }
    else if (n == 0)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            print(res[j]);
        }
    }
}

int main()
{
    int a, b, m;
    scanf("%d %d", &a, &b);
    scanf("%d", &m);
    Ten_to_B(A_to_Ten(m, a), b);
    
}

