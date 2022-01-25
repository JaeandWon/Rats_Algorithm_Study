#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}
int dp[2][100000];

int main(void) 
{
	int t, n;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);

		for (int i = 0; i < 2; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &dp[i][j]);

		dp[0][1] += dp[1][0]; // 왜 처음에는 더했을까? 
		dp[1][1] += dp[0][0];

		for (int i = 2; i < n; i++) 
		{
			dp[0][i] += max(dp[1][i - 1], dp[1][i - 2]); 
			dp[1][i] += max(dp[0][i - 2], dp[0][i - 1]); 
		}

		printf("%d\n", max(dp[0][n - 1], dp[1][n - 1])); 
	}

}