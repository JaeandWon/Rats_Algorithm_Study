#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int temp[1000000];
int arr[1000000];

void merge(int arr[], int start, int cen, int end)
{
    int i, j, k, l;
    i = start;
    j = cen + 1;
    k = start;
    
    while (i <= cen && j <= end) {
        if (arr[i] <= arr[j]) 
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

void merge_sort(int arr, int start, int end)
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
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     merge_sort(arr, 0, n - 1);

     for (int i = 0; i < n; i++)
         printf("%d\n", arr[i]);
}