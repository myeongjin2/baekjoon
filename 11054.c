#include <stdio.h>

int main() {
	int a[1000] = { 0, };
	int d[1000] = { 0, };
	int d2[1000] = { 0, };
	int n, i = 0, j = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		d[i] = 1;
		for (j = 0; j < i; j++) {
			if (a[j]<a[i] && d[j] + 1>d[i]) {
				d[i] = d[j] + 1;
			}
		}
	}
	for (i = n - 1; i >= 0; i--) {
		d2[i] = 1;
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j] && d2[j] + 1 > d2[i]) {
				d2[i] = d2[j] + 1;
			}
		}
	}
	int ans = 0;

	for (i = 0; i < n; i++) {
		if (ans < d[i] + d2[i] - 1) {
			ans = d[i] + d2[i] - 1;
		}
	}

	printf("%d\n", ans);
	return 0;
}
