#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int check = 1;
	int Y;
	cin >> Y;
	if (Y % 4 != 0) {
		check = 0;
	}
	else if (Y % 100 == 0 && Y % 400 != 0) {
		check = 0;
	}
	if (check == 1) {
		cout << '1';
	}
	else {
		cout << '0';
	}
}