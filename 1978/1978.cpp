#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, num,cnt=0,check;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		check = 1;
		if (num == 1) continue;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				//cout << num << "는 소수가 아닙니다.\n";
				check = 0;
				break;
			}
		}
		if (check == 1) {
			//cout << num << "는 소수입니다.\n";
			cnt++;
		}
	}
	cout << cnt;
}