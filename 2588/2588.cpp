#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int num1, num2,step,sum=0;
	cin >> num1 >> num2;
	for (int i = 0; i < 3; i++) {
		step= num1 * (num2 % 10);
		for (int j = 0; j < i; j++) {
			step *= 10;
		}
		sum += step;
		cout << num1 * (num2 % 10) << '\n';
		num2 /= 10;
	}
	cout << sum;
}