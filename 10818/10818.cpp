#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N=0,arr[1000000];
	cout << "¿©±â";
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cout << arr[0] << ' ' << arr[N - 1];
}