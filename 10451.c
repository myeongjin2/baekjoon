#include <stdio.h>

#define true 1;
#define false 0;

int a[1001], c[1001];
void dfs(int x) {
	if (c[x]) {
		return;
	}
	c[x] = true;
	dfs(a[x]);
}

int main() {
	int t, n, i = 0, ans = 0;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			c[i] = false;
		}
		ans = 0;
		for (i = 1; i <= n; i++) {
			if (c[i] == 0) {
				dfs(i);
				ans += 1;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
