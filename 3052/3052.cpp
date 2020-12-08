#include <iostream>
using namespace std;
int main() {
	int num, idx = 0;
	int left[10];
	for (int i = 0; i < 10; i++) {
		int check = 0;
		cin >> num;
		for (int j = 0; j < idx; j++) {
			if (num % 42 == left[j]) {
				check = 1;
				break;
			}
		}
		if (check == 0) {
			left[idx++] = num % 42;
		}
	}
	cout << idx;
}