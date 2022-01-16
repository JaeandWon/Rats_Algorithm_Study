#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int idx = -1;
int arr[10001];
void push(int num)
{
    arr[++idx] = num;
}

void pop()
{
    if (idx < 0)
        printf("-1\n"); // if stack empty 
    else
    {
        printf("%d\n", arr[idx--]);
    }  
}

void size()
{
    printf("%d\n", idx + 1);
}

void empty()
{
    if (idx < 0)
        printf("1\n"); //if stack empty 
    else
        printf("0\n"); //if not 
}

void top()
{
    if (idx < 0)
        printf("-1\n"); // if stack empty
    else
        printf("%d\n", arr[idx]); // if not 
}

int main()
{
    int n, num;
    char command[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "push"))
        {
            scanf("%d", &num);
            push(num);
        }
        if (!strcmp(command, "pop"))
            pop();
        if (!strcmp(command, "size"))
            size();
        if (!strcmp(command, "empty"))
            empty();
        if (!strcmp(command, "top"))
            top();
    }
}