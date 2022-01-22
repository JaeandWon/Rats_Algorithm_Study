#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    int order;
    char name[101];
} Person;

Person temp[100000];

void merge(Person* person, int start, int mid, int end)
{
    int i, j, k;
    i = start;
    j = mid + 1;
    k = start;

    while (i <= mid && j <= end)
    {
        // 나이비교
        if (person[i].age < person[j].age)
            temp[k++] = person[i++];

        else if (person[i].age > person[j].age)
            temp[k++] = person[j++];

        else if (person[i].age == person[j].age) // 나이가 같으면
        {
            if (person[i].order < person[j].order)
                temp[k++] = person[i++];
            else
                temp[k++] = person[j++];
        }
            
    }

    if (i <= mid)
    {
        while (i <= mid)
            temp[k++] = person[i++];
    }
    else
    {
        while (j <= end)
            temp[k++] = person[j++];
    }

    for (k = start; k <= end; k++)
        person[k] = temp[k];
}

void merge_sort(Person* person, int start, int end)
{
    int mid = (start + end) / 2;
    if (start < end)
    {
        merge_sort(person, start, mid);
        merge_sort(person, mid + 1, end);
        merge(person, start, mid, end);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Person* arr = (Person*)malloc(sizeof(Person) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &arr[i].age, arr[i].name);
        arr[i].order = i;
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", arr[i].age, arr[i].name);    
    }
}