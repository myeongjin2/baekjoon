#include <stdio.h>

int main() {
	int n, i = 0, ans;

	scanf("%d", &n);
	ans = n;

	for (i = n - 1; i > 0; i--) {
		ans *= i;
	}
	if (ans != 0) {
		printf("%d\n", ans);
	}
	else {
		printf("1\n");
	}
}
