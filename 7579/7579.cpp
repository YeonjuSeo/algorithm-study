#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, memory[105], cost[105],result=2000000000;
	//DP[A][B] : A��° ������ �־ B�� ����� �Ǿ��� �� ��� �� �ִ� �޸�
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
			//����� j�� ��뺸�ٴ� Ŀ�� j ��츦 ������ �� �����ϱ�
			if (j >= cost[i]) { 
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - cost[i]] + memory[i]);
			}
			//else ���� ������ �ȵ�...
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