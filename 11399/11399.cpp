#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, P[1005], result=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}
	sort(P, P + N);
	for (int i = 0; i < N; i++) {
		result += P[i] * (N-i);
	}
	cout << result;
}