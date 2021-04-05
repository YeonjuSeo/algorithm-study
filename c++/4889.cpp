#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	string str;
	int turn = 1;
	while (1) {
		str.clear();
		stack<char> s;
		int cnt = 0;
		getline(cin, str);
		if (str[0] == '-') break;
		for (int i = 0; i < str.length(); i++) {
			char c = str[i];
			if (c == '{') {
				s.push(c);
			}
			else { //c=='}'
				if (!s.empty() && s.top() == '{') {
					s.pop();
				}
				else if (s.empty()) {
					s.push('{');
					cnt++;
				}
			}
		}
		if (str.size()==0) {
			cout << turn << ". " << 0 << '\n';
		}
		else cout << turn << ". " << s.size()/2+cnt<<'\n';
		turn++;
	}
}
