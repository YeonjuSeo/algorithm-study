#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int A, B, C, result=0, sum=0, cnt=0;
	cin >> A >> B >> C;
	if (B >= C) {
		cout << -1;
	}
	else {
		cout<< A / (C - B) + 1;
	}
}
