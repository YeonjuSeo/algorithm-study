#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N,M,arr[100005], prefix[100005], start, end;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		prefix[i] = prefix[i - 1] + arr[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> start >> end;
		cout << prefix[end] - prefix[start - 1] << '\n';
	}
}