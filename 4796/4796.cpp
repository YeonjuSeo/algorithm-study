#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int L, P, V, sum, tnum=0;
	while (1) {
		tnum++;
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) {
			break;
		}
		cout << "Case " << tnum << ": ";
		if (V % P > L) {
			cout << V / P * L + L << '\n';
		}
		else {
			cout << V / P * L + V % P<<'\n';
		}
	}
}