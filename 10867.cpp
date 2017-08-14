#include <iostream>
#include <list>
#include <string>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;

	set<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}

	for (auto x : s) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
