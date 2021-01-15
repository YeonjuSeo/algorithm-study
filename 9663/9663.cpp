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
			//j�� �ƴ� depth�� �Ἥ �ð����⵵�� (N^N)^N���� N^N���� ���� ����
			if (!isEW[i] && !isNE[i + depth] && !isSW[depth - i + N - 1]) {
				//i�� ���ϸ� ���ο� �� �ٿ� �ϳ��� ��ġ�� ���̹Ƿ� �¿�� Ȯ���� �ʿ� ����
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