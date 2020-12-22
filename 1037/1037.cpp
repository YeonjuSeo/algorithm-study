#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int N, aliquot[55];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> aliquot[i];
	}
	sort(aliquot, aliquot + N);
	cout << aliquot[0] * aliquot[N - 1];
}