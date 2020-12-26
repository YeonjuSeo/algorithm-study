#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	
	int check = 1;
	while (1) {
		string str;
		stack<char>s;
		check = 1;
		getline(cin, str);
		if (str == ".") {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				//cout << str[i] << " push\n";
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					check = 0;
					break;
				}
				else {
					s.pop();
				}
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != '[') {
					check = 0;
					break;
				}
				else {
					s.pop();
				}
			}
		}
		//닫히지 않은 경우도 생각해야함 ex.[ab
		if (check==1&&s.empty()) {
			cout << "yes\n";
		}
		else if (check == 0 || !s.empty()) {
			cout << "no\n";
		}
	}
}