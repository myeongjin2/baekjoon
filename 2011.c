#include <stdio.h>
#include <string.h>

int main(void) {
	int d[5001] = { 0, };
	int mod = 1000000, i = 0, x = 0;
	char s[5002] = { 0, };
	
	scanf("%s", s + 1);
	int n = strlen(s + 1);
	d[0] = 1;

	for (i = 1; i <= n; i++) {
		x = s[i] - '0';
		if (1 <= x&&x <= 9) {
			d[i] += d[i - 1];
			d[i] %= mod;
		}
		if (i == 1) {
			continue;
		}
		if (s[i - 1] == '0') {
			continue;
		}
		x = (s[i - 1] - '0') * 10 + (s[i] - '0');
		if (10 <= x&&x <= 26) {
			d[i] += d[i - 2];
			d[i] %= mod;
		}
	}
	printf("%d\n", d[n]);
	return 0;
}
