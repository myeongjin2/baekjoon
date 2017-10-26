#include <cstdio>
#include <queue>
using namespace std;

int main() {
	int n, i = 0, j = 0, cnt = 0, x, y, k = 0;
	int nx, ny, ans = -1, l = 0;
	int a[100][100] = { 0, };
	int g[100][100] = { 0, };
	int d[100][100] = { 0, };
	int dx[] = { 0,0,1,-1 };
	int dy[] = { 1,-1,0,0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] == 1 && g[i][j] == 0) {
				g[i][j] = ++cnt;
				queue<pair<int, int>>q;
				q.push(make_pair(i, j));
				while (!q.empty()) {
					x = q.front().first;
					y = q.front().second;
					q.pop();
					for (k = 0; k < 4; k++) {
						nx = x + dx[k];
						ny = y + dy[k];
						if (0 <= nx && nx < n && 0 <= ny && ny < n) {
							if (a[nx][ny] == 1 && g[nx][ny] == 0) {
								g[nx][ny] = cnt;
								q.push(make_pair(nx, ny));
							}
						}
					}
				}
			}
		}
	}
	for (l = 1; l <= cnt; l++) {
		queue<pair<int, int>> q;
		for (i = 0; i<n; i++) {
			for (j = 0; j<n; j++) {
				d[i][j] = -1;
				if (g[i][j] == l) {
					q.push(make_pair(i, j));
					d[i][j] = 0;
				}
			}
		}
		while (!q.empty()) {
			x = q.front().first;
			y = q.front().second;
			q.pop();
			for (k = 0; k<4; k++) {
				nx = x + dx[k];
				ny = y + dy[k];
				if (0 <= nx && nx < n && 0 <= ny && ny < n) {
					if (d[nx][ny] == -1) {
						d[nx][ny] = d[x][y] + 1;
						q.push(make_pair(nx, ny));
					}
				}
			}
		}
		for (i = 0; i<n; i++) {
			for (j = 0; j<n; j++) {
				if (a[i][j] == 1 && g[i][j] != l) {
					if (ans == -1 || d[i][j] - 1 < ans) {
						ans = d[i][j] - 1;
					}
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
