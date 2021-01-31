#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string str;
	bool decision = false;
	while (1) {
		decision = false;
		stack<char> s;
		getline(cin, str);
		if (str == ".") {
			break;
		} 
		for (int i = 0; i < str.length()-1; i++) {
			if (str[i] == '(' || str[i] == '[') {
				//cout << str[i] << "push\n";
				s.push(str[i]); 
			}
			else if (str[i] == ')') {
				/*if (!s.empty()) {
					cout << str[i] << "에 대응하는 s.top = " << s.top() << '\n';
				}*/
				if (!s.empty() && s.top()=='(') {
					s.pop();
				}
				else {
					cout << "no\n";
					decision = true;
					break;
				}
			}
			else if (str[i] == ']') {
				/*if (!s.empty()) {
					cout << str[i] << "에 대응하는 s.top = " << s.top() << '\n';
				}*/
				
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					cout << "no\n";
					decision = true;
					break;
				}
			}
		}
		if (!decision) {
			if (!s.empty()) {
				cout << "no\n";
			}
			else {
				cout << "yes\n";
			}
		}
	}
	
}