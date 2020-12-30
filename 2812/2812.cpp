#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, K;
	string str;
	deque<char> d;
	cin >> N >> K;
	cin >> str;
	
	for (int i = 0; i < N; i++) {
		while (K != 0 && !d.empty() && d.back() < str[i]) {
			d.pop_back();
			K--;
		}
		d.push_back(str[i]);
	}
	for (int i = 0; i < (d.size() - K); i++) {
		cout << d[i];
	}
}
//https://sihyungyou.github.io/baekjoon-2812/ Âü°í