#include<stdio.h>

int main(void) {
	long long dp[101] = {0,1,1,1};
	int n, tc, i = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &tc);
		for (int i = 4; i <= tc; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}
		printf("%lld\n", dp[tc]);
	}
}
