#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, num, idx[300005], cur;
	cin >> N;
	int cnt = N - 1;
	for (int i = 0; i < N; i++) {
		cin >> num;
		idx[num] = i;
	}
	cur = idx[N];
	for (int i = N - 1; i > 0; i--) {
		if (idx[i] < cur) {
			cnt--;
			//cout << "ÇöÀç cnt = " << cnt << '\n';
			cur = idx[i];
		}
		else {
			break;
		}
	}
	cout << cnt;
}