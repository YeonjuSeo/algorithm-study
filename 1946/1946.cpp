#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> v1, pair<int, int>v2) {
	return v1.first < v2.first;
}

int main() {
	int T, N,cnt,check=0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		vector<pair<int, int>> v(N);
		cnt = 1;
		for (int j = 0; j < N; j++) {
			cin >> v[j].first >> v[j].second;
		}
		sort(v.begin(), v.end(), cmp);
		check = v[0].second;
		for (int j = 1; j < N; j++) {
			if (check > v[j].second) {
				check = v[j].second;
				cnt++;
			}
		}
		cout <<cnt<<'\n';
	}
}