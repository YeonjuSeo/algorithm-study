#include <iostream>
using namespace std;
const int INF = 98765432;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
	int N, DP[1005][3];
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int pay[3];
		cin >> pay[0] >> pay[1] >> pay[2];
		if (i == 1) {
			DP[i][0] = pay[0]; DP[i][1] = pay[1]; DP[i][2] = pay[2];
			continue;
		}
		//문제 이해 주의
		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + pay[0];
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + pay[1];
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + pay[2];
	}
	cout << min(DP[N][0], min(DP[N][1], DP[N][2]));
}
