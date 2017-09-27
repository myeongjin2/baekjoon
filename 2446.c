#include <stdio.h>

int main(void) {
	int N, i = 0, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 2; j <= i; j++) {
			printf(" ");
		}
		for (j = (N * 2 + 1) - (i * 2); j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i < N; i++) {
		for (j = N - 2; j >= i; j--) {
			printf(" ");
		}
		for (j = 1 + (i * 2); j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}

}
