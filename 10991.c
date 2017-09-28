#include <stdio.h>

int main(void) {
	int N, i = 0, j, k;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N-i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++) {
			if (j % 2 == 0) {
				printf(" ");
			}
			else if(j%2==1){
				printf("*");
			}
		}
		printf("\n");
	}
}
