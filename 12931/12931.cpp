#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, B[55], cnt=0,result=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	while (1){
		cnt = 0;
		for (int i = 0; i < N; i++) {
			if (B[i] == 0) cnt++;
			else break;
		}
		if (cnt == N) break;
		for (int i = 0; i < N; i++) {
			if (B[i] % 2 != 0) {
				//cout << i << "번째의 " << B[i] << "에서 -1\n";
				B[i] -= 1; 
				result++;
			}
		}
		cnt = 0;
		for (int i = 0; i < N; i++) {
			if (B[i] == 0) cnt++;
			else break;
		}
		if (cnt == N) break;
		for (int i = 0; i < N; i++) {
			B[i] /= 2;
		}
		//cout << "한번에 /2\n";
		result++;
	}
	cout << result;
}