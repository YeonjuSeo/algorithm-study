#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	if (N >= M) {
		cout << N - 1 + N * (M - 1);
	}
	else {
		cout << M - 1 + M * (N - 1);
	}
}