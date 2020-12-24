#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N,cnt=1,couple=0;
	string seat;
	cin >> N;
	//cin 다음으로 getline할 때는 꼭 cin.ignore()
	cin.ignore();
	getline(cin, seat);
	for (int i = 0; i < N; i++) {
		if (seat[i] == 'S') {
			//cout << "S라서\n";
			cnt++;
		}
		if (seat[i] == 'L') {
			couple++;
			if (couple % 2 != 0) {
				//cout << "LL이라서\n";
				cnt++;
			}
		}
	}
	if (couple == 0) {
		cout << cnt - 1;
	}
	else cout << cnt;
}