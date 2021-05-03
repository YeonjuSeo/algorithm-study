#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, result[1000005];
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return b.second>a.second;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back({ i,n });
	}
	sort(v.begin(), v.end(), cmp);
	/*for (int i = 0; i < v.size(); i++) {
		cout << '('<<v[i].first<<", "<<v[i].second<<") ";
	}
	cout << '\n';*/
	int flag;
	result[v[0].first] = 0;
	for (int i = 1; i < N; i++) {
		int j;
		if (v[i].second == v[i - 1].second) {
			result[v[i].first] = result[v[i - 1].first];
		}
		else {
			result[v[i].first] = result[v[i - 1].first] + 1;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << result[i] << ' ';
	}
}
