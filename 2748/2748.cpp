#include <iostream>
#include <cstring>
using namespace std;
unsigned long long n, num[100];

unsigned long long fibo(unsigned long long turn) {
	if (turn==0 || turn==1) {
		return turn;
	}
	if (num[turn] != -1) {
		return num[turn];
	}
	return num[turn] = fibo(turn - 1) + fibo(turn - 2);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	memset(num, -1,sizeof(num));
	cin >> n;
	for (int i = 0; i <= 90;i++) {
		cout << fibo(i)<<'\n';
	}
	//cout<<fibo(n);
}