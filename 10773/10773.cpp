#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int K, num, result=0; cin >> K;
	stack<int> s;
	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			result -= s.top();
			s.pop();
		}
		else {
			result += num;
			s.push(num);
		}
	}
	cout << result;
}