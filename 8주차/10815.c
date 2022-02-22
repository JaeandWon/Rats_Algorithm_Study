#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sorted[500001];
void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* ���� ���ĵ� list�� �պ� */
    while (i <= mid && j <= right) 
    {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // ���� �ִ� ������ �ϰ� ����
    if (i > mid) 
    {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    // ���� �ִ� ������ �ϰ� ����
    else 
    {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    // �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
    for (l = left; l <= right; l++) 
    {
        list[l] = sorted[l];
    }
}

// �պ� ����
void merge_sort(int list[], int left, int right) {
    int mid;

    if (left < right) 
    {
        mid = (left + right) / 2; // �߰� ��ġ�� ����Ͽ� ����Ʈ�� �յ� ���� -����(Divide)
        merge_sort(list, left, mid); // ���� �κ� ����Ʈ ���� -����(Conquer)
        merge_sort(list, mid + 1, right); // ���� �κ� ����Ʈ ���� -����(Conquer)
        merge(list, left, mid, right); // ���ĵ� 2���� �κ� �迭�� �պ��ϴ� ���� -����(Combine)
    }
}

int binary_search(int arr[],int start, int end, int key) // �迭, ����, ��, Ž���Ϸ��� ����
{
    int mid;

    while (start <= end) {
        mid = (end + start) / 2;
        if (key == arr[mid]) {            //Ž�� ����
            return 1;
        }
        else if (key < arr[mid]) {        //Ž�� ������ �Ʒ�������
            end = mid - 1 ;
        } 
        
        else if (key > arr[mid]) {        //Ž�� ������ ��������
            start = mid + 1;
        }
    }
    return 0;                            //Ž�� ����
}

int main()
{
    int n, m;
    
    scanf("%d", &n);
    int* arr1 = (int*)malloc(sizeof(int) * n); //arr1 : ����̰� ������ �ִ� ī�� �迭 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int* arr2 = (int*)malloc(sizeof(int) * m); //arr2 : ����̰� ������ �ִ��� �˻��� �迭
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    merge_sort(arr1, 0, n-1); // arr1 ���� 

    for (int i = 0; i < m; i++)
    {
        printf("%d ", binary_search(arr1, 0, n, arr2[i]));
    }
  
}