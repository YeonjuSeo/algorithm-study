#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N,level[105],next=20005,cnt=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> level[i];
	}
	for (int i = N-1; i >= 0; i--) {
		if (level[i] >= next) {
			cnt = cnt + level[i]-next + 1;
			level[i] = next - 1;
		}
		next = level[i];
		//cout << "next = " << next << '\n';
		for (int i = 0; i < N; i++) cout << level[i] << ' ';
		cout << '\n';
	}
	cout << cnt;
}