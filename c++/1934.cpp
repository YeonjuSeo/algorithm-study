#include <iostream>
using namespace std;
int T, A, B, num;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> T;
	for (int j = 0; j < T; j++) {
		cin >> A >> B;
		num = 1;
		if (A > B) {
			for (int i = 2; i <= B; i++) {
				if (A % i == 0 && B % i == 0) {
					num = i;
				}
			}
			cout << "max = " << num << '\n';
			cout << B * (A / num) << '\n';
		}
		else {
			for (int i = 2; i <= A; i++) {
				if (A % i == 0 && B % i == 0) {
					num = i;
				}
			}
			cout << "max = " << num << '\n';
			cout << A * (B / num) << '\n';
		}
	}
}
