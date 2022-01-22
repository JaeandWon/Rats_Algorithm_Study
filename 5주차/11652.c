#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long num[100001];
long long temp[100001];
void merge(long long arr[], int start, int cen, int end)
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

void merge_sort(long long arr, int start, int end)
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
    int n, cnt, res = 0;
    long long a;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &num[i]);
    }

    merge_sort(num, 0, n - 1);

    for (int i = 1; i < n; i++)
    {
        for (cnt = 0; num[i - 1] == num[i]; i++)
        {
            cnt++;
        }
        if (res < cnt)
        {
            res = cnt;
            a = num[i - 1];
        }

    }
    if (res == 0) // n에 0을 입력할 경우
    {
        a = num[0];
    }

    printf("%lld\n", a);

}