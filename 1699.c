#include <stdio.h>

int main(void) {
	int d[100001] = { 0, };
	int n, i = 0, j = 0;

	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		d[i] = i;
		for (j = 1; j*j <= i; j++) {
			if (d[i] > d[i - j*j] + 1) {
				d[i] = d[i - j*j] + 1;
			}
		}
	}
	printf("%d\n", d[n]);
	return 0;
}
