#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, num, cnt=0;
	cin >> N;
	num = 1000 - N;
	cnt += (num / 500);
	num %= 500;
	cnt += (num / 100);
	num %= 100;
	cnt += (num / 50);
	num %= 50;
	cnt += (num / 10);
	num %= 10;
	cnt += (num / 5);
	num %= 5;
	cnt += num;
	cout << cnt;
}