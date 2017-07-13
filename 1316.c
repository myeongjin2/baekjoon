#include<stdio.h>
#include<string.h>

int main() {
	int n, p[200] = { 0, }, tmp;
	char str[101] = "";

	scanf("%d", &n);
	tmp = n;

	for (int i = 0; i < n; i++) {
		memset(p, -1, sizeof(p));
		scanf("%s", str);

		for (int j = 0; str[j]; j++) {
			if (p[str[j]] == -1 || p[str[j]] == j - 1) {
				p[str[j]] = j;
			}
			else {
				tmp--; break; 
			}
		}
	}
	printf("%d", tmp);
}
