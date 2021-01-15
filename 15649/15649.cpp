#include <iostream>
using namespace std;
int N, M,answer[10];
bool isUsed[10] = { false };

void findElement(int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << answer[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (isUsed[i] == true) continue;
			answer[depth] = i;
			isUsed[i] = true;
			findElement(depth + 1);
			isUsed[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> M;
	findElement(0);
}