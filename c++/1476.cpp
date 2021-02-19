#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long E, S, M, result=0;
	cin >> E>>S>>M;
	//cout << "변환 E = " << E << " S = " << S << " M = " << M << '\n';
	
	while (1) {
		//E,S,M에서 0이 나올 수는 없음
		if (result % 15 + 1 == E && result % 28 + 1 == S && result % 19 + 1== M) {
			cout << result+1;
			break;
		}
		result++;
	}
}
