#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, BW=0,WB=0;
	string board[50];
	cin >> N>>M;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, board[i]);
	}
	for (int i = 0; i < N - 8; i++) {
		for (int j = 0; j < M - 8; j++) {
			if (board[i][j] == 'W') {
				if (i + j % 2 == 0) {
					BW++;
				}
				else {
					WB++;
				}
			}
			else {
				if (i + j % 2 == 0) {
					WB++;
				}
				else {
					BW++;
				}
			}
		}
	}
	cout << max(BW,WB);
}