#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N,cnt=0; 
	string str;	
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		stack<char> s;
		for (int i = 0; i < str.length(); i++) {
			if (s.empty()) {
				s.push(str[i]);
			}
			else {
				if (s.top() == str[i]) {
					s.pop();
				}
				else {
					s.push(str[i]);
				}
			}
		}
		if (s.empty()) {
			cnt++;
		}
	}
	cout << cnt;
}