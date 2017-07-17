#include <stdio.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int f(int k) {
	int ret = 0;
	while (k) {
		if (k % 10 == 9) {
			ret++;
		}
		k /= 10;
	}
	return ret;
}

int main(void) {
	int sm = 0, mx = 0, a[555][555] = { 0, };
	int n, m, i, j, tmp = 0;

	scanf("%d%d", &n, &m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		tmp = 0;
		for (j = 0; j < m; j++) {
			tmp += f(a[i][j]);
		}
		sm += tmp;
		mx = max(mx, tmp);
	}

	for (i = 0; i < m; i++) {
		int tmp = 0;
		for (j = 0; j < n; j++) {
			tmp += f(a[j][i]);
		}
		mx = max(mx, tmp);
	}

	printf("%d", sm - mx);
}
