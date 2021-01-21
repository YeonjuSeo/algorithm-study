#include <iostream>
#include <algorithm>
using namespace std;
int N, DP[1000005];

int findWay(int num) {
	int t1=9876543, t2=9876543, t3=9876543, result;
	if (num == 1) {
		return DP[num] = 0;
	}
	if (num == 2 || num == 3) {
		return DP[num] = 1;
	}
	else if (DP[num] != 0) {
		//cout << "DP[" << num << "]으로 "<<DP[num] << "반환\n";
		return DP[num];
	} 
	else {
		if (num % 3 == 0) {
			//cout << "1 + DP[" << num /3 << "]\n";
			t1 = 1 + findWay(num / 3);
		}
		if (num % 2 == 0) {
			//cout << "1 + DP[" << num /2 << "]\n";
			t2 = 1 + findWay(num / 2);
		}
		//cout << "1 + DP[" << num - 1 << "]\n";
		t3 = 1 + findWay(num - 1);

		result = min(t1, t2);
		result = min(result, t3);
		return DP[num] = result;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N;
	cout << findWay(N);
}