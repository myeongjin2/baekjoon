#include <stdio.h>

int main() {
	int a[1000] = { 0, }, d[1000] = { 0, }, n, i = 0, j, ans;

	scanf("%d", &n);
	
	for (i; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		d[i] = a[i];
		for (j = 0; j < i; j++) {
			if (a[j] < a[i] && d[i] < d[j] + a[i]) {
				d[i] = d[j] + a[i];
			}
		}
	}
	ans = d[0];
	for (i = 0; i < n; i++) {
		if (ans < d[i]) {
			ans = d[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
