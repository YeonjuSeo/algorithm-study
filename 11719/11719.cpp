#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string str;
	while (1) {
		getline(cin, str);
		if (cin.eof() == true) {
			break;
		}
		cout << str<<'\n';
	}
}