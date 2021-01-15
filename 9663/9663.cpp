#include <iostream>
using namespace std;
int N, cnt = 0;
bool isEW[30] = { false }, isNE[30] = { false }, isSW[30] = { false };

void placeQueen(int depth) {
	if (depth == N) {
		cnt++;
	}
	else {
		for (int i = 0; i < N; i++) {
			//j가 아닌 depth를 써서 시간복잡도를 (N^N)^N에서 N^N으로 대폭 줄임
			if (!isEW[i] && !isNE[i + depth] && !isSW[depth - i + N - 1]) {
				//i가 변하며 새로운 한 줄에 하나씩 배치될 것이므로 좌우는 확인할 필요 없음
				isEW[i] = true;
				isNE[i + depth] = true;
				isSW[depth - i + N - 1] = true;
				placeQueen(depth + 1);
				isEW[i] = false;
				isNE[i + depth] = false;
				isSW[depth - i + N - 1] = false;
			}
			else {
				continue;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N;
	placeQueen(0);
	cout << cnt;
}