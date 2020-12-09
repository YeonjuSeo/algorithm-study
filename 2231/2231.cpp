#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, temp,digit=0,check=0, sum=0;
	cin >> N;
	temp = N;
	while (temp > 0) {
		temp /= 10;
		digit++;
	}
	for (int i = N - 9 * digit; i <= N; i++) {
		temp = i;
		sum = temp;
		cout << "temp´Â " << temp << '\n';
		for (int j = 0; j < digit; j++) {
			sum = sum + temp % 10;
			temp /= 10;
		}
		cout << "sumÀº " << sum << '\n';
		if (sum == N) {
			cout <<i;
			check = 1;
			break;
		}
	}
	if (check == 0) {
		cout << 0;
	}
}