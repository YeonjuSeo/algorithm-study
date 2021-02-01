#include <iostream>
#include <vector>
using namespace std;
int N, K, lft = 0, rht = 0, amount, idx, midx = -1;
long long ice[1000005], result = 0, temp = 0;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> amount >> idx;
		ice[idx] = amount;
		midx = max(midx, idx);
	}
	/*for (int i = 0; i < N; i++) {
		cout << ice[i]<<'\n';
	}*/
	//cout <<left << "부터 " << right << "까지 뻗어서 가질 수 있는 얼음 중 최대 양 = " << result << "\n";
	while(rht<=midx) {
		if (rht > 2 * K) {
			temp -= ice[lft];
			lft++;
		}
		temp += ice[rht];
		rht++;
		//cout << left << "부터 " << right << "까지 뻗은 얼음 양 = " << temp << "\n";
		result = max(result, temp);
		//cout << left << "부터 " << right << "까지 뻗어서 가질 수 있는 얼음 중 최대 양 = " << result << "\n";
	}
	cout << result;
}