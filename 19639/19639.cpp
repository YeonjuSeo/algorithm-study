#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int X, Y, M, max, p, plus = 0, minus = 0;
	int damage[100005], heal[100005];
	cin >> X >> Y >> M;
	max = M;
	for (int i = 1; i <= X; i++) {
		cin >> damage[i];
		minus += damage[i];
	}
	for (int i = 1; i <= Y; i++) {
		cin >> heal[i];
		plus += heal[i];
	}
	//�⺻ ü�� + ȸ���� ���� �������� �� ũ�ų� ���ٸ�
	if (plus+ max - minus <= 0) {
		cout << '0';
	}
	else {
		int d = 1, h = 1;
		while (1) {
			//�����߸� ���� �������� ��
			if (d-1 != X) {
				M -= damage[d];
				cout << -d << '\n';
				//p = process.back();
				//cout << p << " �� process�� �߰�\n";
				d++;

				//�������� ���ų�
				//�������� ��� ����߰ų�
				//�ʿ� �̻����� ȸ���� ���� �ִ� ���
				//�ٽ� ������ ����
				if (Y==0 || h-1==Y || max-M < heal[h]) {
					continue;
				}
				while (1) {
					M += heal[h];
					cout << h << '\n';
					//p = process.back();
					//cout << p << " �� process�� �߰�\n";
					h++;
					//�������� ��� ����ߴٸ� break
					if (h - 1 == Y) {
						break;
					}
					//ü�� �̻����δ� ȸ������ �ʵ���	
					if (M + heal[h] > max) {
						break;
					}
				}
			}
			//���� ��� �����߷��� ��
			else {
				//�� óġ �� ȸ�� �������� ������ ��
				while (h-1 != Y) {
					cout << h << '\n';
					h++;
				}
				break;
			}
		}
	}
}