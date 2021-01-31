#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, K, turn=0, num;
	queue<int> q;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << '<';
	while (!q.empty()) {
		num = q.front();
		q.pop();
		turn++;
		//cout << "Â÷·Ê: num = " << num << " turn = " << turn << '\n';
		if (turn%K == 0) {
			if (q.empty()) {
				cout << num << ">";
			}
			else {
				cout << num << ", ";
			}
		}
		else {
			q.push(num);
		}
	}
}