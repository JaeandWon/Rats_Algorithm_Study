#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10000
int arr[2*SIZE + 1];
int idx_front = SIZE, idx_back = SIZE;

void push_front(int num)
{
    arr[idx_front--] = num;
}
void push_back(int num)
{
    arr[++idx_back] = num;
}
void pop_front()
{
    if (idx_front == idx_back)
        printf("-1\n");
    else
        printf("%d\n", arr[++idx_front]);
}
void pop_back()
{
    if (idx_front == idx_back)
        printf("-1\n");
    else
        printf("%d\n", arr[idx_back--]);
}
void size()
{
    printf("%d\n", idx_back - idx_front );
}
void empty()
{
    if (idx_front == idx_back)
        printf("1\n");
    else
        printf("0\n");
}
void front()
{
    if (idx_front == idx_back)
        printf("-1\n");
    else
        printf("%d\n", arr[idx_front + 1]);
}

void back()
{
    if (idx_front == idx_back)
        printf("-1\n");
    else
        printf("%d\n", arr[idx_back]);
}

int main()
{
    int n, num;
    char command[20];
    scanf("%d", &n);

    while (n-- != 0)
    {
        scanf("%s", command);

        if (!strcmp(command, "push_front"))
        {
            scanf("%d", &num);
            push_front(num);

        }
        else if (!strcmp(command, "push_back"))
        {
            scanf("%d", &num);
            push_back(num);
        }
        else if (!strcmp(command, "pop_front"))
        {
            pop_front();
        }
        else if (!strcmp(command, "pop_back"))
        {
            pop_back();
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