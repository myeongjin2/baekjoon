#include <iostream>
#include <string>
using namespace std;
int main() {
	string A, B, C, D;
	long long res = 0;

	cin >> A >> B >> C >> D;

	string A_B = A + B, C_D = C + D;
	res = stoll(A_B) + stoll(C_D);

	cout << res << '\n';
}
