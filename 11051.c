#include <stdio.h>

int main(void){
	int n, k, i = 0;
	int dp[1001][1001];
	scanf("%d %d", &n, &k);
	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == n) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
			}
			if (i == n && j == k) {
				break;
			}
		}
	printf("%d\n", dp[n][k]);
	return 0;
}
