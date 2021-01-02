#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string str;
	int cnt = 0;
	while (1) {
		getline(cin, str);
		cnt = 0;
		if (str == "#") {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}