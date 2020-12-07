#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int T;
	string b;
	stack<char> data;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cout << "i는 " << i << "입니다.\n";
		getline(cin, b);
		int j = 0, idx=0;
		int check = 0;
		while (sizeof(b)/sizeof(char)!=idx) {
			cout << idx<<'\n';
			//cout << "b[j]는" <<b[j]<<"입니다\n";
			if (b[j] == '(') {
				data.push(b[j]);
				j++;
			}
			else {
				if (data.empty()) {
					cout << "NO"<<'\n';
					check = 1;
					break;
				}
				else {
					data.pop();
					j--;
				}
			}
			idx++;
		}
		cout << "while문 탈출\n";
		if (check == 0) {
			if (!data.empty()) {
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
			}
		}
	}
}