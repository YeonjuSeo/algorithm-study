#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, K;
	int W[105], V[105], backpack[105][100005]; //������ N��, ���� ���԰� K�� ���� �� ��ġ
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}
	for (int i = 1; i <= N; i++) { 
		for (int j = 1; j <= K; j++) { 
			//���� ���Ժ��� ������ ���԰� �۴ٸ�
			if (j >= W[i]) {
				//�ٸ� �������� j��ŭ ä���� ���� ��ġ�� 
				//i��° ������ �־ ���� ���԰� j�� ������ ��ġ �� �� ū �� ���ϱ�
				backpack[i][j] = max(backpack[i - 1][j], backpack[i - 1][j - W[i]] + V[i]);
			}
			//���� ���Ժ��� ������ ���԰� ũ�ٸ�
			else {
				//i��° ���� �����ʰ� ���԰� j�� ������ ��ġ�� �״��
				backpack[i][j] = backpack[i - 1][j];
			}
		}
	}
	cout << backpack[N][K];
}