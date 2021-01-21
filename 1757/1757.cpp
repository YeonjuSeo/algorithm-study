#include <iostream>
#include <algorithm>
using namespace std;
int N, M, length[10005],DP[10005][505][3];
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 1; i < N; i++) {
		cin >> length[i];
	}
	for (int x = 1; x <= N; x++) {
		for (int y = 0; y <= M; y++) {
			if (y == 0) { //지침 지수가 0일 때
				//뛰다가 쉬거나, 계속 쉬었지만 지침 지수가 0이 안돼서 또 쉬거나, 0이 됐는데도 계속 쉬거나
				DP[x][y][0] = max({ DP[x - 1][y + 1][1],DP[x - 1][y + 1][0], DP[x - 1][y][0] });
				//지침 지수가 0인 상태로 뛰는 경우는 없음
			}
			else if (y == 1) { //지침 지수가 1일 때
				//쉬다가 뛰기 시작. 이어서 뛰는데 지침 지수가 1일 수는 없음
				DP[x][y][1] = DP[x - 1][y - 1][0] + length[x];
				//뛰다가 쉬거나 이어서 쉬기
				DP[x][y][0] = max(DP[x - 1][y + 1][1], DP[x - 1][y+1][0]);
			}
			else {
				//이어서 달리기, 지침 지수가 2이상이므로 쉬다가 달리는 경우는 없음.
				DP[x][y][1] = DP[x - 1][y - 1][1] + length[x];
				//뛰다가 이어서 쉬기
				DP[x][y][0] = max(DP[x - 1][y + 1][1], DP[x - 1][y + 1][0]);
			}
		}
	}
	cout << DP[N][0][0];//끝날 때는 지침 지수가 0이어야하고 지침 지수가 0인데 뛰는 경우는 없다.
}