#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first) {
		return a < b;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ' << v[i].second<<'\n';
	}
}