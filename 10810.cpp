#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n, 0);

	while (m--) {
		int start, end, color;
		cin >> start >> end >> color;
		fill(a.begin() + (start - 1), a.begin() + end, color);
	}

	for (auto x : a) {
		cout << x << ' ';
	}

	cout << '\n';

	return 0;
}
