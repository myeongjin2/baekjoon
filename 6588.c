#include <stdio.h>

int main() {
	int i = 0, j = 0, n, pn = 0;
	int prime[1000000] = { 0, };
	int check[1000000 + 1] = { 0, };
	for (i = 2; i <= 1000000; i++) {
		if (check[i] == 0) {
			prime[pn++] = i;
			for (j = i + i; j <= 1000000; j += i) {
				check[j] = 1;
			}
		}
	}
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		for (i = 1; i < pn; i++) {
			if (check[n - prime[i]] == 0) {
				printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
				break;
			}
		}
	}
}
