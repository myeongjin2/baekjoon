#include <stdio.h>

int main() {
	int n, i = 0;

	scanf("%d", &n);

	for (i = 2; i <= n;) {
		if (n % i == 0) {
			printf("%d\n", i);
			n /= i;
		}
		else {
			i++;
		}
	}
}
