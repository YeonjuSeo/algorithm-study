#include <iostream>
using namespace std;
int N, M, ans[10];
void findNum(int depth) {
	if (depth > M) {
		for (int i = 1; i <= M; i++) {
			cout << ans[i] << " ";
		}
		cout << '\n';
	}
	else {
		for (int i = 1; i <= N; i++) {
			ans[depth] = i;
			findNum(depth + 1);
		}
	}
	
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	findNum(1);
}