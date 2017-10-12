#include <stdio.h>

void convert(int num, int base) {
	if (num == 0) {
		return;
	}
	convert(num / base, base);
	printf("%d ", num%base);
}

int main(void) {
	int a, b, n, ans = 0, i = 0, x;
	scanf("%d%d%d", &a, &b, &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		ans = ans*a + x;
	}
	convert(ans, b);

	return 0;
}
