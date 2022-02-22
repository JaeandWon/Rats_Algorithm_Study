#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sorted[500001];
void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* 분할 정렬된 list의 합병 */
    while (i <= mid && j <= right) 
    {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // 남아 있는 값들을 일괄 복사
    if (i > mid) 
    {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    // 남아 있는 값들을 일괄 복사
    else 
    {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for (l = left; l <= right; l++) 
    {
        list[l] = sorted[l];
    }
}

// 합병 정렬
void merge_sort(int list[], int left, int right) {
    int mid;

    if (left < right) 
    {
        mid = (left + right) / 2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
        merge_sort(list, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
        merge_sort(list, mid + 1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
        merge(list, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
    }
}

int binary_search(int arr[],int start, int end, int key) // 배열, 시작, 끝, 탐색하려는 숫자
{
    int mid;

    while (start <= end) {
        mid = (end + start) / 2;
        if (key == arr[mid]) {            //탐색 성공
            return 1;
        }
        else if (key < arr[mid]) {        //탐색 범위를 아래쪽으로
            end = mid - 1 ;
        } 
        
        else if (key > arr[mid]) {        //탐색 범위를 위쪽으로
            start = mid + 1;
        }
    }
    return 0;                            //탐색 실패
}

int main()
{
    int n, m;
    
    scanf("%d", &n);
    int* arr1 = (int*)malloc(sizeof(int) * n); //arr1 : 상근이가 가지고 있는 카드 배열 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int* arr2 = (int*)malloc(sizeof(int) * m); //arr2 : 상근이가 가지고 있는지 검사할 배열
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    merge_sort(arr1, 0, n-1); // arr1 정렬 

    for (int i = 0; i < m; i++)
    {
        printf("%d ", binary_search(arr1, 0, n, arr2[i]));
    }
  
}