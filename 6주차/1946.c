#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int a; // 서류심사 순위
    int b; // 면접 성적의 순위
} Person;

Person temp[100000];
void merge(Person arr[], int start, int cen, int end)
{
    int i, j, k, l;
    i = start;
    j = cen + 1;
    k = start;

    while (i <= cen && j <= end) {
        if (arr[i].a <= arr[j].a)
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    if (i > cen)
    {
        for (l = j; l <= end; l++)
        {
            temp[k++] = arr[l];
        }
    }
    else
    {
        for (l = i; l <= cen; l++)
        {
            temp[k++] = arr[l];
        }
    }

    for (l = start; l <= end; l++)
    {
        arr[l] = temp[l];
    }
}

void merge_sort(Person* arr, int start, int end)
{
    int cen = (start + end) / 2;
    if (start < end) {
        merge_sort(arr, start, cen);
        merge_sort(arr, cen + 1, end);
        merge(arr, start, cen, end);
    }
}

int main()
{
    int t, n, max, res;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        Person* person = (Person*)malloc(sizeof(Person) * n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &person[i].a, &person[i].b);
        }

        merge_sort(person, 0, n - 1); // 서류순위 오름차순 정렬

        max = person[0].b, res = 1;

        for (int i = 1; i < n; i++)
        {
            if (person[i].b < max)
            {
                res++;
                max = person[i].b;
            }
        }
        printf("%d\n", res);
    }
}