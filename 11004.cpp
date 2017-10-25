#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a[5000000] = { 0, };
	int n, k, i = 0;

	scanf("%d%d", &n, &k);
	k -= 1;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	nth_element(a, a + k, a + n);
	printf("%d\n", a[k]);
	return 0;
}
