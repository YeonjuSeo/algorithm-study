#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int T, n;
string card;
bool flag = true;

bool cmp(string a, string b) {
	if (a[0] > b[0]) {
		return a > b;
	}
	else {
		if (a[1] > b[1]) {
			return a > b;
		}
		else {
			return a > b;
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		vector<string> start;
		vector<string> result;
		for (int j = 0; j < n; j++) {
			cin >> card;
			start.push_back(card);
		}
		
		for (int j = 0; j < n; j++) {
			cin >> card;
			result.push_back(card);
		}
		sort(start.begin(), start.end(), cmp);
		sort(result.begin(), result.end(), cmp);
;		for (int j = 0; j < n; j++) {
			//cout << "현재 비교: " << start[j] << ' ' << result[j] << '\n';
			if (start[j] != result[j]) {
				//cout << start[j] << "와 " << result[j] << "는 다르다.\n";
				flag = false;
				cout << "CHEATER\n";
				break;
			}
		}
		if (flag == true) {
			cout << "NOT CHEATER\n";
		}
		flag = true;
	}
}
