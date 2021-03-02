#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T,N;
	long long arr[105] = { 0 };
	arr[0] = 0; arr[1] = 1; arr[2] = 1; arr[3] = 1;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		if (arr[N]==0 && N > 3) {
			for (int j = 4; j <= N; j++) {
				if (arr[j] != 0) {
					continue;
				}
				else {
					arr[j] = arr[j - 3] + arr[j - 2];
				}
			}
		}
		cout << arr[N] << '\n';
	}
	
}
