#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, idx=0;
	double n1, n2, num[30], result;
	string formula;
	stack<double> s;

	cin >> N;
	cin.ignore();
	getline(cin,formula);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < formula.size(); i++) {
		if (formula[i] == '+') {
			n1 = s.top();
			s.pop();
			n2 = s.top();
			s.pop();
			s.push(n1 + n2);
		}
		else if (formula[i] == '-') {
			n1 = s.top();
			s.pop();
			n2 = s.top();
			s.pop();
			s.push(n2 - n1);
		}
		else if (formula[i] == '*') {
			n1 = s.top();
			s.pop();
			n2 = s.top();
			s.pop();
			s.push(n1 * n2);
		}
		else if (formula[i] == '/') {
			n1 = s.top();
			s.pop();
			n2 = s.top();
			s.pop();
			s.push(n2 / n1);
		}
		else {
			s.push(num[int(formula[i]) - 65]);
		}
	}
	result = s.top();
	cout << fixed;
	cout.precision(2);
	cout << result;
}