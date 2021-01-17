#include <iostream>
#include <string>
using namespace std;
int main() {
	int T, sum=0;
	string str;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		sum = 0;
		getline(cin, str);
		sum = (int)str[0] + (int)str[2] - 48 * 2;
		cout << sum << '\n';
	}
}