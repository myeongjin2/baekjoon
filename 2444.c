#include <stdio.h>

int main(void) {
	int N, i = 0, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = N - i; j > 0; j--) {
			printf(" ");
		}

		for (j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = N - 1; i > 0; i--) {
		for (j = N - i; j > 0; j--) {
			printf(" ");
		}

		for (j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
