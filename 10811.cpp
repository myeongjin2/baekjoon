#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n, 0);

	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	while (m--) {
		int start, end;
		cin >> start >> end;
		reverse(a.begin() + (start - 1), a.begin() + end);
	}

	for (auto x : a) {
		cout << x << ' ';
	}

	cout << '\n';

	return 0;
}
