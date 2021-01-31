#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N;
	double num[30], n1, n2;
	string str;
	stack<double>s;
	cin >> N;
	cin.ignore();
	getline(cin, str);
	
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			n2 = s.top();
			s.pop();
			n1 = s.top();
			s.pop();
			//cout << "n1= " << n1 << " n2 = " << n2 << '\n';
			if (str[i] == '+') {
				s.push(n1 + n2);
			}
			else if (str[i] == '-') {
				s.push(n1 - n2);
			}
			else if (str[i] == '*') {
				s.push(n1 * n2);
			}
			else if (str[i] == '/') {
				s.push(n1 / n2);
			}
		}
		else {
			//cout << int(str[i]) - 65 << "번째 대응수 push\n";
			s.push(num[int(str[i]) - 65]);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << s.top();
}