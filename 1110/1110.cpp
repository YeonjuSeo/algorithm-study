#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N,temp=0,cur=0,cnt=0;
	cin >> N;
	cur = N;
	do{
		//cout << "cur = " << cur << '\n';
		if (cur < 10) {
			temp = cur;
			cur = cur * 10 + temp;
		} 
		else {
			temp = cur % 10 + cur / 10;
			cur = temp % 10 + ((cur % 10) * 10);
		}
		cnt++;
	} while (cur != N);
	cout << cnt;
}