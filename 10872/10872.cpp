#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, result=1;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		result *= i;
	}
	cout << result;
}