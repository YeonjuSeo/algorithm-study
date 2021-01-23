#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int M, N;
	long long time[100005], low, high, mid, total, result;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> time[i];
	}
	low = 1; high = 1e18; 
	while (low <= high) {
		mid = (low + high) / 2; total = 0;
		for (int i = 0; i < N; i++) {
			total += mid / time[i];
			if (total >= M) break;
		}
		if (total >= M) {
			result = mid;
			high = mid - 1;
		}
		else if (total < M) {
			low = mid + 1;
		}
	}
	cout << result;
}