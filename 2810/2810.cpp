#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N,cnt=1,couple=0;
	string seat;
	cin >> N;
	//cin �������� getline�� ���� �� cin.ignore()
	cin.ignore();
	getline(cin, seat);
	for (int i = 0; i < N; i++) {
		if (seat[i] == 'S') {
			//cout << "S��\n";
			cnt++;
		}
		if (seat[i] == 'L') {
			couple++;
			if (couple % 2 != 0) {
				//cout << "LL�̶�\n";
				cnt++;
			}
		}
	}
	if (couple == 0) {
		cout << cnt - 1;
	}
	else cout << cnt;
}