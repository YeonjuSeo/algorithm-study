#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int cnt = 0;
	string str;
	string ring[100];

	int N;
	cin >> str >>N;
	for (int i = 0; i < N; i++) {
		cin >> ring[i];
		ring[i].append(ring[i]);
	}
	for (int i = 0; i < N; i++) {
		if (ring[i].find(str) != string::npos) {
			cnt++;
		}
	}
	cout << cnt;
}