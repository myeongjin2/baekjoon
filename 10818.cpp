#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << *min_element(a.begin(), a.end()) << ' ';
	cout << *max_element(a.begin(), a.end()) << '\n';

	return 0;
}
