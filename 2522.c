#include <stdio.h>

int main(void) {
	int N, i = 0, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N-i; j++) {
			printf(" ");
		}

		for (j = N; j > N-i; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i < N; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}

		for (j = 1; j <= N - i; j++) {
			printf("*");
		}
		printf("\n");
	}

}
