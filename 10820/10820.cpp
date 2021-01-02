#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string str;
	int upper = 0, lower = 0, number = 0, blank = 0;
	while (1) {
		upper = 0, lower = 0, number = 0, blank = 0;
		getline(cin, str);
		// C++ EOF 贸府 规过 https://takeknowledge.tistory.com/20
		if (cin.eof() == true) {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			if ('A' <= str[i] && str[i] <= 'Z') {
				upper++;
			}
			else if ('a' <= str[i] && str[i] <= 'z') {
				lower++;
			}
			else if ('0' <= str[i] && str[i] <= '9') {
				number++;
			}
			else if (str[i] == ' ') {
				blank++;
			}
		}
		cout << lower << ' ' << upper << ' ' << number << ' ' << blank << '\n';
	}
	
}