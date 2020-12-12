#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	double A, B;
	cin >> A >> B;
	//유효숫자 15자리
	cout.precision(15);
	cout << A / B;
}