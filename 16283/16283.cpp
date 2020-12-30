#include <iostream>
#include <utility>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int a, b, n, w, lamb, goat, check=0;
	pair<int, int> result;
	cin >> a >> b >> n >> w;
	for (int i = 1; i < n; i++) {
		lamb = i; goat = n - i;
		if ((lamb * a + goat * b) == w) {
			if (check == 0) {
				result.first = lamb;
				result.second = goat;
			}
			check++;
		}
	}
	if (check == 1) {
		cout << result.first << ' ' << result.second;
	}
	else {
		cout << "-1";
	}
}