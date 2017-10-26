#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[20001];
int color[20001];

void dfs(int node, int c) {
	int i = 0, next;
	color[node] = c;
	for (i = 0; i < a[node].size(); i++) {
		next = a[node][i];
		if (color[next] == 0) {
			dfs(next, 3 - c);
		}
	}
}

int main() {
	int t, n, m, i = 0, u, v, k = 0, j = 0;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (i = 1; i <= n; i++) {
			a[i].clear();
			color[i] = 0;
		}
		for (i = 0; i < m; i++) {
			scanf("%d%d", &u, &v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		for (i = 1; i <= n; i++) {
			if (color[i] == 0) {
				dfs(i, 1);
			}
		}
		bool ok = true;
		for (i = 1; i <= n; i++) {
			for (k = 0; i < a[i].size(); k++) {
				j = a[i][k];
				if (color[i] == color[j]) {
					ok = false;
				}
			}
		}
		printf("%s\n", ok ? "YES" : "NO");
	}
	return 0;
}
