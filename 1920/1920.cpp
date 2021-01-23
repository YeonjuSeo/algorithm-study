#include <iostream>
#include <algorithm>
using namespace std;

int N, M, low, mid, high, result[100005];
long long narr[100005], marr[100005];
void findNum(int idx, int test) {
	low = 0; high = N - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (test == narr[mid]) {
			result[idx] = 1;
			return;
		}
		else if (marr[idx] < narr[mid]) {
			high = mid-1;
		}
		else if (marr[idx] > narr[mid]) {
			low = mid + 1;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> narr[i];
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> marr[i];
	}
	sort(narr, narr + N);
	for (int i = 0; i < M; i++) {
		findNum(i, marr[i]);
	}
	for (int i = 0; i < M; i++) {
		cout << result[i] << '\n';
	}
}