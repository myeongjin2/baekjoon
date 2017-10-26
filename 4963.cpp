#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int d[100][100];
int a[100][100];
int n, m;

void bfs(int x, int y, int cnt) {

	int dx[] = { 0,0,1,-1,1,1,-1,-1 };
	int dy[] = { 1,-1,0,0,1,-1,1,-1 };
	int k = 0, nx, ny;

	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	d[x][y] = cnt;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (k = 0; k < 8; k++) {
			nx = x + dx[k];
			ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == 1 && d[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					d[nx][ny] = cnt;
				}
			}
		}
	}
}

int main() {
	int i = 0, j = 0;
	while (true) {
		scanf("%d%d", &m, &n);
		if (n == 0 && m == 0) break;
		for (i = 0; i<n; i++) {
			for (j = 0; j<m; j++) {
				scanf("%1d", &a[i][j]);
				d[i][j] = 0;
			}
		}
		int cnt = 0;
		for (i = 0; i<n; i++) {
			for (j = 0; j<m; j++) {
				if (a[i][j] == 1 && d[i][j] == 0) {
					bfs(i, j, ++cnt);
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
