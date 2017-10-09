#include <stdio.h>

int main() {
	int ans = 0;
	char *s, temp[101];
	int b;
	scanf("%s%d", temp, &b);
	s = temp;
	for (int i = 0; i < strlen(s); i++) {
		if ('0' <= s[i] && s[i] <= '9') {
			ans = ans * b + (s[i] - '0');
		}
		else {
			ans = ans * b + (s[i] - 'A' + 10);
		}
	}
	printf("%d\n", ans);
	return 0;
}
