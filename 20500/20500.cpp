#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
long long combi[1520][1520];

long long findCombi(int n, int r) {
	if (r == 0 || n == r) {
		return 1;
	}
	if (combi[n][r] != 0) {
		//cout << "combi[" << n << "][" << r << "] = " << combi[n][r] << '\n';
		return combi[n][r];
	}
	combi[n][r] = (findCombi(n - 1, r - 1)%1000000007 + findCombi(n - 1, r)%1000000007) % 1000000007;
	//cout << "combi[" << n << "][" << r << "] = " << combi[n][r] << '\n';
	return combi[n][r];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, n1, n5;
	long long DP[3][1520] = { 0 }; //1과 5의 사용 횟수에 따른 15의 배수
	cin >> N;
	for (int i = 0; i < N; i++) {
		n1 = i; n5 = N-1-i;
		//cout << "n1 = "<<n1<<" n5 = " << n5 << '\n';
		if ((n1 + 5 * n5) % 3 == 1) {
			DP[1][N-1] =(DP[1][N-1]+ findCombi(n1+n5, n5)%1000000007)%1000000007;
			//cout << "DP[" << N << "] = " << DP[N] << '\n';
		}
	}
	cout << DP[1][N-1];
}