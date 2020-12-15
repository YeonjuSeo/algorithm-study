#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int R, B, L, W, m;
	cin >> R >> B;
	
	m = R + B;
	for (int i = 3; i < m; i++) {
		W = i;
		if (m % W != 0) {
			continue;
		}
		L = m / W;
		if (R == (2 * L + 2 * W - 4) && B == (m - 2 * L - 2 * W + 4)) {
			cout<< L<<' '<<W;
			break;
		}
	}
}