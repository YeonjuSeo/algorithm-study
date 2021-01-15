#include <iostream>
using namespace std;
int N, M, result[10];

void findElement(int start, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << result[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = start; i <= N; i++) {
			result[depth] = i;
			findElement(i + 1, depth + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	findElement(1, 0);
}