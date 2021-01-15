#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N,M, temp,cipher=0,result, flag=0; //M의 분해합이 N, M이 생성자
	cin >> N;
	temp = N;
	while (temp != 0) {
		temp /= 10;
		cipher++;
	}
	for (int i = N - 9 * cipher; i < N; i++) {
		result = i;
		temp = i;
		while (temp != 0) {
			result += temp % 10;
			temp /= 10;
		}
		if (result == N) {
			flag = 1;
			cout << i;
			break;
		}
	}
	if (flag == 0) {
		cout << '0';
	}
}