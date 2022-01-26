# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define max(a,b) a>b?a:b

int weight[100];
int value[100];
int n;	//물건의 개수
int k;	//제한 무게

int knapsack(int index, int current_weight) {

	if (index == n) return 0;		//입력받은 물건의 개수만큼 가방에 넣었다면 중지

	int add_item = 0;	//물건을 추가했을 때 가치를 저장할 변수

	if (current_weight + weight[index] <= k) {	//현재 무게에 다음 물건의 무게를 추가해도 제한 무게를 초과하지 않는다면
		add_item = value[index] + knapsack(index + 1, current_weight + weight[index]);	//현재 가치에 다음 물건의 가치를 더하고 저장
	}

	int no_add_item = knapsack(index + 1, current_weight);	//다음 물건을 추가하지 않은 가치를 저장

	return max(add_item, no_add_item);	//물건을 추가했을 때 가치와 추가하지 않았을 때 가치 중 큰 가치를 리턴

}

int main() {
	scanf("%d %d", &n, &k);		//물건의 개수와 제한 무게를 입력 받음
	for (int i = 0; i < n; i++) {
		scanf("%d %d", weight + i, value + i);
	}
	printf("%d\n", knapsack(0, 0));
	return 0;
}