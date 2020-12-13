#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string str;
	int len = 0, cnt = 1;
	getline(cin,str);
	len = str.length();
	if (str[0] == ' ') {
		cnt -= 1;
		//cout << "앞에서 공백\n";
	}
	if (str[len - 1]==' ') {
		cnt -= 1;
		//cout << "뒤에서 공백\n";
	}
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			cnt++;
		}
	}
	cout << cnt;
}