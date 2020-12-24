#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N,rope[100005],max=-1,cur=0,sum=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> rope[i];
		sum += rope[i];
	}
	sort(rope, rope + N);
	for (int i = 0; i < N; i++) {
		if (max < rope[i] * (N - i)) {
			max = rope[i] * (N - i);
		}
	}
	cout << max;
}