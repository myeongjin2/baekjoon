#include <stdio.h>

int main(void) {
	int T;
	int a, b, x = 1;

	scanf("%d", &T);

	while (T--) {
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", x, a, b, a + b);
		x++;
	}
}
