#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VERTEX 1001

int graph[MAX_VERTEX][MAX_VERTEX] = { 0 };
int DFS_V[MAX_VERTEX] = { 0 };
int BFS_V[MAX_VERTEX] = { 0 };
int queue[MAX_VERTEX] = { 0 };

void dfs(int vertex_start, int vertex) //Ž���� ������ vertex�� ��ȣ, vertex ����
{
    DFS_V[vertex_start] = 1;
    printf("%d ", vertex_start);
    
    for ( int i = 1; i <= vertex; i++)
    {   // �� vertex�� edge�� �̾������� && ���� �̹� �湮�� �̷� 
        if (graph[vertex_start][i] == 1 && DFS_V[i] == 0) 
        {
            dfs(i, vertex); //�� ���� ��
        }
    }
    return;
}

void bfs(int vertex_start, int vertex) //Ž���� ������ vertex�� ��ȣ, vertex ����
{
    int front = 1, rear = 1, pop;
    
    printf("%d ", vertex_start);
    queue[1] = vertex_start;
    rear++;
    BFS_V[vertex_start] = 1;

    while (front < rear)
    {
        pop = queue[front];
        front++;

        for (int i = 1; i <= vertex; i++)
        {
            if (graph[pop][i] == 1 && BFS_V[i] == 0)
            {
                printf("%d ", i);
                queue[rear] = i;
                rear++;
                BFS_V[i] = 1;
            }
        }
    }
}

int main()
{
    int vertex, edge, vertex_start; // vertex, edge, Ž���� ������ vertex�� ��ȣ
    int start, end; // edge�� �����ϴ� �� vertex ��ȣ��  
    scanf("%d %d %d", &vertex, &edge, &vertex_start);

    while (edge--)
    {
        scanf("%d %d", &start, &end);
        graph[start][end] = 1;
        graph[end][start] = 1;
    }
    dfs(vertex_start, vertex);
    printf("\n");
    bfs(vertex_start, vertex);
}