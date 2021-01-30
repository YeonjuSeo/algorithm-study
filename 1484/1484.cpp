#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//mem과 cur이 0으로 시작하면 안된다.
	long long mem = 1, cur = 1, temp=0;
	int G, flag=0;
	cin >> G;
	while (1) {
		//cout << "cur = " << cur << " mem = " << mem << '\n';
		temp = cur * cur - mem * mem;
		if (temp > G) {
			if (cur - mem == 1) {
				break;
			}
			mem++;
		}
		else if (temp == G) {
			flag = 1;
			cout << cur << '\n';
			cur++;
		}
		else {
			cur++;
		}
	}
	if (flag == 0) {
		cout << "-1";
	}
}