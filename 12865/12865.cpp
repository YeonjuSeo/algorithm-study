#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, K;
	int W[105], V[105], backpack[105][100005];
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			//가방 무게보다 물건의 무게가 작다면
			if (j >= W[i]) {
				//이전까지의 가치와 넣었을 때의 가치 중 더 큰 것 비교하기
				backpack[i][j] = max(backpack[i - 1][j], backpack[i - 1][j - W[i]] + V[i]);
			}
			//가방 무게보다 물건의 무게가 크다면
			else {
				//i번째 물건 넣지말고 이전까지의 가치 넣기
				backpack[i][j] = backpack[i - 1][j];
			}
		}
	}
	cout << backpack[N][K];
}