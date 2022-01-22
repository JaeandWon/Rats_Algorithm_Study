#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int korean;
    int english;
    int math;
    char name[11]; // NULL값
} Score;

Score temp[100000];

void merge(Score* person, int start, int mid, int end)
{
    int i, j, k;
    i = start;
    j = mid + 1;
    k = start;
    /* 국어: 감소
       영어: 증가
       수학: 감소
       이름: 증가
    */
    while (i <= mid && j <= end)
    {
        // 국어 비교
        if (person[i].korean > person[j].korean)
            temp[k++] = person[i++];

        else if (person[i].korean < person[j].korean)
            temp[k++] = person[j++];

        else if (person[i].korean == person[j].korean) // 국어가 같으면
        { 
            //영어 비교
            if (person[i].english < person[j].english)
                temp[k++] = person[i++];
            else if ((person[i].english > person[j].english))
                temp[k++] = person[j++];
            else if (person[i].english == person[j].english) // 영어가 같으면
            {
                // 수학 비교
                if (person[i].math > person[j].math)
                    temp[k++] = person[i++];
                else if ((person[i].math < person[j].math))
                    temp[k++] = person[j++];
                else if (person[i].math == person[j].math) //수학이 같으면
                {
                    // 이름 비교
                    if (strcmp(person[i].name, person[j].name) < 0)
                        temp[k++] = person[i++];
                    else if (strcmp(person[i].name, person[j].name) > 0)
                        temp[k++] = person[j++];
                }
            }
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

void merge_sort(Score* person, int start, int end)
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
    Score* arr = (Score*)malloc(sizeof(Score) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", &arr[i].name, &arr[i].korean, &arr[i].english, &arr[i].math);
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i].name);
    }

}
