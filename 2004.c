#include <stdio.h>

int min(int a, int b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	long long two = 0, five = 0, n, m, i = 0;

	scanf("%d%d", &n, &m);
	
	for (i = 2; i <= n; i *= 2) {
		two += n / i;
	}
	for (i = 2; i <= n - m; i *= 2) {
		two -= (n - m) / i;
	}
	for (i = 2; i <= m; i *= 2) {
		two -= m / i;
	}
	for (i = 5; i <= n; i *= 5) {
		five += n / i;
	}
	for (i = 5; i <= n - m; i *= 5) {
		five -= (n - m) / i;
	}
	for (i = 5; i <= m; i *= 5) {
		five -= m / i;
	}
	printf("%d\n", min(two, five));
	return 0;
}
