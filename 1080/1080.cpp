#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M, cnt=0,check = 0, n1, n2;
	string A[55], B[55];

	// 입력 받기
	cin >> N >> M;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, A[i]);
	}
	for (int i = 0; i < N; i++) {
		getline(cin, B[i]);
	}

	for (int i = 0; i <= N - 3; i++) {
		for (int j = 0; j <= M - 3; j++) {
			n1 = int(A[i][j])-48;
			n2 = int(B[i][j])-48;
			//cout << A[i][j]<<" 와 "<< n1 << ' ' << B[i][j]<<" 와 "<<n2 << '\n';
			if (n1 != n2) {
				cnt++;
				for (int k = i; k < i + 3; k++) {
					for (int z = j; z < j + 3; z++) {
						if (A[k][z] == '0') {
							A[k][z] = '1';
						}
						else {
							A[k][z] = '0';
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (A[i][j] != B[i][j]) {
				check++;
			}
		}
	}
	if (check == 0) {
		cout << cnt;
	}
	else {
		cout << "-1";
	}
}