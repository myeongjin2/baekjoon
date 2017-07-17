#include <stdio.h>

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int n, q, i = 0, que, sum = 0, j = 0;
	int a, b, c, d;
	int seq[1001];

	scanf("%d%d", &n, &q);

	for (i = 0; i < n; i++) {
		scanf("%d", &seq[i]);
	}

	for (i = 0; i < q; i++) {

		sum = 0;
		scanf("%d", &que);

		if (que == 2) {
			scanf("%d%d%d%d", &a, &b, &c, &d);
			for (j = a - 1; j <= b - 1; j++) {
				sum += seq[j];
			}
			for (j = c - 1; j <= d - 1; j++) {
				sum -= seq[j];
			}
			printf("%d\n", sum);
		}

		else {
			scanf("%d%d", &a, &b);
			for (j = a - 1; j <= b - 1; j++) {
				sum += seq[j];
			}
			printf("%d\n", sum);
			swap(&seq[a - 1], &seq[b - 1]);
		}
	}
}
