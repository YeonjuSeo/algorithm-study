#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, peak[30005],cur=0,cnt=0,result=-1; 
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> peak[i];
	}
	for (int i = 0; i < N; i++) {
		if (cur<peak[i]) {
			cur = peak[i];
			result = max(result, cnt);
			cnt = 0;
		}
		else {
			cnt++;
		}
	}
	//(!)¸¶Áö¸· ºñ±³¸¦ »©¸ÔÀ½
	result = max(result, cnt);
	cout << result;
}