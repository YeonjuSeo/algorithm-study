#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, ability[10005],temp=0,result=200000;
	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		cin >> ability[i];
	}
	sort(ability, ability + (2 * n));
	for (int i = 0; i < n; i++) {
		temp = ability[i] + ability[2*n - i-1];
		result=min(temp, result);
		//cout << "temp = " << temp << " result = " << result << '\n';
	}
	cout << result;
}