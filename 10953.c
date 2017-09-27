#include <stdio.h>

int main(void) {
	int T;
	int a, b;
	char temp;

	scanf("%d", &T);

	while (T--) {
		scanf("%d%c%d", &a, &temp, &b);
		printf("%d\n", a + b);
	}
}
