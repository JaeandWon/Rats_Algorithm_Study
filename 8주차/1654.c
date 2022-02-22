#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k, n; //이미 갖고 있는 랜선의 개수, 필요한 랜선의 개수 
int arr[10000];
long long total = 0;

long long check(int len, int mid) // 배열, 배열의 길이, 나눌 값
{
    long long cnt = 0;
    for (int i = 0; i < len; i++)
    {
        cnt += arr[i] / mid;
    }

    return cnt;
}

long long binary_search(long long start, long long end)
{
    long long mid = 0;
    int res;

    while (start <= end)
    {
        mid = (start + end) / 2;
        res = check(k, mid);
        if (res >= n) // 숫자가 작음 -> 더 큰 숫자 탐색
        {
            if (total < mid) // 최댓값 저장 
                total = mid;

            start = mid + 1;
        }

        else if (res < n)  // 숫자가 너무 큼 -> 작은 숫자 탐색. 
        {
            end = mid - 1;
        }

    }

    return total;
}

int main()
{
    long long max = 0;
    scanf("%d %d", &k, &n);

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
            max = arr[i];
    }

    printf("%lld", binary_search(1, max));
}