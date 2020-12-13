#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string dict[20000];
bool compare1(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> dict[i];
	}
	sort(dict, dict + N, compare1);
	for (int i = 0; i < N; i++) {
		if (dict[i] == dict[i - 1]) {
			continue;
		}
		cout << dict[i]<<'\n';
	}
}