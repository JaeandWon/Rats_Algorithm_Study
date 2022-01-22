#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} XY;

XY abc[100000]; // merge sort를 위한 배열
void merge(XY* xy, int start, int mid, int end)
{
    int i, j, k;
    i = start;
    j = mid + 1;
    k = start;

    while (i <= mid && j <= end)
    {
        if (xy[i].y < xy[j].y)
            abc[k++] = xy[i++];

        else if (xy[i].y > xy[j].y)
            abc[k++] = xy[j++];

        else if (xy[i].y == xy[j].y)
        {
            if (xy[i].x < xy[j].x)
                abc[k++] = xy[i++];

            else if (xy[i].x > xy[j].x)
                abc[k++] = xy[j++];
        }
    }

    if (i <= mid)
    {
        while (i <= mid)
            abc[k++] = xy[i++];
    }
    else
    {
        while (j <= end)
            abc[k++] = xy[j++];
    }

    for (k = start; k <= end; k++)
        xy[k] = abc[k];
}

void merge_sort(XY* xy, int start, int end)
{
    int mid = (start + end) / 2;
    if (start < end) {
        merge_sort(xy, start, mid);
        merge_sort(xy, mid + 1, end);
        merge(xy, start, mid, end);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    XY* arr = (XY*)malloc(sizeof(XY) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
}