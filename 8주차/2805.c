#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000001], n, m, res;  //나무 저장된 배열, 나무의 개수, 집으로 가져가려고 하는 나무의 길이, 결과

//잘리고 남은 나무들의 각 길이의 합을 계산  
long long  cal_height(int mid)  
{
    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
            total += arr[i] - mid;
    }

    return total;
}

int binary_search(int start, int end)
{
    int mid = 0;
    long long total = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;
        total = cal_height(mid);  // 잘린 나무들의 합 -> m 과 비교

        if (total >= m) {
            if (res < mid) // 결과들 중 max 값 저장 
                res = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return res; 
}

int main()
{
    int max = 0;

    scanf("%d %d", &n, &m); // 나무의 개수, 집으로 가져가려고 하는 나무의 길이


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (max < arr[i]) {  // 나무 길이 중 최대값을 max에 저장
            max = arr[i];
        }
    }

    printf("%d ", binary_search(0, max));
}