#include <stdio.h>

int main(void) {
	int N, i = 0, j, k;

	scanf("%d", &N);

	if (N == 1) {
		printf("*");
	}

	for (i = 1; i < N; i++) {
		for (j = 1; j <= N - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++) {
			if (j == 1 || j == i * 2 - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
		if (i + 1 == N) {
			for (i = 1; i <= N * 2 - 1; i++) {
				printf("*");
			}
		}
	}
}
