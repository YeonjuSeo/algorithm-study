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
	//cout <<left << "���� " << right << "���� ��� ���� �� �ִ� ���� �� �ִ� �� = " << result << "\n";
	while(rht<=midx) {
		if (rht > 2 * K) {
			temp -= ice[lft];
			lft++;
		}
		temp += ice[rht];
		rht++;
		//cout << left << "���� " << right << "���� ���� ���� �� = " << temp << "\n";
		result = max(result, temp);
		//cout << left << "���� " << right << "���� ��� ���� �� �ִ� ���� �� �ִ� �� = " << result << "\n";
	}
	cout << result;
}