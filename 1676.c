#include <stdio.h>

int main() {
	int n, i = 0, ans = 0;

	scanf("%d", &n);
	for (i = 5; i <= n; i *= 5) {
		ans += n / i;
	}
	printf("%d\n", ans);
	return 0;
}
