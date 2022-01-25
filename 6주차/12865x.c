#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int weight;
    int value;
} Stuff;

int main()
{
    int n, k; // n = 물건 개수     k = 무게
    scanf("%d %d", &n, &k);

    Stuff* stuff = (Stuff*)malloc(sizeof(Stuff) * n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &stuff[i].weight, &stuff[i].value);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", stuff[i].weight, stuff[i].value);
    }
    

}