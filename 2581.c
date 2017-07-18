#include <stdio.h>

inline int IsPrimeNumber(int n) {
	int i = 0;
	int last = n / 2;
	if (n == 1) {
		return 0;
	}
	for (i = 2; i <= last; i++)
	{
		if ((n%i) == 0)
		{
			return 0;
		}
	}
	return n;
}

int main(void) {
	int m, n, i = 0;
	long long sum = 0, tmp = 0;
	int a[1000];

	scanf("%d%d", &m, &n);

	for (i = m; i <= n; i++) {
		if (tmp == 0) {
			tmp = IsPrimeNumber(i);
		}
		sum += IsPrimeNumber(i);
	}

	if (tmp == 0) {
		printf("-1\n");
	}
	else {
		printf("%lld\n%lld", sum, tmp);
	}
}
