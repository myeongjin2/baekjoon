#include<stdio.h>

int main() {
	int n = 0, i = 0;
	long long a = 2, b = 2;

	scanf("%d", &n);

	while(n--) {
		b += a;
		a = b - a;
	}

	printf("%lld", b);
}
