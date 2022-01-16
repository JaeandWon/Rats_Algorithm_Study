#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[10001];
int front_idx = 0, rear_idx = 0;
void push(int num)
{
    arr[rear_idx++] = num;
}
void pop()
{
    if (front_idx == rear_idx)
        printf("-1\n");
    else
        printf("%d\n", arr[front_idx++]);
}
void size()
{
    if (front_idx == rear_idx)
        printf("0\n");
    else
        printf("%d\n", rear_idx - front_idx);
}
void empty()
{
    if (front_idx == rear_idx)
        printf("1\n");
    else
        printf("0\n");
}
void front()
{
    if (front_idx == rear_idx)
        printf("-1\n");
    else
        printf("%d\n", arr[front_idx]);
}
void back()
{
    if (front_idx == rear_idx)
        printf("-1\n");
    else
        printf("%d\n", arr[rear_idx - 1]);
}
int main()
{
    int n, num ;
    char command[10];
    scanf("%d", &n);
    while (n-- != 0)
    {
        scanf("%s", command);
        if (!strcmp(command, "push"))
        {
            scanf("%d", &num);
            push(num);
        }
        else if (!strcmp(command, "pop"))
        {
            pop();
        }
        else if (!strcmp(command, "size"))
        {
            size();
        }
        else if (!strcmp(command, "empty"))
        {
            empty();
        }
        else if (!strcmp(command, "front"))
        {
            front();
        }
        else if (!strcmp(command, "back"))
        {
            back();
        }

    }
}