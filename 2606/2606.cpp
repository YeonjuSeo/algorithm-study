#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	bool check[105];
	int C, P, cnt=0;
	vector<int> v[105];
	queue<int>q;
	cin >> C>> P;
	for (int i = 0; i < P; i++) {
		int c1, c2;
		cin >> c1 >> c2;
		v[c1].emplace_back(c2);
		v[c2].emplace_back(c1);
	}
	q.push(1); check[1] = true;
	// °¨¿°µÈ ÄÄÇ»ÅÍ Å½»ö
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cnt++;
		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i];
			if (!check[next]) {
				check[next] = true;
				q.push(next);
			}
		}
	}
	cnt -= 1;
	cout << cnt;
}
//https://intaehwang.tistory.com/19