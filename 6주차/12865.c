# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define max(a,b) a>b?a:b

int weight[100];
int value[100];
int n;	//������ ����
int k;	//���� ����

int knapsack(int index, int current_weight) {

	if (index == n) return 0;		//�Է¹��� ������ ������ŭ ���濡 �־��ٸ� ����

	int add_item = 0;	//������ �߰����� �� ��ġ�� ������ ����

	if (current_weight + weight[index] <= k) {	//���� ���Կ� ���� ������ ���Ը� �߰��ص� ���� ���Ը� �ʰ����� �ʴ´ٸ�
		add_item = value[index] + knapsack(index + 1, current_weight + weight[index]);	//���� ��ġ�� ���� ������ ��ġ�� ���ϰ� ����
	}

	int no_add_item = knapsack(index + 1, current_weight);	//���� ������ �߰����� ���� ��ġ�� ����

	return max(add_item, no_add_item);	//������ �߰����� �� ��ġ�� �߰����� �ʾ��� �� ��ġ �� ū ��ġ�� ����

}

int main() {
	scanf("%d %d", &n, &k);		//������ ������ ���� ���Ը� �Է� ����
	for (int i = 0; i < n; i++) {
		scanf("%d %d", weight + i, value + i);
	}
	printf("%d\n", knapsack(0, 0));
	return 0;
}