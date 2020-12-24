#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, K,coin[15],cnt=0;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> coin[i];
	}
	for (int i = N - 1; i >= 0; i--) {
		cnt += K / coin[i];
		K %= coin[i];
	}
	cout << cnt;
}