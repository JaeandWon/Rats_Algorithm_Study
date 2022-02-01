#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

#define max_vertex 10001

typedef struct graph {
	int n; //정점개수
	int adj_matrix[max_vertex][max_vertex];

}graph;

int visited[max_vertex];

void init(graph* g) {	//그래프 초기화
	int r, c;
	g->n = 1;
	for (r = 0; r < max_vertex; r++) {
		for (c = 0; c < max_vertex; c++) {
			g->adj_matrix[r][c] = 0;
		}
	}
}

void insert_vertex(graph* g, int v) {	//정점 삽입 함수
	g->n++;
}

void insert_edge(graph* g, int start, int end) {
	g->adj_matrix[start][end]=1;	//인접행렬 이중연결
	g->adj_matrix[end][start]=1;
}

void DFS(graph* g, int v) {
	int w;
	visited[v] = true;
	printf("%d ", v);
	for (w = 0; w < g->n; w++) {
		if (g->adj_matrix[v][w] && !visited[w]) {
			DFS(g, w);
		}
	}
}
//ㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇ
/// QUEUE 
typedef struct {
	int queue[max_vertex];
	int front, rear;
}Queue;

void queue_init(Queue* q) {
	q->front = 0;
	q->rear = 0;
}

void enqueue(Queue* q, int data) {	//큐 삽입 함수
	q->rear = (q->rear + 1) % max_vertex;
	q->queue[q->rear] = data;

}

int dequeue(Queue* q) {
	q->front = (q->front + 1) % max_vertex;
	return q->queue[q->front];
}
//0000000000000000000000000000000000000000000000000000000
void BFS(graph* g, int v) {
	int w;
	Queue q;
	queue_init(&q);
	visited[v] = true;
	printf("%d ", v);
	enqueue(&q, v);
	while (!(q.front == q.rear)) {
		v = dequeue(&q);
		for (w = 0; w < g->n; w++) {
			if (g->adj_matrix[v][w] && !visited[w]) {
				visited[w] = true;
				printf("%d ", w);
				enqueue(&q, w);
			}
		}
	}
}

void main(void) {
	graph* g;
	g = (graph*)malloc(sizeof(graph));
	init(g);
	int n;
	int m;
	int v;
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 1; i < n+1; i++) {
		insert_vertex(g, i);
	}

	for (int i = 1; i < m+1; i++) {
		int st;
		int end;
		scanf("%d %d", &st, &end);
		insert_edge(g, st, end);
	}


	
	DFS(g, v);
	printf("\n");
	for (int i = 0; i < max_vertex; i++) {
		visited[i] = false;
	}
	
	BFS(g, v);
	printf("\n");
	free(g);
}