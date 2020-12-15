#include <iostream>
using namespace std;
long long f[95] = {0};
long long fibonacci(int n) {
	if (n == 0 || n == 1) {
		f[n] = n;
	}
	else if(f[n]==0) {
		f[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	return f[n];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	cout << fibonacci(n);
}