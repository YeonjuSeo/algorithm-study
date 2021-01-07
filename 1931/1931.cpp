#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
	
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, cnt=0,start=0;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < N; i++) {
		if (v[i].first < start) {
			continue;
		}
		cnt++;
		start = v[i].second;
	}
	cout << cnt;
}