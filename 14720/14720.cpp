#include <iostream>
using namespace std;
int main() {
	int N, turn = -1,cnt=0;
	int street[1005];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> street[i];
		if (turn == -1&&street[i]==0) {
			turn = 0;
			cnt++;
		}
		else if (turn == 0 && street[i] == 1) {
			turn = 1;
			cnt++;
		}
		else if (turn == 1 && street[i] == 2) {
			turn = 2;
			cnt++;
		}
		else if (turn == 2 && street[i] == 0) {
			turn = 0;
			cnt++;
		}
	}
	cout << cnt;
}