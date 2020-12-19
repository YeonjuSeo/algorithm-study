#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		if (N < 12 || M < 4) {
			cout << "-1"<<'\n';
		}
		else {
			cout << M * 11 + 4<<'\n';
		}
	}
}