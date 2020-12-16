#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N;
	cin >> N;
	vector<pair<int, string>> p(N);
	for (int i = 0; i < N; i++) {
		cin >> p[i].first >> p[i].second;
	}
	//원소값의 순서를 보장하기 위해 stable_sort
	stable_sort(p.begin(), p.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << p[i].first << ' ' << p[i].second << '\n';
	}
}