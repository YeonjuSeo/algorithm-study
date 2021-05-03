#include <iostream>
using namespace std;
int DP[45];
int fibonacci(int n) {
	if (n == 0) return DP[0];
	if (n == 1)return DP[1];
	if (n >= 2 && DP[n] == 0) {
		DP[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	return DP[n];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	DP[0] = 0; DP[1] = 1;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		if (n == 0) cout << 1 << ' ';
		else cout << fibonacci(n - 1)<< ' ';
		cout << fibonacci(n) << '\n';
	}
}
