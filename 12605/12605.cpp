#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N,cnt=0;
	string str;
	string word;
	stack<string> s;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		cnt = 0;
		getline(cin, str);
		for (int j = 0; j <= str.length(); j++) {
			if (str[j] == ' '|| j == str.length()) {
				cnt++;
				//cout << word << "´Ü¾î \n";
				s.push(word);
				word.clear();
			}
			else {
				word += str[j];
			}
		}
		cout << "Case #" << i + 1 << ": ";
		for (int j = 0; j < cnt; j++) {
			cout << s.top()<<' ';
			s.pop();
		}
		cout << '\n';
	}
}