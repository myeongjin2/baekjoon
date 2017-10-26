#include <cstdio>
#include <vector>
using namespace std;

bool check[1001];
vector<int> a[1001];

void dfs(int node) {
	int i = 0, next;
	check[node] = true;
	for (i = 0; i < a[node].size(); i++) {
		next = a[node][i];
		if (check[next] == false) {
			dfs(next);
		}
	}
}
int main() {
	int n, m, i = 0, u, v, components = 0;
	scanf("%d%d", &n, &m);

	for (i = 0; i < m; i++) {
		scanf("%d%d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (i = 1; i <= n; i++) {
		if (check[i] == false) {
			dfs(i);
			components += 1;
		}
	}
	printf("%d\n", components);
	return 0;
}
