#include <stdio.h>

int max(int a, int b) {
	return a > b ? a : b; 
}

int main(void) {
	int chk[100001] = { 0, };
	int n, k, cnt = 0, ans = 0, i = 0;
	
	scanf("%d", &n);

	for (i = 0; i < 2 * n; i++) {
		scanf("%d", &k);
		chk[k] ? --cnt : ++cnt;
		chk[k] ^= 1;
		ans = max(ans, cnt);
	}

	printf("%d", ans);
}
