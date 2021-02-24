#include <iostream>
#include <vector>
using namespace std;
long long N, start = 1000005, finish = -1;
long long temp = 0, standard = 0, result=0;
vector<pair<long long, long long>> v;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int price, deliver;
		cin >> price >> deliver;
		v.push_back({ price, deliver });
		if (price < start) {
			start = price;
		}
		if (price > finish) {
			finish = price;
		}
	}
	for (long long i = start; i <= finish; i++) {
		temp = 0;
		for (int j = 0; j < N; j++) {
			if (i <= v[j].first && i>=v[j].second) {
				temp = temp + i - v[j].second;
			}
		}
		if (temp > standard) {
			standard = temp;
			result = i;
		}
	}
	//cout << standard << '\n';
	cout << result;
}
