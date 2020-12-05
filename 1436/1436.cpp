#include <iostream>
using namespace std;

int main() {
	int N, num=666;
	int temp =num, check = 0, idx = 1;
	cin >> N;
	while (idx!=N) {
		num++;
		temp = num;
		check = 0;
		while (temp > 0) {
			if (temp % 10 == 6) {
				check++;
			}
			else {
				check = 0;
			}
			temp /= 10;
			if (check >= 3) {
				idx++;
				break;
			}
		}
	}
	cout << num;
}