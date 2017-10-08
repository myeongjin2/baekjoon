#include <stdio.h>

int main(void) {
	long long d[201][201] = { 0, };
	long long mod = 1000000000;
	int n, k, i = 0, j = 0, l = 0;
	scanf("%d%d", &n, &k);
	d[0][0] = 1LL;
	for (i = 1; i <= k; i++) {
		for (j = 0; j <= n; j++) {
			for (l = 0; l <= j; l++) {
				d[i][j] += d[i - 1][j - l];
				d[i][j] %= mod;
			}
		}
	}
	printf("%d\n", d[k][n]);
	return 0;
}
