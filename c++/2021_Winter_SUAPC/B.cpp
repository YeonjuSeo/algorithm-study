#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long N, result=1;
vector <int> bowl;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> N;
	for (long long i = 0; i < N; i++) {
		int one;
		cin >> one;
		bowl.push_back(one);
	}
	sort(bowl.begin(), bowl.end());
	long long start = bowl[0], temp=1;
	for (int i = 1; i < bowl.size(); i++) {
		if (bowl[i] == bowl[i - 1]) {
			temp++;
		}
		else {
			result = max(temp, result);
			//cout << bowl[i - 1] << "의 개수: " << result << '\n';
			temp = 1;
		}
	}
	result = max(temp, result);
	cout << result;
}
