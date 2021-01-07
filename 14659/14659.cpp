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
	//(!)마지막에 더 큰 봉우리가 나타나지 않았을 경우를 위해 밖에서도 비교해야함
	result = max(result, cnt);
	cout << result;
}