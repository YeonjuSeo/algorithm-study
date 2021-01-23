#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, arr[1000005];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N, cmp);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
}