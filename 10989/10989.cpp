#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, num, cnt[10001] = {0,};
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> num;
		cnt[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		//if (cnt[i] == 0) continue;
		for (int j = 0; j < cnt[i]; j++) {
			cout << i << '\n';
		}
	}
}