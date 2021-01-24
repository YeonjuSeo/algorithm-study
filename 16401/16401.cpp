#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int M, N, num;
	long long length[1000005], low=0, high=0, mid, result=-1;
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		cin >> length[i];
		high = max(high, length[i]);
	}
	while (low <= high) {
		mid = (low + high) / 2; num = 0;
		if (mid == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			if (length[i]/mid > 0) {
				num = num + (length[i] / mid);
			}
		}
		if (num >= M) {
			result = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (result == -1) cout << "0";
	else {
		cout << result;
	}
}
	