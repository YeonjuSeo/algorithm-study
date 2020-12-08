#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int T;
	string b;
	stack<char> data;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		getline(cin, b);
		int check = 0;
		for(int j=0;j<b.length();j++){
			if (b[j] == '(') {
				data.push(b[j]);
			}
			else if (b[j]==')') {
				if (data.empty()) {
					cout << "NO"<<'\n';
					check = 1;
					break;
				}
				else {
					data.pop();
				}
			}
		}
		if (check == 0) {
			if (!data.empty()) {
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
			}
		}
		while (!data.empty()) data.pop();
	}
}