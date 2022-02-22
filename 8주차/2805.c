#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000001], n, m, res;  //���� ����� �迭, ������ ����, ������ ���������� �ϴ� ������ ����, ���

//�߸��� ���� �������� �� ������ ���� ���  
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
        total = cal_height(mid);  // �߸� �������� �� -> m �� ��

        if (total >= m) {
            if (res < mid) // ����� �� max �� ���� 
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

    scanf("%d %d", &n, &m); // ������ ����, ������ ���������� �ϴ� ������ ����


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (max < arr[i]) {  // ���� ���� �� �ִ밪�� max�� ����
            max = arr[i];
        }
    }

    printf("%d ", binary_search(0, max));
}