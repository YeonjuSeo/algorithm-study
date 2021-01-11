#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, memory[105], cost[105],result=2000000000;
	//DP[A][B] : A번째 물건을 넣어서 B의 비용이 되었을 때 비울 수 있는 메모리
	int DP[105][10005];
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> memory[i];
	}
	for (int i = 1; i <= N; i++) {
		cin >> cost[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 10005; j++) {
			//비용이 j의 비용보다는 커야 j 경우를 포함할 수 있으니까
			if (j >= cost[i]) { 
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - cost[i]] + memory[i]);
			}
			//else 조건 잊으면 안됨...
			else {
				DP[i][j] = DP[i - 1][j];
			}
			if (DP[i][j] >= M) {
				result = min(result, j);
			}
		}
	}
	cout << result;
}