#include <stdio.h>

int main() {
	int a[1001] = { 0, };
	int d[1001] = { 0, };
	int n, i = 0, j = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = n; i >= 1; i--) {
		d[i] = 1;
		for (j = i + 1; j <= n; j++) {
			if (a[i] > a[j] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
	}
	int ans = d[1];

	for (i = 2; i <= n; i++) {
		if (ans < d[i]) {
			ans = d[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
